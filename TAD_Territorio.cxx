
// DIRECTIVAS DE PREPROCESAMIENTO.
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "TAD_Risk.h"



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
vector <Territorio> Territorio::getVecinos ( void ) {
    return this -> vecinos ;
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

//// COMPORTAMIENTOS ////
void Territorio::aniadirVecino ( Territorio nuevoVecino ) {
    this -> vecinos . push_back ( nuevoVecino ) ;
}


