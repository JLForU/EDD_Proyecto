
// DIRECTIVAS DE PREPROCESAMIENTO.
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "TAD_Risk.h"



/* IMPLEMENTACIÓN DE FUNCIONES PARA 'TAD_Ejercito'. */

//// CONSTRUCTORES ////
Ejercito::Ejercito ( void ) {
    this -> grupo = "" ;
    this -> color = "" ;
    this -> unidades = 0 ;
}
Ejercito::Ejercito ( string nuevoGrupo , int nuevasUnidades ) {
    this -> grupo = nuevoGrupo ;
    this -> unidades = nuevasUnidades ;
}
Ejercito::Ejercito ( string nuevoGrupo , string nuevoColor , int nuevasUnidades ) {
    this -> grupo =  nuevoGrupo ;
    this -> color = nuevoColor ;
    this -> unidades = nuevasUnidades ;
}

//// GETTERS ////
string Ejercito::getGrupo ( ) {
    return this -> grupo ;
}
string Ejercito::getColor ( ) {
    return this -> color ;
}
int Ejercito::getUnidades ( ) {
    return this -> unidades ;
}

//// SETTERS ////
void Ejercito::setGrupo ( string nuevoGrupo ) {
    this -> grupo = nuevoGrupo ;
}
void Ejercito::setColor ( string nuevoColor ) {
    this -> color = nuevoColor ;
}
void Ejercito::setUnidades ( int nuevasUnidades ) {
    this -> unidades = nuevasUnidades ;
}

