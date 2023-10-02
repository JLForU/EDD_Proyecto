
// DIRECTIVAS DE PREPROCESAMIENTO.
#include "main.h"



/* IMPLEMENTACIÓN DE FUNCIONES PARA EL MANEJO DEL JUEGO. */

void llenarMazo ( void ) {

    Territorio t ;

    // Primer continente.
    t = Territorio("Alaska","America del Norte",11) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Alberta","America del Norte",12) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("America Central","America del Norte",13) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Estados Unidos Orientales","America del Norte",14) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Groenlandia","America del Norte",15) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Territorio Noroccidental","America del Norte",16) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Ontario","America del Norte",17) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Quebec","America del Norte",18) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Estados Unidos Occidentales","America del Norte",19) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;

    // Segundo continente.
    t = Territorio("Argentina","America del Sur",21) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Brasil","America del Sur",22) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Peru","America del Sur",23) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Venezuela","America del Sur",24) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;

    // Tercer continente.
    t = Territorio("Gran Bretania","Europa",31) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Islandia","Europa",32) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Europa del Norte","Europa",33) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Escandinavia","Europa",34) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Europa del Sur","Europa",35) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Ucrania","Europa",36) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Europa Occidental","Europa",37) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;

    // Cuarto continente.
    t = Territorio("Congo","Africa",41) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Africa Oriental","Africa",42) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Egipto","Africa",43) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Madagascar","Africa",44) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Africa del Norte","Africa",45) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Africa del Sur","Africa",46) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;

    // Quinto continente.
    t = Territorio("Afghanistan","Asia",51) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("China","Asia",52) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("India","Asia",53) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Irkutsk","Asia",54) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Japon","Asia",55) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Kamchatka","Asia",56) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Medio Oriente","Asia",57) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Mongolia","Asia",58) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Siam","Asia",59) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Siberia","Asia",510) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Ural","Asia",511) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Yakutsk","Asia",512) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;

    // Sexto continente.
    t = Territorio("Australia Oriental","Oceania",61) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;
    t = Territorio("Indonesia","Oceania",62) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infanteria",1)) ) ;
    t = Territorio("Nueva Guinea","Oceania",63) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballeria",5)) ) ;
    t = Territorio("Australia Occidental","Oceania",64) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artilleria",10)) ) ;

}


void funcioon_Jugar ( void ) {

    do {

        cout << "\tIntroduce un comando: " << endl << endl << "$ "<<flush ;
        getline (cin,comandoEntrada) ;

        cout << endl << endl ;

        accionarComandoCorrecto ( verificarComandoExistente(comandoEntrada) ) ;

        cout << endl << endl ;

        if ( comandoEntrada == "salir" || comandoEntrada == "SALIR" ) break ;

    } while ( true ) ;

}


