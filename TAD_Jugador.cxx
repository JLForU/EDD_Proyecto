
// DIRECTIVAS DE PREPROCESAMIENTO.
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "TAD_Risk.h"



/* IMPLEMENTACIÓN DE FUNCIONES PARA 'TAD_Jugador'. */

//// CONSTRUCTORES ////
Jugador::Jugador ( string nuevoNombre ) {
    this -> nombre = nuevoNombre ;
}

//// GETTERS ////
string Jugador::getNombre ( void ) {
    return this -> nombre ;
}
string Jugador::getColor ( void ) {
    return this -> Color ;
}
vector <Territorio> Jugador::getTerritorios ( void ) {
    return this -> territorios ;
}

vector <Ejercito> Jugador::getTropas ( void ) {
    return this -> tropas ;
}
vector <Carta>Jugador:: getCartas ( void ) {
	return this -> cartas ;
}
//// SETTERS ////
void Jugador::setNombre ( string nuevoNombre ) {
    this -> nombre = nuevoNombre ;
}
void Jugador::setColor ( string nuevoColor ) {
    this ->Color = nuevoColor ;
}

//// COMPORTAMIENTOS ////
void Jugador::agregarTropa( Ejercito nuevaTropa){
	this -> tropas.push_back(nuevaTropa);
}
void Jugador::agregarCarta( Carta nuevaCarta){
	this -> cartas.push_back(nuevaCarta);
}
void Jugador::asignarTerritorio( Territorio nuevoTerritorio){
	this -> territorios.push_back(nuevoTerritorio);
}
bool Jugador::verificarTerritorioExistente ( int territorioPorBuscar ) {

    vector <Territorio>::iterator it ;
    for ( it = this -> territorios.begin() ; it < this -> territorios.end() ; ++it )
        if ( territorioPorBuscar == it -> getID() )
            return true ;

return false ;
}

int Jugador::territoriosXJugador ( vector <Jugador> jugadores , string idJugador ) {

	int cant;

	vector<Jugador>::iterator itj ;
	for ( itj=jugadores.begin() ; itj!=jugadores.end() ; itj++ ) {
		if(itj->getNombre()==idJugador)	{
			cant=itj->territorios.size() ;
		}
	}

return cant ;
}

int Jugador::verificarContinente ( vector <Jugador> jugadores , string idJugador ) {

	vector<Territorio>::iterator itt;
	vector<Jugador>::iterator itj;
	int can,cas,ce,caf,casi,co,cont;
	for(itj=jugadores.begin();itj!=jugadores.end();itj++)
	{
		if(itj->getNombre()==idJugador)
		{
			string continente;
			for(itt=itj->territorios.begin();itt!=itj->territorios.end();itt++)
			{
				continente=	itt->getContinente();
				if(continente=="America del Norte")
				{
					can++;
					if(can==9)
					{
						cont+=5;
					}
				}
				else if(continente=="America del Sur")
				{
					cas++;
					if(cas==4)
					{
						cont+=2;
					}
				}else if(continente=="Europa")
				{
					ce++;
					if(ce==7)
					{
						cont+=5;
					}
				}else if(continente=="Africa")
				{
					caf++;
					if(caf==6)
					{
						cont+=3;
					}
				}else if(continente=="Asia")
				{
					casi++;
					if(casi==12)
					{
						cont+=7;
					}
				}else if(continente=="Oceania")
				{
					co++;
					if(co==4)
					{
						cont+=2;
					}
				}
				
	
			}
		}
	}

	return cont;
}


