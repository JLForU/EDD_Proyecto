
// Directivas de preprocesamiento
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std ;



// Sentencias globales
string comandoEntrada ;
bool partidaInicializada ;
bool juegoFinalizado ;

// Prototipos
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



// Directivas de preprocesamiento
#endif // HEADER_H