void crearMapa ( void ) {

    // América del Norte

    auxiliar_CrearMapa ( "Alaska" , "Alberta" ) ;
    auxiliar_CrearMapa ( "Alaska" , "Territorio Noroccidental" ) ;

    auxiliar_CrearMapa ( "Alberta" , "Alaska" ) ;
    auxiliar_CrearMapa ( "Alberta" , "Territorio Noroccidental" ) ;
    auxiliar_CrearMapa ( "Alberta" , "Ontario" ) ;

    auxiliar_CrearMapa ( "Territorio Noroccidental" , "Alaska" ) ;
    auxiliar_CrearMapa ( "Territorio Noroccidental" , "Alberta" ) ;
    auxiliar_CrearMapa ( "Territorio Noroccidental" , "Ontario" ) ;
    auxiliar_CrearMapa ( "Territorio Noroccidental" , "Groenlandia" ) ;

    auxiliar_CrearMapa ( "America Central" , "Estados Unidos Orientales" ) ;
    auxiliar_CrearMapa ( "America Central" , "Quebec" ) ;
    auxiliar_CrearMapa ( "America Central" , "Venezuela" ) ;

    auxiliar_CrearMapa ( "Estados Unidos Orientales" , "America Central" ) ;
    auxiliar_CrearMapa ( "Estados Unidos Orientales" , "Estados Unidos Occidentales" ) ;
    auxiliar_CrearMapa ( "Estados Unidos Orientales" , "Ontario" ) ;
    auxiliar_CrearMapa ( "Estados Unidos Orientales" , "Quebec" ) ;

    auxiliar_CrearMapa ( "Groenlandia" , "Territorio Noroccidental" ) ;
    auxiliar_CrearMapa ( "Groenlandia" , "Ontario" ) ;
    auxiliar_CrearMapa ( "Groenlandia" , "Quebec" ) ;
    auxiliar_CrearMapa ( "Groenlandia" , "Islandia" ) ;

    auxiliar_CrearMapa ( "Territorio Noroccidental" , "Alaska" ) ;
    auxiliar_CrearMapa ( "Territorio Noroccidental" , "Alberta" ) ;
    auxiliar_CrearMapa ( "Territorio Noroccidental" , "Ontario" ) ;
    auxiliar_CrearMapa ( "Territorio Noroccidental" , "Groenlandia" ) ;

    auxiliar_CrearMapa ( "Ontario" , "Alberta" ) ;
    auxiliar_CrearMapa ( "Ontario" , "Territorio Noroccidental" ) ;
    auxiliar_CrearMapa ( "Ontario" , "Estados Unidos Orientales" ) ;
    auxiliar_CrearMapa ( "Ontario" , "Quebec" ) ;
    auxiliar_CrearMapa ( "Ontario" , "Groenlandia" ) ;

    auxiliar_CrearMapa ( "Quebec" , "Estados Unidos Orientales" ) ;
    auxiliar_CrearMapa ( "Quebec" , "Ontario" ) ;
    auxiliar_CrearMapa ( "Quebec" , "Groenlandia" ) ;

    auxiliar_CrearMapa ( "Estados Unidos Occidentales" , "Estados Unidos Orientales" ) ;
    auxiliar_CrearMapa ( "Estados Unidos Occidentales" , "America Central" ) ;
    auxiliar_CrearMapa ( "Estados Unidos Occidentales" , "Ontario" ) ;

    // América del Sur

    auxiliar_CrearMapa ( "Argentina" , "Peru" ) ;
    auxiliar_CrearMapa ( "Argentina" , "Brasil" ) ;

    auxiliar_CrearMapa ( "Brasil" , "Argentina" ) ;
    auxiliar_CrearMapa ( "Brasil" , "Peru" ) ;
    auxiliar_CrearMapa ( "Brasil" , "Venezuela" ) ;
    auxiliar_CrearMapa ( "Brasil" , "Africa del Norte" ) ;

    auxiliar_CrearMapa ( "Peru" , "Argentina" ) ;
    auxiliar_CrearMapa ( "Peru" , "Brasil" ) ;
    auxiliar_CrearMapa ( "Peru" , "Venezuela" ) ;

    auxiliar_CrearMapa ( "Venezuela" , "Brasil" ) ;
    auxiliar_CrearMapa ( "Venezuela" , "Peru" ) ;
    auxiliar_CrearMapa ( "Venezuela" , "America Central" ) ;

    // Europa

    auxiliar_CrearMapa ( "Gran Bretania" , "Islandia" ) ;
    auxiliar_CrearMapa ( "Gran Bretania" , "Europa del Norte" ) ;
    auxiliar_CrearMapa ( "Gran Bretania" , "Escandinavia" ) ;
    auxiliar_CrearMapa ( "Gran Bretania" , "Europa Occidental" ) ;

    auxiliar_CrearMapa ( "Islandia" , "Gran Bretania" ) ;
    auxiliar_CrearMapa ( "Islandia" , "Europa del Norte" ) ;
    auxiliar_CrearMapa ( "Islandia" , "Escandinavia" ) ;
    auxiliar_CrearMapa ( "Islandia" , "Groenlandia" ) ;

    auxiliar_CrearMapa ( "Europa del Norte" , "Gran Bretania" ) ;
    auxiliar_CrearMapa ( "Europa del Norte" , "Escandinavia" ) ;
    auxiliar_CrearMapa ( "Europa del Norte" , "Europa del Sur" ) ;
    auxiliar_CrearMapa ( "Europa del Norte" , "Ucrania" ) ;
    auxiliar_CrearMapa ( "Europa del Norte" , "Europa Occidental" ) ;

    auxiliar_CrearMapa ( "Escandinavia" , "Gran Bretania" ) ;
    auxiliar_CrearMapa ( "Escandinavia" , "Islandia" ) ;
    auxiliar_CrearMapa ( "Escandinavia" , "Europa del Norte" ) ;
    auxiliar_CrearMapa ( "Escandinavia" , "Ucrania" ) ;

    auxiliar_CrearMapa ( "Europa del Sur" , "Europa del Norte" ) ;
    auxiliar_CrearMapa ( "Europa del Sur" , "Europa Occidental" ) ;
    auxiliar_CrearMapa ( "Europa del Sur" , "Ucrania" ) ;
    auxiliar_CrearMapa ( "Europa del Sur" , "Egipto" ) ;

    auxiliar_CrearMapa ( "Ucrania" , "Europa del Norte" ) ;
    auxiliar_CrearMapa ( "Ucrania" , "Escandinavia" ) ;
    auxiliar_CrearMapa ( "Ucrania" , "Europa del Sur" ) ;
    auxiliar_CrearMapa ( "Ucrania" , "Afghanistan" ) ;
    auxiliar_CrearMapa ( "Ucrania" , "Medio Oriente" ) ;
    auxiliar_CrearMapa ( "Ucrania" , "Ural" ) ;

    auxiliar_CrearMapa ( "Europa Occidental" , "Gran Bretania" ) ;
    auxiliar_CrearMapa ( "Europa Occidental" , "Europa del Norte" ) ;
    auxiliar_CrearMapa ( "Europa Occidental" , "Europa del Sur" ) ;
    auxiliar_CrearMapa ( "Europa Occidental" , "Africa del Norte" ) ;

    // África

    auxiliar_CrearMapa ( "Congo" , "Africa Oriental" ) ;
    auxiliar_CrearMapa ( "Congo" , "Africa del Norte" ) ;
    auxiliar_CrearMapa ( "Congo" , "Africa del Sur" ) ;

    auxiliar_CrearMapa ( "Africa Oriental" , "Congo" ) ;
    auxiliar_CrearMapa ( "Africa Oriental" , "Egipto" ) ;
    auxiliar_CrearMapa ( "Africa Oriental" , "Madagascar" ) ;
    auxiliar_CrearMapa ( "Africa Oriental" , "Africa del Sur" ) ;

    auxiliar_CrearMapa ( "Egipto" , "Europa del Sur" ) ;
    auxiliar_CrearMapa ( "Egipto" , "Medio Oriente" ) ;
    auxiliar_CrearMapa ( "Egipto" , "Africa Oriental" ) ;
    auxiliar_CrearMapa ( "Egipto" , "Africa del Norte" ) ;

    auxiliar_CrearMapa ( "Madagascar" , "Africa Oriental" ) ;
    auxiliar_CrearMapa ( "Madagascar" , "Africa del Sur" ) ;

    auxiliar_CrearMapa ( "Africa del Norte" , "Congo" ) ;
    auxiliar_CrearMapa ( "Africa del Norte" , "Africa Oriental" ) ;
    auxiliar_CrearMapa ( "Africa del Norte" , "Egipto" ) ;
    auxiliar_CrearMapa ( "Africa del Norte" , "Brasil" ) ;

    auxiliar_CrearMapa ( "Africa del Sur" , "Congo" ) ;
    auxiliar_CrearMapa ( "Africa del Sur" , "Africa Oriental" ) ;
    auxiliar_CrearMapa ( "Africa del Sur" , "Madagascar" ) ;

    // Asia

    auxiliar_CrearMapa ( "Afghanistan" , "China" ) ;
    auxiliar_CrearMapa ( "Afghanistan" , "India" ) ;
    auxiliar_CrearMapa ( "Afghanistan" , "Medio Oriente" ) ;
    auxiliar_CrearMapa ( "Afghanistan" , "Ural" ) ;
    auxiliar_CrearMapa ( "Afghanistan" , "Ucrania" ) ;

    auxiliar_CrearMapa ( "China" , "Afghanistan" ) ;
    auxiliar_CrearMapa ( "China" , "India" ) ;
    auxiliar_CrearMapa ( "China" , "Mongolia" ) ;
    auxiliar_CrearMapa ( "China" , "Siam" ) ;
    auxiliar_CrearMapa ( "China" , "Siberia" ) ;
    auxiliar_CrearMapa ( "China" , "Ural" ) ;

    auxiliar_CrearMapa ( "India" , "Afghanistan" ) ;
    auxiliar_CrearMapa ( "India" , "China" ) ;
    auxiliar_CrearMapa ( "India" , "Medio Oriente" ) ;
    auxiliar_CrearMapa ( "India" , "Siam" ) ;

    auxiliar_CrearMapa ( "Irkustsk" , "Kamchatka" ) ;
    auxiliar_CrearMapa ( "Irkustsk" , "Mongolia" ) ;
    auxiliar_CrearMapa ( "Irkustsk" , "Siberia" ) ;
    auxiliar_CrearMapa ( "Irkustsk" , "Yakutsk" ) ;

    auxiliar_CrearMapa ( "Japon" , "Kamchatka" ) ;
    auxiliar_CrearMapa ( "Japon" , "Mongolia" ) ;

    auxiliar_CrearMapa ( "Kamchatka" , "Japon" ) ;
    auxiliar_CrearMapa ( "Kamchatka" , "Irkustsk" ) ;
    auxiliar_CrearMapa ( "Kamchatka" , "Mongolia" ) ;
    auxiliar_CrearMapa ( "Kamchatka" , "Yakutsk" ) ;

    auxiliar_CrearMapa ( "Medio Oriente" , "Afghanistan" ) ;
    auxiliar_CrearMapa ( "Medio Oriente" , "India" ) ;
    auxiliar_CrearMapa ( "Medio Oriente" , "Ucrania" ) ;
    auxiliar_CrearMapa ( "Medio Oriente" , "Egipto" ) ;

    auxiliar_CrearMapa ( "Mongolia" , "China" ) ;
    auxiliar_CrearMapa ( "Mongolia" , "Irkustsk" ) ;
    auxiliar_CrearMapa ( "Mongolia" , "Japon" ) ;
    auxiliar_CrearMapa ( "Mongolia" , "Kamchatka" ) ;
    auxiliar_CrearMapa ( "Mongolia" , "Siberia" ) ;

    auxiliar_CrearMapa ( "Siam" , "China" ) ;
    auxiliar_CrearMapa ( "Siam" , "India" ) ;
    auxiliar_CrearMapa ( "Siam" , "Indonesia" ) ;

    auxiliar_CrearMapa ( "Siberia" , "China" ) ;
    auxiliar_CrearMapa ( "Siberia" , "Irkustsk" ) ;
    auxiliar_CrearMapa ( "Siberia" , "Mongolia" ) ;
    auxiliar_CrearMapa ( "Siberia" , "Ural" ) ;

    auxiliar_CrearMapa ( "Ural" , "Afghanistan" ) ;
    auxiliar_CrearMapa ( "Ural" , "China" ) ;
    auxiliar_CrearMapa ( "Ural" , "Siberia" ) ;
    auxiliar_CrearMapa ( "Ural" , "Ucrania" ) ;

    auxiliar_CrearMapa ( "Yakutsk" , "Irkustsk" ) ;
    auxiliar_CrearMapa ( "Yakutsk" , "Kamchatka" ) ;
    auxiliar_CrearMapa ( "Yakutsk" , "Siberia" ) ;

    // Oceanía

    auxiliar_CrearMapa ( "Australia Oriental" , "Nueva Guinea" ) ;
    auxiliar_CrearMapa ( "Australia Oriental" , "Australia Occidental" ) ;

    auxiliar_CrearMapa ( "Indonesia" , "Nueva Guinea" ) ;
    auxiliar_CrearMapa ( "Indonesia" , "Australia Occidental" ) ;
    auxiliar_CrearMapa ( "Indonesia" , "Siam" ) ;

    auxiliar_CrearMapa ( "Nueva Guinea" , "Australia Oriental" ) ;
    auxiliar_CrearMapa ( "Nueva Guinea" , "Indonesia" ) ;
    auxiliar_CrearMapa ( "Nueva Guinea" , "Australia Occidental" ) ;

    auxiliar_CrearMapa ( "Australia Occidental" , "Australia Oriental" ) ;
    auxiliar_CrearMapa ( "Australia Occidental" , "Indonesia" ) ;
    auxiliar_CrearMapa ( "Australia Occidental" , "Nueva Guinea" ) ;

}


void auxiliar_CrearMapa ( string principal , string vecino ) {

    vector <Territorio>::iterator iteradorTerritorio_01 ;
    vector <Territorio>::iterator iteradorTerritorio_02 ;

    for ( iteradorTerritorio_01 = territorios.begin() ; iteradorTerritorio_01 < territorios.end() ; ++iteradorTerritorio_01 )
        for ( iteradorTerritorio_02 = territorios.begin() ; iteradorTerritorio_02 < territorios.end() ; ++iteradorTerritorio_02 )
            if ( iteradorTerritorio_01->getNombre() == principal && iteradorTerritorio_02->getNombre() == vecino )
                iteradorTerritorio_01 -> aniadirVecino ( *iteradorTerritorio_02 ) ;

}
void OyUUnidades(string idJugador){
	for(int i=0;i<jugadores.size();i++){
		for(int j=0;j<territorios.size();j++){
			
		}
	}
}
