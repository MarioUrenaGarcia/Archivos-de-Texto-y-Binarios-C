/**
 *
 * @file Nombre del archivo
 * @brief Breve Descripción
 * @details El programa tiene los siguientes apartados:
 *          A) Archivos de Texto:
 *             - Crear archivo de texto
 *             - Leer e imprimir en pantalla archivos de texto
 *             - Modificar archivos de texto
 *          B) Archivos Binarios:
 *             - Crear archivos binarios
 *             - Leer e imprimir en pantalla archivos binarios
 *             - Modificar archivos binarios.
 *          C) Operaciones entre Archivos de Texto y Binarios:
 *             - Convertir de Archivo de Texto a Binario
 *             - Convertir de Archivo Binario a Archivo de Texto
 *          D) Extras
 *             - Eliminar archivos
 * @date
 * @author Mario Ureña García
 *
 */

// Bibliotecas --------------------------------------------------------------------------
#include "defArchivos.h"

// Declaración de funciones --------------------------------------------------------------
int menuPrincipal();
int menuArchivosTexto();
int menuArchivosBinarios();
int menuOperacionesArchivos();
int menuExtras();

void crearArchivoTexto();
void leerArchivoTexto();
void appendArchivoTexto();

void crearArchivoBinario();
void leerArchivoBinario();
void modificarArchivoBinario();

void convertirTextoBinario();
void convertirBinarioTexto();

void eliminarArchivos();
// Main ---------------------------------------------------------------------------------

int main(int argc, char *argv[])
{
  // Inicio Personalizado Alfa-----------------------------------------------------------
  printf("Presione ENTER para continuar\n");
  getchar();
  system("clear");
  printf("\n\n\tEste código fue creado por Mario Ureña García\n\n");
  //-------------------------------------------------------------------------------------
  // Variables
  int opcionPrincipal, opcionSubMenu;

  // Procesos
  do
  {
    opcionPrincipal = menuPrincipal();
    switch (opcionPrincipal)
    {
    case 1:
      system("clear");
      // Abrir menú de archivos de texto
      do
      {
        opcionSubMenu = menuArchivosTexto();
        switch (opcionSubMenu)
        {
        case 1:
          system("clear");
          // Crear archivo de texto
          crearArchivoTexto();
          system("clear");
          break;
        case 2:
          system("clear");
          // Leer e imprimir en pantalla archivos de texto
          leerArchivoTexto();
          system("clear");
          break;
        case 3:
          system("clear");
          // Modificar archivos de texto
          appendArchivoTexto();
          system("clear");
          break;
        case 4:
          system("clear");
          // Salir del menú de archivos de texto
          break;
        default:
          system("clear");
          printf(RED "\n\n\tOpción no válida\n\n" RESET);
          break;
        }
      } while (opcionSubMenu != 4);
      break;
    case 2:
      system("clear");
      // Abrir menú de archivos binarios
      do
      {
        opcionSubMenu = menuArchivosBinarios();
        switch (opcionSubMenu)
        {
        case 1:
          system("clear");
          // Crear archivo binario
          crearArchivoBinario();
          system("clear");
          break;
        case 2:
          system("clear");
          // Leer e imprimir en pantalla archivo binario
          leerArchivoBinario();
          system("clear");
          break;
        case 3:
          system("clear");
          // Modificar archivo binario
          modificarArchivoBinario();
          system("clear");
          break;
        case 4:
          system("clear");
          // Salir del menú de archivos binarios
          break;
        default:
          system("clear");
          printf(RED "\n\n\tOpción no válida\n\n" RESET);
          break;
        }
      } while (opcionSubMenu != 4);
      break;
    case 3:
      system("clear");
      // Operaciones entre archivos de texto y binarios
      do
      {
        opcionSubMenu = menuOperacionesArchivos();
        switch (opcionSubMenu)
        {
        case 1:
          system("clear");
          // Convertir de Archivo de Texto a Archivo Binario
          convertirTextoBinario();
          system("clear");
          break;
        case 2:
          system("clear");
          // Convertir de Archivo Binario a Archivo de Texto
          convertirBinarioTexto();
          system("clear");
          break;
        case 3:
          system("clear");
          // Salir del menú de operaciones entre archivos de texto y binarios
          break;
        default:
          system("clear");
          printf(RED "\n\n\tOpción no válida\n\n" RESET);
          break;
        }
      } while (opcionSubMenu != 3);

      break;
    case 4:
      system("clear");
      // Abrir menú de EXTRAS
      do
      {
        opcionSubMenu = menuExtras();
        switch (opcionSubMenu)
        {
        case 1:
          system("clear");
          // Eliminar archivos
          eliminarArchivos();
          system("clear");
          break;
        case 2:
          system("clear");
          // Salir del menú de extras
          break;
        default:
          system("clear");
          printf(RED "\n\n\tOpción no válida\n\n" RESET);
          break;
        }
      } while (opcionSubMenu != 2);

      break;
    case 5:
      system("clear");
      printf("\n\n\tSaliendo del Programa\n\n");
      break;
    default:
      system("clear");
      printf(RED "\n\n\tOpción no válida\n\n" RESET);
      break;
    }
  } while (opcionPrincipal != 5);
  // FINALIZACIÓN DEL PROGRAMA
  printf("\n\n\tPrograma Finalizado con " GREEN "ÉXITO\n\n" RESET);
  return 0;
}