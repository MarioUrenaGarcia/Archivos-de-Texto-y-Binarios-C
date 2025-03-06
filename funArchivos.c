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
// Leer Archivo de Texto
extern void leerArchivoTexto()
{
    FILE *archivo;
    char nombreArchivo[50];
    char texto[1000];
    int contadorPalabras = 0;
    int contadorPalabrasImpresas = 0;

    printf("\n\n\tLeer Archivo de Texto\n\n");

    printf("\tIngrese el nombre del archivo: ");
    scanf(" %[^\n]", nombreArchivo);
    strcat(nombreArchivo, ".txt");

    archivo = fopen(nombreArchivo, "r");
    if (archivo == NULL)
    {
        printf("\n\tError al abrir el archivo\n");
        exit(1);
    }
    else
    {
        // Opcion alternativa usando feof
        // while (feof(archivo) == 0)
        // {
        //     fscanf(archivo, " %[^\n]", texto);
        //     printf("\n%s\n", texto);
        // }

        // Opcion alternativa usando fscanf
        // while (fscanf(archivo, "%s", texto) == 1)
        // {
        //     printf("%s ", texto);
        // }
        // printf("\n");

        // Opcion alternativa usando fscanf
        // while (fscanf(archivo, " %[^\n]", texto) == 1)
        // {
        //     printf("%s\n", texto);
        // }

        // Opcion alternativa contando palabras primero para evitar el ultimo espacio basura
        while (fscanf(archivo, "%s", texto) == 1)
        {
            contadorPalabras++;
        }
        fclose(archivo);

        archivo = fopen(nombreArchivo, "r");
        if (archivo == NULL)
        {
            printf("\n\tError al abrir el archivo\n");
            exit(1);
        }
        while (fscanf(archivo, "%s", texto) == 1)
        {
            contadorPalabrasImpresas++;
            if (contadorPalabrasImpresas < contadorPalabras)
            {
                printf("%s ", texto);
            }
            else
            {
                printf("%s", texto);
            }
        }
        printf(CYAN "/fin\n" RESET);

        fclose(archivo);

        printf("\n\tPresione" YELLOW " ENTER " RESET "para continuar\n");
        getchar();
        getchar();
    }
    return;
}
// Append Archivo de Texto
extern void appendArchivoTexto()
{
    FILE *archivo;
    char nombreArchivo[50];
    char texto[1000];

    printf("\n\n\tModificar Archivo de Texto\n\n");

    printf("\tIngrese el nombre del archivo: ");
    scanf(" %[^\n]", nombreArchivo);
    strcat(nombreArchivo, ".txt");

    archivo = fopen(nombreArchivo, "a");
    if (archivo == NULL)
    {
        printf("\n\tError al abrir el archivo\n");
        exit(1);
    }
    else
    {
        printf("\n\tIngrese el texto a guardar en el archivo: ");
        scanf(" %[^\n]", texto);
        fprintf(archivo, " %s", texto);
        fclose(archivo);

        system("clear");
        printf("\n\tArchivo modificado " GREEN "exitosamente\n" RESET);

        printf("\n\tPresione" YELLOW " ENTER " RESET "para continuar\n");
        getchar();
        getchar();
    }
    return;
}

// Funciones de Archivos Binarios -------------------------------------------------------
// Crear Archivo Binario
extern void crearArchivoBinario()
{
    FILE *archivo;
    char nombreArchivo[50];
    char texto[1000];

    printf("\n\n\tCrear Archivo Binario\n\n");

    printf("\tIngrese el nombre del archivo: ");
    scanf(" %[^\n]", nombreArchivo);
    strcat(nombreArchivo, ".bin");

    archivo = fopen(nombreArchivo, "wb");
    if (archivo == NULL)
    {
        printf("\n\tError al crear el archivo\n");
        exit(1);
    }
    else
    {
        printf("\n\tIngrese el texto a guardar en el archivo: ");
        scanf(" %[^\n]", texto);
        fwrite(texto, sizeof(char), strlen(texto), archivo);
        fclose(archivo);

        system("clear");
        printf("\n\tArchivo creado " GREEN "exitosamente\n" RESET);

        printf("\n\tPresione" YELLOW " ENTER " RESET "para continuar\n");
        getchar();
        getchar();
    }
    return;
}
// Leer Archivo Binario
extern void leerArchivoBinario()
{
    FILE *archivo;
    char nombreArchivo[50];
    char textoChar;

    printf("\n\n\tLeer Archivo Binario\n\n");

    printf("\tIngrese el nombre del archivo: ");
    scanf(" %[^\n]", nombreArchivo);
    strcat(nombreArchivo, ".bin");

    archivo = fopen(nombreArchivo, "rb");
    if (archivo == NULL)
    {
        printf("\n\tError al abrir el archivo\n");
        exit(1);
    }
    else
    {
        // Opcion alternativa usando fread(texto,sizeof(char),1000,archivo)
        // fread(texto, sizeof(char), 1000, archivo);
        // printf("\n%s\n", texto);

        printf("\n\tTexto en el archivo: ");
        while (fread(&textoChar, sizeof(char), 1, archivo) == 1)
        {
            printf("%c", textoChar);
        }

        printf(CYAN "/fin\n" RESET);
        fclose(archivo);

        printf("\n\tPresione" YELLOW " ENTER " RESET "para continuar\n");
        getchar();
        getchar();
    }
    return;
}
// Append Archivo Binario
extern void modificarArchivoBinario()
{
    FILE *archivo;
    char nombreArchivo[50];
    char texto[1000];

    printf("\n\n\tModificar Archivo Binario\n\n");
    printf("\tIngrese el nombre del archivo: ");
    scanf(" %[^\n]", nombreArchivo);
    strcat(nombreArchivo, ".bin");

    archivo = fopen(nombreArchivo, "ab");
    if (archivo == NULL)
    {
        printf("\n\tError al abrir el archivo\n");
        exit(1);
    }
    else
    {
        printf("\n\tIngrese el texto a guardar en el archivo: ");
        scanf(" %[^\n]", texto);
        // Primero agregar un espacio al inicio para que la palabra no se pegue al final de la anterior
        fwrite(" ", sizeof(char), 1, archivo);
        fwrite(texto, sizeof(char), strlen(texto), archivo);
        fclose(archivo);

        system("clear");
        printf("\n\tArchivo modificado " GREEN "exitosamente\n" RESET);

        printf("\n\tPresione" YELLOW " ENTER " RESET "para continuar\n");
        getchar();
        getchar();
    }
    return;
}

