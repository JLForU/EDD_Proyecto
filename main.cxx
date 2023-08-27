
// DIRECTIVAS DE PREPROCESAMIENTO.
#include "main.hxx"



/* IMPLEMENTACIÓN DE FUNCIONES PARA EL MANEJO DEL JUEGO. */

void llenarMazo ( void ) {

    Territorio t ;

    // Primer continente.
    t = Territorio("Alaska","América del Norte",1) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Alberta","América del Norte",2) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("América Central","América del Norte",3) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("Estados Unidos Orientales","América del Norte",4) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Groenlandia","América del Norte",5) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Territorio Noroccidental","América del Norte",6) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("Ontario","América del Norte",7) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Quebec","América del Norte",8) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Estados Unidos Occidentales","América del Norte",9) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    // Segundo continente.
    t = Territorio("Argentina","América del Sur",1) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Brasil","América del Sur",2) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Perú","América del Sur",3) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("Venezuela","América del Sur",4) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    // Tercer continente.
    t = Territorio("Gran Bretaña","Europa",1) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Islandia","Europa",2) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("Europa del Norte","Europa",3) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Escandinavia","Europa",4) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Europa del Sur","Europa",5) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("Ucrania","Europa",6) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Europa Occidental","Europa",7) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    // Cuarto continente.
    t = Territorio("Congo","África",1) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("África Oriental","África",2) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Egipto","África",3) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Madagascar","África",4) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("África del Norte","África",5) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("África del Sur","África",6) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    // Quinto continente.
    t = Territorio("Afghanistán","Asia",1) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("China","Asia",2) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("India","Asia",3) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Irkutsk","Asia",4) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("Japón","Asia",5) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Kamchatka","Asia",6) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Medio Oriente","Asia",7) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("Mongolia","Asia",8) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Siam","Asia",9) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Siberia","Asia",10) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("Ural","Asia",11) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Yakutsk","Asia",12) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    // Sexto continente.
    t = Territorio("Australia Oriental","Oceanía",1) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;
    t = Territorio("Indonesia","Oceanía",2) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Infantería",1)) ) ;
    t = Territorio("Nueva Guinea","Oceanía",3) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Caballería",5)) ) ;
    t = Territorio("Australia Occidental","Oceanía",4) ;
    territorios.push_back ( t )  ;  mazo.push_back ( Carta(t,Ejercito("Artillería",10)) ) ;

}


void funcioon_Jugar ( void ) {

    do {

        cout << "\tIntroduce un comando: " << flush ;
        getline (cin,comandoEntrada) ;

        cout << endl << endl ;

        accionarComandoCorrecto ( verificarComandoExistente(comandoEntrada) ) ;

        cout << endl << endl ;

        if ( comandoEntrada == "salir" || comandoEntrada == "SALIR" ) break ;

    } while ( true ) ;

}

