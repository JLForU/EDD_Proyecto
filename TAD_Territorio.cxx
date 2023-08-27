
// DIRECTIVAS DE PREPROCESAMIENTO.
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "main.hxx"



/* IMPLEMENTACIÓN DE FUNCIONES PARA 'TAD_Carta'. */

//// CONSTRUCTOR ////
Territorio::Territorio ( ) {
    this -> nombre = "" ;
    this -> continente = "" ;
    this -> id = 0 ;
}
Territorio::Territorio ( string nuevoNombre , string nuevoContinente , int nuevoID ) {
    this -> nombre = nuevoNombre ;
    this -> continente = nuevoContinente ;
    this -> id = nuevoID ;
}

//// GETTERS ////
string Territorio::getNombre ( ) {
    return this -> nombre ;
}
string Territorio::getContinente ( ) {
    return this -> continente ;
}
int Territorio::getID ( ) {
    return this -> id ;
}

//// SETTERS ////
void Territorio::setNombre ( string nuevoNombre ) {
    this -> nombre = nuevoNombre ;
}
void Territorio::setContinente ( string nuevoContinente ) {
  this -> continente = nuevoContinente ;
}
void Territorio::setID ( int nuevoID ) {
    this -> id = nuevoID ;
}

