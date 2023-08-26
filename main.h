
// Directivas de preprocesamiento.
#ifndef HEADER_H
    #define HEADER_H

#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "TAD_Carta.h"

using namespace std ;



// Sentencias globales.
extern string comandoEntrada ;
extern bool partidaInicializada ;
extern bool juegoFinalizado ;
extern vector <Carta> mazo ;

// Prototipos de mazo.
void llenarMazo ( ) ;
// Prototipos de comando.
string verificarComandoExistente ( string comandoEntrada ) ;
void accionarComandoCorrecto ( string primerComandoPorVerificar ) ;
void comandoInicializar ( ) ;
bool verificarJugador ( ) ;
void comandoTurno ( int id_jugador ) ;
void comandoSalir ( ) ;
bool verificarArchivoComoArgumento ( ) ;
void comandoGuardar ( ) ;
void comandoGuardarComprimido ( ) ;
void comandoInicializarArchivo ( ) ;
bool verificarTerritorio ( ) ;
void comandoCostoConquista ( ) ;
void comandoConquista ( ) ;
void comandoAyuda ( ) ;
void comandoAyudaComando (string primerComandoPorVerificar ) ;
bool verificarTurno ( int id_jugador ) ;
bool verificarJugador ( int id_jugador ) ;



// Directivas de preprocesamiento.
#endif // HEADER_H

