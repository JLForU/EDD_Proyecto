
// INICIO DE DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef TAD_JUGADOR_H
#define TAD_JUGADOR_H
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "main.h"



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
        //// SETTERS ////
        void setNombre ( string nuevoNombre ) ;
		void setColor ( string nuevoColor ) ;
		
        //// COMPORTAMIENTOS ////
		void agregarTropa(Ejercito nuevaTropa);
		void asignarTerritorio(Territorio nuevoTerritorio);
        bool verificarTerritorioExistente ( int territorioPorBuscar ) ;
		int territoriosXJugador(string idJugador);
		int verificarContinente(string idJugador);

} ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // TAD_JUGADOR_H

