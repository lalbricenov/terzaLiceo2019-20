//Menu en el que el usuario puede ingresar opciones
//Al ejecutar el programa se le debe ingresar el nombre de archivo, en caso de no hacerlo se le debe preguntar al usuario
//Se abre el archivo y se leen las filas
// Vamos a guardar un estudiante, con id, nombres apellidos, curso, edad
// Se va a tener otro archivo con las materias: id, nombre, profesor
// Se va a tener otro archivo con los indicadores: id, nombre (escrito, oral)
// Se va a tener otro archivo con las notas: id, idEst, idMat, indicador, nota, peso (peso va entre 0 y 100)


#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>



int main(int argc, char *argv[])
{
    
    
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