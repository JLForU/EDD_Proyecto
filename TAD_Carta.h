
// INICIO DE DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef TAD_CARTA_H
#define TAD_CARTA_H
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "TAD_Territorio.h"
#include "TAD_Ejercito.h"



/* DEFINICIÓN DE 'TAD_Carta'. */

class Carta {


    private :
  
        //// DATOS ////
        /* Datos cuando la carta es normal. */
        Territorio territorio ;
        Ejercito ejercito ;
        /* Dato cuando la carta es misión. */
        string descripcioon = "Misión pendiente..." ;


    public :

        //// CONSTRUCTORES ////
        /* Constructor cuando la carta es normal. */
        Carta ( Territorio nuevoTerritorio , Ejercito nuevoEjercito ) ;
        /* Constructor cuando la carta es misión. */
        Carta ( string ) ;
        
        //// GETTERS ////
        Territorio getTerritorio ( ) ;
        Ejercito getEjercito ( ) ;
        string getDescripcioon ( ) ;
        //// SETTERS ////
        void setTerritorio ( Territorio nuevoTerritorio ) ;
        void setEjercito ( Ejercito nuevoEjercito ) ;
        void setDescripcioon ( string nuevaDescripcioon ) ;


} ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // TAD_CARTA_H

