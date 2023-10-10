
// INICIO DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef TAD_TERRITORIO_H
#define TAD_TERRITORIO_H
//// INVOCACIÓN DE HERRAMIENTAS ADICIONALES.
using namespace std ;



/* DEFINICIÓN DE 'TAD_Territorio'. */

class Territorio {


    private :

        //// DATOS ////
        string nombre ;
        string continente ;
        int id ;
        vector <Territorio> vecinos ;

    public :

        //// CONSTRUCTORES ////
        /* Constructor por defecto. */
        Territorio ( ) ;
        /* Constructor esperado. */
        Territorio ( string nuevoNombre , string nuevoContinente , int nuevoID ) ;
        
        //// GETTERS ////
        string getNombre ( void ) ;
        string getContinente ( void ) ;
        int getID ( void ) ;
        vector <Territorio> getVecinos ( void ) ;
        //// SETTERS ////
        void setNombre ( string nuevoNombre ) ;
        void setContinente ( string nuevoContinente ) ;
        void setID ( int nuevoID ) ;

        //// COMPORTAMIENTOS ////
        void aniadirVecino ( Territorio nuevoVecino ) ;


} ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif  // TAD_TERRITORIO_HXX

