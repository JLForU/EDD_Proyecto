
// INICIO DIRECTIVAS DE PREPROCESAMIENTO.
//// MACROS.
#ifndef TAD_EJERCITO_HXX
#define TAD_EJERCITO_HXX
//// INVOCACIÓN DE HERRAMIENTAS ADICIONALES.
using namespace std ;



/* DEFINICIÓN DE 'TAD_Ejercito'. */

class Ejercito {


    private :
  
        //// DATOS ////
        string grupo ;
        string color ;
        int unidades ;


    public :
      
        //// CONSTRUCTORES ////
        /* Constructor por defecto. */
        Ejercito ( void ) ;
        /* Constructor esperado por carta. */
        Ejercito ( string nuevoGrupo , int nuevasUnidades ) ;
        /* Constructor esperado por jugador. */
        Ejercito ( string nuevoGrupo , string nuevoColor , int nuevasUnidades ) ;
        
        //// GETTERS ////
        string getGrupo ( void ) ;
        string getColor ( void ) ;
        int getUnidades ( void ) ;
        //// SETTERS ////
        void setGrupo ( string nuevoGrupo ) ;
        void setColor ( string nuevoColor ) ;
        void setUnidades ( int nuevasUnidades ) ;



} ;



// FIN DE DIRECTIVAS DE PREPROCESAMIENTO.
#endif // TAD_EJERCITO_HXX

