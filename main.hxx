
// INICIO DE DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef MAIN_HXX
#define MAIN_HXX
//// LLAMADO DE LIBRERÍAS.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "comandos.hxx"
#include "TAD_Carta.hxx"
#include "TAD_Territorio.hxx"
#include "TAD_Ejercito.hxx"
//// INVOCACIÓN DE HERRAMIENTAS.
using namespace std ;



// SENTENCIAS GLOBALES DE JUEGO.
extern vector <Carta> mazo ;

// PROTOTIPOS DE JUEGO.
void llenarMazo ( void ) ;
void funcioon_Jugar ( void ) ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // MAIN_HXX
