
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

void Jugador::agregarTropa( Ejercito nuevaTropa){
	this -> tropas.push_back(nuevaTropa);
}
void Jugador::asignarTerritorio( Territorio nuevoTerritorio){
	this -> territorios.push_back(nuevoTerritorio);
}

