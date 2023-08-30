
// INICIO DE DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef TAD_JUGADOR_HXX
#define TAD_JUGADOR_HXX
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "main.hxx"



/* DEFINICIÓN DE 'TAD_Jugador'. */

class Jugador {


    private :
    
        //// DATOS ////
        /* Dato para identificar al jugador. */
        string nombre ;
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
        vector <Territorio> getTerritorios ( void ) ;
        //// SETTERS ////
        void setNombre ( string nuevoNombre ) ;

        //// COMPORTAMIENTOS ////
		void agregarTropa(Ejercito nuevaTropa);
		void asignarTerritorio(Territorio nuevoTerritorio);
        bool verificarTerritorioExistente ( string territorioPorBuscar ) ;
		int territoriosXJugador(string idJugador);

} ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // TAD_JUGADOR_HXX

