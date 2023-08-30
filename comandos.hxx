
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
extern int nJugadores;

// PROTOTIPOS DE COMANDO.
string verificarComandoExistente ( string comandoEntrada ) ;
void accionarComandoCorrecto ( string primerComandoPorVerificar ) ;
void comandoInicializar ( ) ;
bool verificarJugador ( ) ;
void comandoTurno ( string id_jugador ) ;
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
<<<<<<< HEAD
bool verificarTurno ( string id_jugador ) ;
bool verificarJugador ( string id_jugador ) ;

=======
bool verificarTurno ( int id_jugador ) ;
bool verificarJugador ( int id_jugador ) ;
void comandoTurno(int idJugador, vector<Jugador>& jugadores);
int calcularUnidadesPorContinentes(const Jugador& jugador);
void fortificarPosicion(Jugador& jugador);
void atacarTerritorio(Jugador& jugadorAtacante, Territorio& territorioAtacante, Territorio& territorioDefensor);
>>>>>>> 371fe26458810036a0d18fafde8d6f8d7c11bbb5


// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // COMANDOS_H

