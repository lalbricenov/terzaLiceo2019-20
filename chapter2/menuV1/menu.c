// Programa que escucha lo que el usuario
// quiere hacer
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
void imprimirLista(string nombreArchivo)
{
    FILE* archivo = fopen(nombreArchivo, "r");
    int tam = 50;
    char linea[tam];
    printf("Nombre                  Apellido                Nota 1  Nota 2  Nota 3\n");
    while(fgets(linea, tam, archivo) != NULL)
    {
        // Leemos cada línea, y en cada una separamos
        // por comas
        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, "," );
        float notas[3];
        for(int i = 0; i < 3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
        }
        // En este caso NULL indica que
        // iniciamos desde donde terminó el strtok anterior
        printf("%-20s%-20s%8.1f%8.1f%8.1f\n",
        nombre, apellido,notas[0], notas[1], notas[2]);
    }

    fclose(archivo);
}

void addStudent(string nombreArchivo)
{
    printf("Ingrese los datos del estudiante a añadir\n");
    string nombre = get_string("Nombre: ");
    string apellido = get_string("Apellido: ");
    float notas[3];
    for(int i = 0; i < 3; i++)
    {
        notas[i] = get_float("Ingrese nota %d: ", i + 1);
    }
    FILE * archivo = fopen(nombreArchivo, "a");
    fprintf(archivo, "\n%s,%s,%.1f,%.1f,%.1f", nombre, apellido, notas[0], notas[1], notas[2]);
    fclose(archivo);
}
void modificarEstudiante(string nombreArchivo)
{
    string nombreAModif = get_string("Ingrese el nombre del estudiante a modificar: ");

    //Determinar la línea en la que se encuentra este estudiante
    FILE *archivo =  fopen(nombreArchivo, "r");
    int tam = 50;
    char linea[tam];
    int bandera = 0;
    int nLinea = 0;
    while(fgets(linea, tam, archivo) != NULL)
    {
        nLinea++;
        // Leemos cada línea, y en cada una separamos
        // por comas
        string nombre = strtok(linea, ",");
        if(strcmp(nombreAModif, nombre) == 0)
        {
            bandera = 1;
            break;
        }
    }
    fclose(archivo);
    if(bandera == 0)
    {
        printf("Estudiante no encontrado.\n");
    }else
    {
        archivo = fopen(nombreArchivo, "r");
        FILE *archivoTmp = fopen("temp.tmp", "w");
        int nLineaBuscada = nLinea;
        nLinea = 0;
        while(fgets(linea, tam, archivo) != NULL)
        {
            nLinea++;
            if (nLinea != nLineaBuscada)
            {
                fputs(linea, archivoTmp);
            }else
            {
                printf("Ingrese los nuevos datos del estudiante\n");
                string nombre = get_string("Nombre: ");
                string apellido = get_string("Apellido: ");
                float notas[3];
                for(int i = 0; i < 3; i++)
                {
                    notas[i] = get_float("Ingrese nota %d: ", i + 1);
                }
                fprintf(archivoTmp, "%s,%s,%.1f,%.1f,%.1f\n", nombre, apellido, notas[0], notas[1], notas[2]);
            }
        }
        fclose(archivo);
        fclose(archivoTmp);
        remove(nombreArchivo);
        rename("temp.tmp", nombreArchivo);
    }
}
void verPromedios(string nombreArchivo)
{
    FILE * archivo = fopen(nombreArchivo, "r");

    int tam = 50;
    char linea[tam];
    printf("Nombre           Apellido                Promedio\n");
    while(fgets(linea, tam, archivo) != NULL)
    {
        // Leemos cada línea, y en cada una separamos
        // por comas
        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, "," );
        float notas[3];
        for(int i = 0; i < 3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
        }
        float promedio = (notas[0] + notas[1] + notas[2])/3;
        // En este caso NULL indica que
        // iniciamos desde donde terminó el strtok anterior
        printf("%-20s%-20s%8.1f\n",nombre, apellido,promedio);
    }

    fclose(archivo);

}
int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Muy pocos argumentos. Uso: ./menu <nombreArchivo>\n");
        return 1;
    }
    string nombreArchivo = argv[1];
    // printf("%s", nombreArchivo);
    char salir = 'N';
    while(salir == 'N' || salir == 'n')
    {
        char accion;
        menuPrincipal();
        accion = get_char("¿Qué desea hacer?: ");
        if(accion == 'V' || accion == 'v')
        {
            // printf("Esta es la lista\n");
            imprimirLista(nombreArchivo);
        }
        if(accion == 'A' || accion == 'a')
        {
            addStudent(nombreArchivo);
        }
        if(accion == 'M' || accion == 'm')
        {
            modificarEstudiante(nombreArchivo);
        }
        if(accion == 'P' || accion == 'p')
        {
            verPromedios(nombreArchivo);
        }
        if(accion == 'S' || accion == 's')
        {
            salir = 'Y';// Hago que salir sea diferente a 'N'
        }
    }
}