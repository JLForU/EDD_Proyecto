
// DIRECTIVAS DE PREPROCESAMIENTO.
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "main.hxx"



/* IMPLEMENTACIÓN DE FUNCIONES PARA 'TAD_Jugador'. */

//// CONSTRUCTORES ////
Jugador::Jugador ( string nuevoNombre ) {
    this -> nombre = nuevoNombre ;
}

//// GETTERS ////
string Jugador::getNombre ( void ) {
    return this -> nombre ;
}

//// SETTERS ////
void Jugador::setNombre ( string nuevoNombre ) {
    this -> nombre = nuevoNombre ;
}

