
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
        vector <int> unidades ;
        /* Dato para manejar mazo. */
        vector <Carta> cartas ;


    public :

        //// CONSTRUCTORES ////
        /* Constructor por defecto. */
        Jugador ( void ) ;
        /* Constructor ideal. */
        Jugador ( string nuevoNombre ) ;

        //// GETTERS ////
        string getNombre ( void ) ;
        //// SETTERS ////
        void setNombre ( string nuevoNombre ) ;

        //// COMPORTAMIENTOS ////
        void obtenerUnidades ( int nuevasUnidades , Territorio nuevoTerritorio ) ;


} ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // TAD_JUGADOR_HXX

