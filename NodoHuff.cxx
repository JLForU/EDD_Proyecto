
// DIRECTIVAS DE PREPROCESADOR.
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "NodoHuff.h"



/* IMPLEMENTACIÓN DE CLASE 'NodoHuff'. */

//// CONSTRUCTORES ////

NodoHuff::NodoHuff(void) {
    this->NodoIzq = nullptr;
    this->NodoDer = nullptr;
}
//// DESTRUCTORES ////

NodoHuff::~NodoHuff(void) {
    delete (this->NodoIzq);
    this->NodoIzq = nullptr;
    delete (this->NodoDer);
    this->NodoDer = nullptr;

}

//// GETTERS ////

car& NodoHuff::getDato ( void ) {
    return this -> dato ;
}
int NodoHuff::getFrec ( void ) {
    return this -> dato.frecuencia ;
}

NodoHuff* NodoHuff::getNodoIzq ( void ) {
    return this -> NodoIzq ;
}

NodoHuff* NodoHuff::getNodoDer ( void ) {
    return this -> NodoDer ;
}

//// SETTERS ////

bool NodoHuff::setDato ( const car& nuevoDato ) {
    if(nuevoDato.frecuencia == 0 && nuevoDato.caracter == 0) {
        return false; // El punto se considera vacío
    }
    this->dato = nuevoDato;
    return true;

}

bool NodoHuff::setNodoIzq ( NodoHuff* nuevoNodoIzq ) {
    if ( nuevoNodoIzq != NULL )
        this -> NodoIzq = nuevoNodoIzq ;
    else
        return false ;
return true ;
}

bool NodoHuff::setNodoDer ( NodoHuff* nuevoNodoDer ) {
    if ( nuevoNodoDer != NULL )
        this -> NodoDer = nuevoNodoDer ;
    else
        return false ;
return true ;
}


//// COMPORTAMIENTOS ////

bool NodoHuff::esHoja ( void ) {
    return ( this->NodoIzq == NULL && this->NodoDer == NULL ) ;
}

