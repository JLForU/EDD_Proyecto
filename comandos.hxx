
// INICIO DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef COMANDOS_H
#define COMANDOS_H
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "main.hxx"
//// INVOCACIÓN DE HERRAMIENTAS ADICIONALES.
using namespace std ;



// SENTENCIAS GLOBALES DE COMANDO.
extern string comandoEntrada ;
extern bool partidaInicializada ;
extern bool juegoFinalizado ;

// PROTOTIPOS DE COMANDO.
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



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // COMANDOS_H

