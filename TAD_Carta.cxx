
// Directivas de preprocesamiento.
#include <string>

#include "TAD_Carta.h"



/* Implementación de funciones para el TAD_Carta. */

//// CONSTRUCTORES ////
Carta::Carta ( string nuevoTerritorio , string nuevoDibujo ) {
    this -> territorio = nuevoTerritorio ;
    this -> dibujo = nuevoDibujo ;
}
Carta::Carta ( string nuevaDescripcioon ) {
    this -> descripcioon = nuevaDescripcioon ;
}

//// GETTERS ////
string Carta::getTerritorio ( ) {
    return this -> territorio ;
}
string Carta::getDibujo ( ) {
    return this -> dibujo ;
}
string Carta::getDescripcioon ( ) {
    return this -> descripcioon ;
}

//// SETTERS ////
void Carta::setTerritorio ( string nuevoTerritorio ) {
    this -> territorio = nuevoTerritorio ;
}
void Carta::setDibujo ( string nuevoDibujo ) {
    this -> dibujo = nuevoDibujo ;
}
void Carta::setDescripcioon ( string nuevaDescripcioon ) {
    this -> descripcioon = nuevaDescripcioon ;
}

