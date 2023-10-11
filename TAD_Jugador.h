
// INICIO DE DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef TAD_JUGADOR_H
#define TAD_JUGADOR_H
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "TAD_Risk.h"



/* DEFINICIÓN DE 'TAD_Jugador'. */

class Jugador {


    private :
    
        //// DATOS ////
        /* Dato para identificar al jugador. */
        string nombre ;
		string Color;
        /* Datos para construir mapa de jugador. */
        vector <Territorio> territorios ;
        vector <Ejercito> tropas ;
        /* Dato para manejar mazo. */
        vector <Carta> cartas ;


    public :

        //// CONSTRUCTORES ////
        /* Constructor ideal. */
        Jugador ( string nuevoNombre ) ;

        //// GETTERS ////
        string getNombre ( void ) ;
        string getColor ( void ) ;
        vector <Territorio> getTerritorios ( void ) ;
        vector <Ejercito> getTropas ( void ) ;
        vector <Carta> getCartas ( void ) ;
        //// SETTERS ////
        void setNombre ( string nuevoNombre ) ;
        void setColor ( string nuevoColor ) ;

        //// COMPORTAMIENTOS ////
        void agregarCarta ( Carta nuevaCarta ) ;
        void agregarTropa ( Ejercito nuevaTropa ) ;
        void asignarTerritorio ( Territorio nuevoTerritorio ) ;
        bool verificarTerritorioExistente ( int territorioPorBuscar ) ;
        int territoriosXJugador ( vector <Jugador> jugadores , string idJugador ) ;
        int verificarContinente ( vector <Jugador> jugadores , string idJugador ) ;


} ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // TAD_JUGADOR_H

