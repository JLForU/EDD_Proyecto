
// Directivas de preprocesamiento.
#ifndef TAD_CARTA_H
    #define TAD_CARTA_H

using namespace std ;



/* Definición de TAD_Carta. */

class Carta {


    private :
  
        //// ATRIBUTOS ////
        /* Atributos en caso de que la carta sea normal. */
        string territorio ;
        string dibujo ;
        /* Atributos en caso de que la carta sea misión. */
        string descripcioon ;


    public :

        //// CONSTRUCTORES ////
        /* Constructor en caso de que la carta sea normal. */
        Carta ( string nuevoTerritorio , string nuevoDibujo ) ;
        /* Constructor en caso de que la carta sea misión. */
        Carta ( string nuevaDescripcioon ) ;
        
        //// GETTERS ////
        string getTerritorio ( ) ;
        string getDibujo ( ) ;
        string getDescripcioon ( ) ;
        //// SETTERS ////
        void setTerritorio ( string nuevoTerritorio ) ;
        void setDibujo ( string nuevoDibujo ) ;
        void setDescripcioon ( string nuevaDescripcioon ) ;

} ;



// Directiva de preprocesamiento.
#endif  // TAD_CARTA_H

