
// Directivas de preprocesamiento.
#ifndef TAD_TERRITORIO_H
    #define TAD_TERRITORIO_H

using namespace std ;



/* Definición de TAD_Territorio. */

class Territorio {


    private :

        //// ATRIBUTOS ////
        string nombre ;
        string continente ;
        int id ;


    public :

        //// CONSTRUCTORES ////
        Territorio ( string nuevoNombre , string nuevoContinente , int nuevoID ) ;
        
        //// GETTERS ////
        string getNombre ( ) ;
        string getContinente ( ) ;
        int getID ( ) ;
        //// SETTERS ////
        void setNombre ( string nuevoNombre ) ;
        void setContinente ( string nuevoContinente ) ;
        void setID ( int nuevoID ) ;

} ;



// Directiva de preprocesamiento.
#endif  // TAD_TERRITORIO_H