// Funciones de Operaciones entre Archivos de Texto y Binarios ---------------------------
// Convertir de Archivo de Texto a Archivo Binario
extern void convertirTextoBinario()
{
    FILE *archivoTexto;
    FILE *archivoBinario;
    char nombreArchivoTexto[50];
    char nombreArchivoBinario[50];
    char textoChar;

    printf("\n\n\tConvertir de Archivo de Texto a Archivo Binario\n\n");

    printf("\tIngrese el nombre del archivo de texto: ");
    scanf(" %[^\n]", nombreArchivoTexto);
    strcat(nombreArchivoTexto, ".txt");

    archivoTexto = fopen(nombreArchivoTexto, "r");
    if (archivoTexto == NULL)
    {
        printf("\n\tError al abrir el archivo de texto\n");
        exit(1);
    }
    else
    {
        printf("\tIngrese el nombre del archivo binario: ");
        scanf(" %[^\n]", nombreArchivoBinario);
        strcat(nombreArchivoBinario, ".bin");

        archivoBinario = fopen(nombreArchivoBinario, "wb");
        if (archivoBinario == NULL)
        {
            printf("\n\tError al crear el archivo binario\n");
            exit(1);
        }
        else
        {
            while (fscanf(archivoTexto, "%c", &textoChar) == 1)
            {
                fwrite(&textoChar, sizeof(char), 1, archivoBinario);
            }
            fclose(archivoTexto);
            fclose(archivoBinario);

            system("clear");
            printf("\n\tArchivo convertido " GREEN "exitosamente\n" RESET);

            printf("\n\tPresione" YELLOW " ENTER " RESET "para continuar\n");
            getchar();
            getchar();
        }
    }
    return;
}
// Convertir de Archivo Binario a Archivo de Texto
extern void convertirBinarioTexto()
{
    FILE *archivoTexto;
    FILE *archivoBinario;
    char nombreArchivoTexto[50];
    char nombreArchivoBinario[50];
    char textoChar;

    printf("\n\n\tConvertir de Archivo Binario a Archivo de Texto\n\n");

    printf("\tIngrese el nombre del archivo binario: ");
    scanf(" %[^\n]", nombreArchivoBinario);
    strcat(nombreArchivoBinario, ".bin");

    archivoBinario = fopen(nombreArchivoBinario, "rb");
    if (archivoBinario == NULL)
    {
        printf("\n\tError al abrir el archivo binario\n");
        exit(1);
    }
    else
    {
        printf("\tIngrese el nombre del archivo de texto: ");
        scanf(" %[^\n]", nombreArchivoTexto);
        strcat(nombreArchivoTexto, ".txt");

        archivoTexto = fopen(nombreArchivoTexto, "w");
        if (archivoTexto == NULL)
        {
            printf("\n\tError al crear el archivo de texto\n");
            fclose(archivoTexto);
            exit(1);
        }
        else
        {
            while (fread(&textoChar, sizeof(char), 1, archivoBinario) == 1)
            {
                fprintf(archivoTexto, "%c", textoChar);
            }
            fclose(archivoTexto);
            fclose(archivoBinario);

            system("clear");
            printf("\n\tArchivo convertido " GREEN "exitosamente\n" RESET);

            printf("\n\tPresione" YELLOW " ENTER " RESET "para continuar\n");
            getchar();
            getchar();
        }
    }
    return;
}