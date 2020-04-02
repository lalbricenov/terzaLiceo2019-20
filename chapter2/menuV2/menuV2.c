// Programa para manipular un archivo de datos con las notas de estudiantes
#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>


void menuPrincipal(void)
{
    printf("*****************************************\n");
    printf("Ver lista: V\n");
    printf("Añadir estudiante: A\n");
    printf("Modificar estudiante: M\n");
    printf("Ver promedios: P\n");
    printf("Salir: S\n");
    printf("*****************************************\n");
}
// void imprimirLista(string nombreArchivo)
// {
//     FILE* archivo = fopen(nombreArchivo, "r");
//     int tam = 50;
//     char linea[tam];
//     printf("Nombre                  Apellido                Nota 1  Nota 2  Nota 3\n");
//     while(fgets(linea, tam, archivo) != NULL)
//     {
//         // Leemos cada línea, y en cada una separamos
//         // por comas
//         string nombre = strtok(linea, ",");
//         string apellido = strtok(NULL, "," );
//         float notas[3];
//         for(int i = 0; i < 3; i++)
//         {
//             notas[i] = atof(strtok(NULL, ","));
//         }
//         // En este caso NULL indica que
//         // iniciamos desde donde terminó el strtok anterior
//         printf("%-20s%-20s%8.1f%8.1f%8.1f\n",
//         nombre, apellido,notas[0], notas[1], notas[2]);
//     }

//     fclose(archivo);
// }

// void addStudent(string nombreArchivo)
// {
//     printf("Ingrese los datos del estudiante a añadir\n");
//     string nombre = get_string("Nombre: ");
//     string apellido = get_string("Apellido: ");
//     float notas[3];
//     for(int i = 0; i < 3; i++)
//     {
//         notas[i] = get_float("Ingrese nota %d: ", i + 1);
//     }
//     FILE * archivo = fopen(nombreArchivo, "a");
//     fprintf(archivo, "\n%s,%s,%.1f,%.1f,%.1f", nombre, apellido, notas[0], notas[1], notas[2]);
//     fclose(archivo);
// }
// void modificarEstudiante(string nombreArchivo)
// {
//     string nombreAModif = get_string("Ingrese el nombre del estudiante a modificar: ");

//     //Determinar la línea en la que se encuentra este estudiante
//     FILE *archivo =  fopen(nombreArchivo, "r");
//     int tam = 50;
//     char linea[tam];
//     int bandera = 0;
//     int nLinea = 0;
//     while(fgets(linea, tam, archivo) != NULL)
//     {
//         nLinea++;
//         // Leemos cada línea, y en cada una separamos
//         // por comas
//         string nombre = strtok(linea, ",");
//         if(strcmp(nombreAModif, nombre) == 0)
//         {
//             bandera = 1;
//             break;
//         }
//     }
//     fclose(archivo);
//     if(bandera == 0)
//     {
//         printf("Estudiante no encontrado.\n");
//     }else
//     {
//         archivo = fopen(nombreArchivo, "r");
//         FILE *archivoTmp = fopen("temp.tmp", "w");
//         int nLineaBuscada = nLinea;
//         nLinea = 0;
//         while(fgets(linea, tam, archivo) != NULL)
//         {
//             nLinea++;
//             if (nLinea != nLineaBuscada)
//             {
//                 fputs(linea, archivoTmp);
//             }else
//             {
//                 printf("Ingrese los nuevos datos del estudiante\n");
//                 string nombre = get_string("Nombre: ");
//                 string apellido = get_string("Apellido: ");
//                 float notas[3];
//                 for(int i = 0; i < 3; i++)
//                 {
//                     notas[i] = get_float("Ingrese nota %d: ", i + 1);
//                 }
//                 fprintf(archivoTmp, "%s,%s,%.1f,%.1f,%.1f\n", nombre, apellido, notas[0], notas[1], notas[2]);
//             }
//         }
//         fclose(archivo);
//         fclose(archivoTmp);
//         remove(nombreArchivo);
//         rename("temp.tmp", nombreArchivo);
//     }
// }
// void verPromedios(string nombreArchivo)
// {
//     FILE * archivo = fopen(nombreArchivo, "r");

