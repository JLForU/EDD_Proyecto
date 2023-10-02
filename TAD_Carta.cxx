
// DIRECTIVAS DE PREPROCESAMIENTO.
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "main.h"



/* IMPLEMENTACIÓN DE FUNCIONES PARA 'TAD_Carta'. */

//// CONSTRUCTORES ////
Carta::Carta ( Territorio nuevoTerritorio , Ejercito nuevoEjercito ) {
    this -> territorio = nuevoTerritorio ;
    this -> ejercito =  nuevoEjercito ;
    this -> descripcioon = "No hay misión para este tipo de carta." ;
}
Carta::Carta ( string nuevaDescripcioon ) {
    this -> descripcioon = nuevaDescripcioon ;
}

//// GETTERS ////
Territorio Carta::getTerritorio ( ) {
    return this -> territorio ;
}
Ejercito Carta::getEjercito ( ) {
    return this -> ejercito ;
}
string Carta::getDescripcioon ( ) {
    return this -> descripcioon ;
}

//// SETTERS ////
void Carta::setTerritorio ( Territorio nuevoTerritorio ) {
    this -> territorio = nuevoTerritorio ;
}
void Carta::setEjercito ( Ejercito nuevoEjercito ) {
    this -> ejercito = nuevoEjercito ;
}
void Carta::setDescripcioon ( string nuevaDescripcioon ) {
    this -> descripcioon = nuevaDescripcioon ;
}

