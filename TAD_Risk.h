
// INICIO DE DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef MAIN_H
#define MAIN_H
//// LLAMADO DE LIBRERÍAS.
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <stdlib.h>
////// MANEJO DE LETRAS.
#include <algorithm>
////// NÚMEROS ALEATORIOS.
#include <cstdlib>
#include <ctime>
#include <iostream>
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "TAD_Carta.h"
#include "TAD_Territorio.h"
#include "TAD_Ejercito.h"
#include "TAD_Jugador.h"
#include "ArbolHuff.h"
#include "NodoHuff.h"
//// INVOCACIÓN DE HERRAMIENTAS.
using namespace std ;



/* DEFINICIÓN DE 'TAD_Risk'. */

class Risk {


	public :

		// CONSTRUCTOR
		Risk() ;

		// DATOS
		vector <Territorio> territorios ;
		vector <Carta> mazo ;
		vector <Jugador> jugadores;

		string comandoEntrada ;
		bool partidaInicializada ;
		bool juegoFinalizado ;
		int nJugadores;

		string id_jugador;
		string turno;
		int nturno;

		// OPERACIONES
		void llenarMazo ( void ) ;
		void llenarJugadores ( void ) ;
		void funcioon_Jugar ( void ) ;
		void crearMapa ( void ) ;
		void auxiliar_CrearMapa ( string territorioPrincipal , string territorioVecino ) ;

		string verificarComandoExistente ( string comandoEntrada ) ;
		void accionarComandoCorrecto ( string primerComandoPorVerificar ) ;
		void comandoInicializar ( ) ;
		bool verificarJugador ( ) ;
		void comandoTurno ( string id_jugador ) ;
		void atacar ( int nTurno ) ;
		void restarUnidades ( int territorioDesde , int territorioParaAtacar ) ;
		int dadosAtacar ( int dados[] ) ;
		void fortificar ( ) ;
		void comandoSalir ( ) ;
		bool verificarArchivoComoArgumento ( ) ;
		void comandoGuardar ( ) ;
		void comandoGuardarComprimido ( ) ;
		void comandoInicializarArchivo ( ) ;
		bool verificarTerritorio ( ) ;
		void comandoCostoConquista ( ) ;
		void comandoConquista ( ) ;
		void comandoAyuda ( ) ;
		void comandoAyudaComando ( string primerComandoPorVerificar ) ;
		bool verificarTurno ( string id_jugador ) ;
		bool verificarJugador ( string id_jugador ) ;


} ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // MAIN_H

