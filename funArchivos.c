#include "defArchivos.h"

// Funciones ----------------------------------------------------------------------------

/**
 *
 * @brief
 * @date
 * @author
 * @param
 * @return
 * @Ejemplo
 *
 */
// MENÚS ----------------------------------------------------------------------------------
//  Menú Principal
extern int menuPrincipal()
{
    int opcion;
    printf("\n\n\tMenú Principal\n\n");
    printf("\t1) Archivos de Texto\n");
    printf("\t2) Archivos Binarios\n");
    printf("\t3) Operaciones entre Archivos de Texto y Binarios\n");
    printf("\t4) Salir\n");
    printf("\n\tSeleccione una opción: ");
    scanf("%d", &opcion);
    return opcion;
}
// Menú de Archivos de Texto
extern int menuArchivosTexto()
{
    int opcion;
    printf("\n\n\tMenú de Archivos de Texto\n\n");
    printf("\t1) Crear Archivo de Texto\n");
    printf("\t2) Leer Archivo de Texto\n");
    printf("\t3) Modificar Archivo de Texto\n");
    printf("\t4) Regresar al Menú Principal\n");
    printf("\n\tSeleccione una opción: ");
    scanf("%d", &opcion);
    return opcion;
}
// Menú de Archivos Binarios
extern int menuArchivosBinarios()
{
    int opcion;
    printf("\n\n\tMenú de Archivos Binarios\n\n");
    printf("\t1) Crear Archivo Binario\n");
    printf("\t2) Leer Archivo Binario\n");
    printf("\t3) Modificar Archivo Binario\n");
    printf("\t4) Regresar al Menú Principal\n");
    printf("\n\tSeleccione una opción: ");
    scanf("%d", &opcion);
    return opcion;
}
// Menú de Operaciones entre Archivos de Texto y Binarios
extern int menuOperacionesArchivos()
{
    int opcion;
    printf("\n\n\tMenú de Operaciones entre Archivos de Texto y Binarios\n\n");
    printf("\t1) Convertir de Archivo de Texto a Archivo Binario\n");
    printf("\t2) Convertir de Archivo Binario a Archivo de Texto\n");
    printf("\t3) Regresar al Menú Principal\n");
    printf("\n\tSeleccione una opción: ");
    scanf("%d", &opcion);
    return opcion;
}

// Funciones de Archivos de Texto -------------------------------------------------------
// Crear Archivo de Texto
extern void crearArchivoTexto()
{
    FILE *archivo;
    char nombreArchivo[50];
    char texto[1000];

    printf("\n\n\tCrear Archivo de Texto\n\n");

    printf("\tIngrese el nombre del archivo: ");
    scanf(" %[^\n]", nombreArchivo);
    strcat(nombreArchivo, ".txt");

    archivo = fopen(nombreArchivo, "w");
    if (archivo == NULL)
    {
        printf("\n\tError al crear el archivo\n");
        exit(1);
    }
    else
    {
        printf("\n\tIngrese el texto a guardar en el archivo: ");
        scanf(" %[^\n]", texto);
        fprintf(archivo, "%s", texto);
        fclose(archivo);

        system("clear");
        printf("\n\tArchivo creado " GREEN "exitosamente\n" RESET);

        printf("\n\tPresione" YELLOW " ENTER " RESET "para continuar\n");
        getchar();
        getchar();
    }
    return;
}