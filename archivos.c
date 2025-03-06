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
 * @date
 * @author Mario Ureña García
 *
 */

// Bibliotecas --------------------------------------------------------------------------
#include "defArchivos.h"

// Declaración de funciones --------------------------------------------------------------
int menuPrincipal();
int menuArchivosTexto();
void crearArchivoTexto();
void leerArchivoTexto();
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
          system("clear");
          break;
        case 4:
          system("clear");
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
      break;
    case 3:
      system("clear");
      break;
    case 4:
      system("clear");
      printf("\n\n\tSaliendo del Programa\n\n");
      break;
    default:
      system("clear");
      printf(RED "\n\n\tOpción no válida\n\n" RESET);
      break;
    }
  } while (opcionPrincipal != 4);
  // FINALIZACIÓN DEL PROGRAMA
  printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
  return 0;
}

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