//     int tam = 50;
//     char linea[tam];
//     printf("Nombre           Apellido                Promedio\n");
//     while(fgets(linea, tam, archivo) != NULL)
//     {
//         // Leemos cada línea, y en cada una separamos
//         // por comas
//         string nombre = strtok(linea, ",");
//         string apellido = strtok(NULL, "," );
//         float notas[3];
//         for(int i = 0; i < 3; i++)
//         {
//             notas[i] = atof(strtok(NULL, ","));
//         }
//         float promedio = (notas[0] + notas[1] + notas[2])/3;
//         // En este caso NULL indica que
//         // iniciamos desde donde terminó el strtok anterior
//         printf("%-20s%-20s%8.1f\n",nombre, apellido,promedio);
//     }

//     fclose(archivo);

// }



typedef struct {
    int id;
    string nombre;
    string apellido;
    float notas[3];
} Estudiante;

void printEstudiante(Estudiante est)
{
    printf("%20s%20s", est.nombre, est.apellido );
    for(int i = 0; i < 3; i++)
    {
        printf("%8.1f", est.notas[i]);
    }
    printf("\n");
}

void imprimirLista(Estudiante* estudiantes, int nEstudiantes)
{
    for(int i = 0; i < nEstudiantes; i++)
    {
        printEstudiante(estudiantes[i]);
    }
}

int main(int argc, char *argv[])
{
    // Estudiante num1;
    // num1.id=20;
    // num1.nombre = get_string("Ingrese el nombre: ");
    // num1.apellido = get_string("Ingrese el apellido: ");
    // for(int i = 0; i < 3; i++)
    // {
    //     num1.notas[i] = get_float("Ingrese nota: ");
    // }
    // printEstudiante(num1);

    string nombreArchivo;
    if(argc < 2)
    {
        nombreArchivo = get_string("Ingrese el nombre del archivo a abrir: ");
    }
    else
    {
        nombreArchivo = argv[1];
    }

    // Carga del archivo a la memoria
    // Se reserva espacio de memoria para 1000 líneas
    const int NMax = 1000;
    int nEstudiantes = 0;
    Estudiante * estudiantes = malloc(NMax * sizeof(Estudiante));
    FILE *archivo = fopen(nombreArchivo, "r");
    if ( archivo != NULL)
    {
        int tam = 300;
        char linea[tam];
        Estudiante est;
        while(fgets(linea, tam, archivo) != NULL)
        {

            // Leemos cada línea, y en cada una separamos
            // por comas
            est.nombre = strtok(linea, ",");
            est.apellido = strtok(NULL, "," );
            for(int i = 0; i < 3; i++)
            {
                est.notas[i] = atof(strtok(NULL, ","));
            }

            estudiantes[nEstudiantes] = est;
            nEstudiantes++;
        }
    }
    fclose(archivo);


    char salir = 'N';
    while(salir == 'N' || salir == 'n')
    {
        char accion;
        menuPrincipal();
        accion = get_char("¿Qué desea hacer?: ");
        if(accion == 'V' || accion == 'v')
        {
            // printf("Esta es la lista\n");
            imprimirLista(estudiantes, nEstudiantes);
        }
        // if(accion == 'A' || accion == 'a')
        // {
        //     addStudent(nombreArchivo);
        // }
        // if(accion == 'M' || accion == 'm')
        // {
        //     modificarEstudiante(nombreArchivo);
        // }
        // if(accion == 'P' || accion == 'p')
        // {
        //     verPromedios(nombreArchivo);
        // }
        if(accion == 'S' || accion == 's')
        {
            salir = 'Y';// Hago que salir sea diferente a 'N'
        }
    }
}