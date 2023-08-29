
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
vector <Territorio> Jugador::getTerritorios ( void ) {
    return this -> territorios ;
}
//// SETTERS ////
void Jugador::setNombre ( string nuevoNombre ) {
    this -> nombre = nuevoNombre ;
}

//// COMPORTAMIENTOS ////
void Jugador::agregarTropa( Ejercito nuevaTropa){
	this -> tropas.push_back(nuevaTropa);
}
void Jugador::asignarTerritorio( Territorio nuevoTerritorio){
	this -> territorios.push_back(nuevoTerritorio);
}
bool Jugador::verificarTerritorioExistente ( string territorioPorBuscar ) {

    vector <Territorio>::iterator it ;
    for ( it = this -> territorios.begin() ; it < this -> territorios.end() ; ++it )
        if ( territorioPorBuscar == it -> getNombre() )
            return true ;

return false ;
}

