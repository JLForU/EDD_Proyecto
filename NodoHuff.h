
// INICIO DE DIRECTIVAS DE PREPROCESADOR.
//// MACROS.
#ifndef __NODOHUFF_H__
#define __NODOHUFF_H__
//// LLAMADO DE LIBRERÍAS.
#include <string>
#include <cstring>
#include <iostream>
#include <cstddef>
#include <algorithm>
//// INVOCACIÓN DE HERRAMIENTAS ADICIONALES.
using namespace std ;



/* DEFINICIÓN DE CLASE 'NodoHuff'. */

struct car {
	int frecuencia;
	int caracter;
	
	car& operator = (const car &p) {
		frecuencia=p.frecuencia;
		caracter = p.caracter;
		return *this;
	}
	bool operator == (const car &p) const {
		return (frecuencia==p.frecuencia && caracter == p.caracter );
	}
	friend std::ostream& operator << (std::ostream &o, const car &p)
	{
		o << "("<<p.frecuencia<<"," << p.caracter << ")";
		return o;
	}
};
class NodoHuff {


    private :

        //// DATOS ////
        car dato ;
        NodoHuff* NodoIzq ;
		NodoHuff* NodoDer ;


    public :
      
        //// CONSTRUCTORES ////
        NodoHuff ( void ) ;
        //// DESTRUCTORES ////
        ~NodoHuff ( void ) ;

        //// GETTERS ////
        car& getDato ( void ) ;
		int getFrec ( void ) ;
        NodoHuff* getNodoIzq ( void ) ;
        NodoHuff* getNodoDer ( void ) ;

        //// SETTERS ////
        bool setDato ( const car& nuevoDato ) ;
        bool setNodoIzq ( NodoHuff* sizq ) ;
        bool setNodoDer ( NodoHuff* sder) ;

        //// COMPORTAMIENTOS ////
        bool esHoja ( void ) ;
        unsigned int altura ( void ) ;
        bool insertar ( const car& valor ) ;
        bool eliminar ( const car& valor ) ;
        void limpiar ( void ) ;
        void preOrden ( void ) ;


} ;



// FIN DE DIRECTIVAS DE PREPROCESADOR
#endif

