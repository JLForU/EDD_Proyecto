
// INICIO DE DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef TAD_CARTA_HXX
#define TAD_CARTA_HXX
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "TAD_Territorio.hxx"
#include "TAD_Ejercito.hxx"



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
        Carta ( Territorio , Ejercito ) ;
        /* Constructor cuando la carta es misión. */
        Carta ( string ) ;
        
        //// GETTERS ////
        Territorio getTerritorio ( ) ;
        Ejercito getEjercito ( ) ;
        string getDescripcioon ( ) ;
        //// SETTERS ////
        void setTerritorio ( Territorio ) ;
        void setEjercito ( Ejercito ) ;
        void setDescripcioon ( string ) ;


} ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // TAD_CARTA_HXX

