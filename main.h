
// INICIO DE DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef MAIN_H
#define MAIN_H
//// LLAMADO DE LIBRERÍAS.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "comandos.h"
#include "TAD_Carta.h"
#include "TAD_Territorio.h"
#include "TAD_Ejercito.h"
#include "TAD_Jugador.h"
//// INVOCACIÓN DE HERRAMIENTAS.
using namespace std ;



// SENTENCIAS GLOBALES DE JUEGO.
extern vector <Territorio> territorios ;
extern vector <Carta> mazo ;
extern vector <Jugador> jugadores;
extern int nJugadores;


/* DEFINICIÓN DE 'TAD_Risk'. */

class Risk {


	//


} ;


// PROTOTIPOS DE JUEGO.
void llenarMazo ( void ) ;
void llenarJugadores ( void ) ;
void funcioon_Jugar ( void ) ;
void crearMapa ( void ) ;
void auxiliar_CrearMapa ( string territorioPrincipal , string territorioVecino ) ;
void OyUUnidades ( string idJugador ) ;


// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // MAIN_H

