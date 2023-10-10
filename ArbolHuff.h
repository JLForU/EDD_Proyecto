
// INICIO DE DIRECTIVAS DE PREPROCESADOR.
//// MACROS.
#ifndef __ArbolHuff_H__
#define __ArbolHuff_H__
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "NodoHuff.h"



/* DEFINICIÓN DE CLASE 'ArbolHuff'. */


class ArbolHuff {


    private :

        //// DATOS ////
        NodoHuff* raiiz ;
      
    public :
      
        //// CONSTRUCTORES ////
        ArbolHuff ( void ) ;
        ArbolHuff ( car& valor ) ;
        //// DESTRUCTOR ////
        ~ArbolHuff ( void ) ;
        
        //// GETTERS ////
        NodoHuff* getRaiiz ( void ) ;
        //// SETTERS ////
        bool setRaiiz ( NodoHuff* nuevaRaiiz ) ;

        //// COMPORTAMIENTOS ////
		bool buscar ( int c , NodoHuff* actual ) ;
		string buscar ( int c ) ;
        bool esVacio ( void ) ;
        vector<NodoHuff*> insert ( vector<car> frecuencias ) ;
        vector<car>  frecuencia ( string nombre ) ;
		vector<string> codificar ( string texto ) ;
		void decodificar ( string cod ) ;
        

} ;



// FIN DE DIRECTIVAS DE PREPROCESADOR
#endif

