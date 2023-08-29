
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

        cout << "\tIntroduce un comando: " <<endl<<"$ "<<flush ;
        getline (cin,comandoEntrada) ;

        cout << endl << endl ;

        accionarComandoCorrecto ( verificarComandoExistente(comandoEntrada) ) ;

        cout << endl << endl ;

        if ( comandoEntrada == "salir" || comandoEntrada == "SALIR" ) break ;

    } while ( true ) ;

}


/*
void crearMapa ( void ) {

    map<string,Territorio> mapaTerritorios ;

    // Crear territorios de América del Norte
    mapaTerritorios["Alaska"] = Territorio ( "Alaska" , "América del Norte" , 1 );
    mapaTerritorios["Alberta"] = Territorio ( "Alberta" , "América del Norte" , 2 );
    mapaTerritorios["Territorio Noroccidental"] = Territorio(" T erritorio Noroccidental" , "América del Norte" , 3 );
    mapaTerritorios["America Central"] = Territorio(" A merica Central" , "América del Norte" , 0 );
    mapaTerritorios["Estados Unidos Orientales"] = Territorio("Estados  U nidos Orientales" , "América del Norte" , 0 );
    mapaTerritorios["Groenlandia"] = Territorio ( "Groenlandia" , "América del Norte" , 0 );
    mapaTerritorios["Territorio Noroccidental"] = Territorio(" T erritorio Noroccidental" , "América del Norte" , 0 );
    mapaTerritorios["Ontario"] = Territorio ( "Ontario" , "América del Norte" , 0 );
    mapaTerritorios["Quebec"] = Territorio ( "Quebec" , "América del Norte" , 0 );
    mapaTerritorios["Estados Unidos Occidentales"] = Territorio("Estados  U nidos Occidentales" , "América del Norte" , 0 );

    // Conectar territorios con sus vecinos (América del Norte)
    mapaTerritorios["Alaska"].agregarVecino(&mapaTerritorios["Alberta"]);
    mapaTerritorios["Alaska"].agregarVecino(&mapaTerritorios["Territorio Noroccidental"]);

    mapaTerritorios["Alberta"].agregarVecino(&mapaTerritorios["Alaska"]);
    mapaTerritorios["Alberta"].agregarVecino(&mapaTerritorios["Territorio Noroccidental"]);
    mapaTerritorios["Alberta"].agregarVecino(&mapaTerritorios["Ontario"]);

    mapaTerritorios["Territorio Noroccidental"].agregarVecino(&mapaTerritorios["Alaska"]);
    mapaTerritorios["Territorio Noroccidental"].agregarVecino(&mapaTerritorios["Alberta"]);
    mapaTerritorios["Territorio Noroccidental"].agregarVecino(&mapaTerritorios["Ontario"]);
    mapaTerritorios["Territorio Noroccidental"].agregarVecino(&mapaTerritorios["Groenlandia"]);

    mapaTerritorios["America Central"].agregarVecino(&mapaTerritorios["Estados Unidos Orientales"]);
    mapaTerritorios["America Central"].agregarVecino(&mapaTerritorios["Quebec"]);
    mapaTerritorios["America Central"].agregarVecino(&mapaTerritorios["Venezuela"]);

    mapaTerritorios["Estados Unidos Orientales"].agregarVecino(&mapaTerritorios["America Central"]);
    mapaTerritorios["Estados Unidos Orientales"].agregarVecino(&mapaTerritorios["Estados Unidos Occidentales"]);
    mapaTerritorios["Estados Unidos Orientales"].agregarVecino(&mapaTerritorios["Ontario"]);
    mapaTerritorios["Estados Unidos Orientales"].agregarVecino(&mapaTerritorios["Quebec"]);

    mapaTerritorios["Groenlandia"].agregarVecino(&mapaTerritorios["Territorio Noroccidental"]);
    mapaTerritorios["Groenlandia"].agregarVecino(&mapaTerritorios["Ontario"]);
    mapaTerritorios["Groenlandia"].agregarVecino(&mapaTerritorios["Quebec"]);
    mapaTerritorios["Groenlandia"].agregarVecino(&mapaTerritorios["Islandia"]);

    mapaTerritorios["Territorio Noroccidental"].agregarVecino(&mapaTerritorios["Alaska"]);
    mapaTerritorios["Territorio Noroccidental"].agregarVecino(&mapaTerritorios["Alberta"]);
    mapaTerritorios["Territorio Noroccidental"].agregarVecino(&mapaTerritorios["Ontario"]);
    mapaTerritorios["Territorio Noroccidental"].agregarVecino(&mapaTerritorios["Groenlandia"]);

    mapaTerritorios["Ontario"].agregarVecino(&mapaTerritorios["Alberta"]);
    mapaTerritorios["Ontario"].agregarVecino(&mapaTerritorios["Territorio Noroccidental"]);
    mapaTerritorios["Ontario"].agregarVecino(&mapaTerritorios["Estados Unidos Orientales"]);
    mapaTerritorios["Ontario"].agregarVecino(&mapaTerritorios["Quebec"]);
    mapaTerritorios["Ontario"].agregarVecino(&mapaTerritorios["Groenlandia"]);

    mapaTerritorios["Quebec"].agregarVecino(&mapaTerritorios["Estados Unidos Orientales"]);
    mapaTerritorios["Quebec"].agregarVecino(&mapaTerritorios["Ontario"]);
    mapaTerritorios["Quebec"].agregarVecino(&mapaTerritorios["Groenlandia"]);

    mapaTerritorios["Estados Unidos Occidentales"].agregarVecino(&mapaTerritorios["Estados Unidos Orientales"]);
    mapaTerritorios["Estados Unidos Occidentales"].agregarVecino(&mapaTerritorios["America Central"]);
    mapaTerritorios["Estados Unidos Occidentales"].agregarVecino(&mapaTerritorios["Ontario"]);

    // Crear territorios de América del Sur
    mapaTerritorios["Argentina"] = Territorio("Argentina", "Purpura");
    mapaTerritorios["Brasil"] = Territorio("Brasil", "Purpura");
    mapaTerritorios["Peru"] = Territorio("Peru", "Purpura");
    mapaTerritorios["Venezuela"] = Territorio("Venezuela", "Purpura");

    // Conectar territorios con sus vecinos (América del Sur)
    mapaTerritorios["Argentina"].agregarVecino(&mapaTerritorios["Peru"]);
    mapaTerritorios["Argentina"].agregarVecino(&mapaTerritorios["Brasil"]);

    mapaTerritorios["Brasil"].agregarVecino(&mapaTerritorios["Argentina"]);
    mapaTerritorios["Brasil"].agregarVecino(&mapaTerritorios["Peru"]);
    mapaTerritorios["Brasil"].agregarVecino(&mapaTerritorios["Venezuela"]);
    mapaTerritorios["Brasil"].agregarVecino(&mapaTerritorios["Africa del Norte"]);

    mapaTerritorios["Peru"].agregarVecino(&mapaTerritorios["Argentina"]);
    mapaTerritorios["Peru"].agregarVecino(&mapaTerritorios["Brasil"]);
    mapaTerritorios["Peru"].agregarVecino(&mapaTerritorios["Venezuela"]);

    mapaTerritorios["Venezuela"].agregarVecino(&mapaTerritorios["Brasil"]);
    mapaTerritorios["Venezuela"].agregarVecino(&mapaTerritorios["Peru"]);
    mapaTerritorios["Venezuela"].agregarVecino(&mapaTerritorios["America Central"]);

    // Crear territorios de Europa
    mapaTerritorios["Gran Bretaña"] = Territorio("Gran Bretaña", "Azul");
    mapaTerritorios["Islandia"] = Territorio("Islandia", "Azul");
    mapaTerritorios["Europa del Norte"] = Territorio("Europa del Norte", "Azul");
    mapaTerritorios["Escandinavia"] = Territorio("Escandinavia", "Azul");
    mapaTerritorios["Europa del Sur"] = Territorio("Europa del Sur", "Azul");
    mapaTerritorios["Ucrania"] = Territorio("Ucrania", "Azul");
    mapaTerritorios["Europa Occidental"] = Territorio("Europa Occidental", "Azul");

    // Conectar territorios con sus vecinos (Europa)
    mapaTerritorios["Gran Bretaña"].agregarVecino(&mapaTerritorios["Islandia"]);
    mapaTerritorios["Gran Bretaña"].agregarVecino(&mapaTerritorios["Europa del Norte"]);
    mapaTerritorios["Gran Bretaña"].agregarVecino(&mapaTerritorios["Escandinavia"]);
    mapaTerritorios["Gran Bretaña"].agregarVecino(&mapaTerritorios["Europa Occidental"]);

    mapaTerritorios["Islandia"].agregarVecino(&mapaTerritorios["Gran Bretaña"]);
    mapaTerritorios["Islandia"].agregarVecino(&mapaTerritorios["Europa del Norte"]);
    mapaTerritorios["Islandia"].agregarVecino(&mapaTerritorios["Escandinavia"]);
    mapaTerritorios["Islandia"].agregarVecino(&mapaTerritorios["Groenlandia"]);

    mapaTerritorios["Europa del Norte"].agregarVecino(&mapaTerritorios["Gran Bretaña"]);
    mapaTerritorios["Europa del Norte"].agregarVecino(&mapaTerritorios["Escandinavia"]);
    mapaTerritorios["Europa del Norte"].agregarVecino(&mapaTerritorios["Europa del Sur"]);
    mapaTerritorios["Europa del Norte"].agregarVecino(&mapaTerritorios["Ucrania"]);
    mapaTerritorios["Europa del Norte"].agregarVecino(&mapaTerritorios["Europa Occidental"]);

    mapaTerritorios["Escandinavia"].agregarVecino(&mapaTerritorios["Gran Bretaña"]);
    mapaTerritorios["Escandinavia"].agregarVecino(&mapaTerritorios["Islandia"]);
    mapaTerritorios["Escandinavia"].agregarVecino(&mapaTerritorios["Europa del Norte"]);
    mapaTerritorios["Escandinavia"].agregarVecino(&mapaTerritorios["Ucrania"]);

    mapaTerritorios["Europa del Sur"].agregarVecino(&mapaTerritorios["Europa del Norte"]);
    mapaTerritorios["Europa del Sur"].agregarVecino(&mapaTerritorios["Europa Occidental"]);
    mapaTerritorios["Europa del Sur"].agregarVecino(&mapaTerritorios["Ucrania"]);
    mapaTerritorios["Europa del Sur"].agregarVecino(&mapaTerritorios["Egipto"]);

    mapaTerritorios["Ucrania"].agregarVecino(&mapaTerritorios["Europa del Norte"]);
    mapaTerritorios["Ucrania"].agregarVecino(&mapaTerritorios["Escandinavia"]);
    mapaTerritorios["Ucrania"].agregarVecino(&mapaTerritorios["Europa del Sur"]);
    mapaTerritorios["Ucrania"].agregarVecino(&mapaTerritorios["Afghanistán"]);
    mapaTerritorios["Ucrania"].agregarVecino(&mapaTerritorios["Medio Oriente"]);
    mapaTerritorios["Ucrania"].agregarVecino(&mapaTerritorios["Ural"]);

    mapaTerritorios["Europa Occidental"].agregarVecino(&mapaTerritorios["Gran Bretaña"]);
    mapaTerritorios["Europa Occidental"].agregarVecino(&mapaTerritorios["Europa del Norte"]);
    mapaTerritorios["Europa Occidental"].agregarVecino(&mapaTerritorios["Europa del Sur"]);
    mapaTerritorios["Europa Occidental"].agregarVecino(&mapaTerritorios["Africa del Norte"]);

    // Crear territorios de África
    mapaTerritorios["Congo"] = Territorio("Congo", "Naranja");
    mapaTerritorios["Africa Oriental"] = Territorio("Africa Oriental", "Naranja");
    mapaTerritorios["Egipto"] = Territorio("Egipto", "Naranja");
    mapaTerritorios["Madagascar"] = Territorio("Madagascar", "Naranja");
    mapaTerritorios["Africa del Norte"] = Territorio("Africa del Norte", "Naranja");
    mapaTerritorios["Africa del Sur"] = Territorio("Africa del Sur", "Naranja");

    // Conectar territorios con sus vecinos (África)
    mapaTerritorios["Congo"].agregarVecino(&mapaTerritorios["Africa Oriental"]);
    mapaTerritorios["Congo"].agregarVecino(&mapaTerritorios["Africa del Norte"]);
    mapaTerritorios["Congo"].agregarVecino(&mapaTerritorios["Africa del Sur"]);

    mapaTerritorios["Africa Oriental"].agregarVecino(&mapaTerritorios["Congo"]);
    mapaTerritorios["Africa Oriental"].agregarVecino(&mapaTerritorios["Egipto"]);
    mapaTerritorios["Africa Oriental"].agregarVecino(&mapaTerritorios["Madagascar"]);
    mapaTerritorios["Africa Oriental"].agregarVecino(&mapaTerritorios["Africa del Sur"]);

    mapaTerritorios["Egipto"].agregarVecino(&mapaTerritorios["Europa del Sur"]);
    mapaTerritorios["Egipto"].agregarVecino(&mapaTerritorios["Medio Oriente"]);
    mapaTerritorios["Egipto"].agregarVecino(&mapaTerritorios["Africa Oriental"]);
    mapaTerritorios["Egipto"].agregarVecino(&mapaTerritorios["Africa del Norte"]);

    mapaTerritorios["Madagascar"].agregarVecino(&mapaTerritorios["Africa Oriental"]);
    mapaTerritorios["Madagascar"].agregarVecino(&mapaTerritorios["Africa del Sur"]);

    mapaTerritorios["Africa del Norte"].agregarVecino(&mapaTerritorios["Congo"]);
    mapaTerritorios["Africa del Norte"].agregarVecino(&mapaTerritorios["Africa Oriental"]);
    mapaTerritorios["Africa del Norte"].agregarVecino(&mapaTerritorios["Egipto"]);
    mapaTerritorios["Africa del Norte"].agregarVecino(&mapaTerritorios["Brasil"]);

    mapaTerritorios["Africa del Sur"].agregarVecino(&mapaTerritorios["Congo"]);
    mapaTerritorios["Africa del Sur"].agregarVecino(&mapaTerritorios["Africa Oriental"]);
    mapaTerritorios["Africa del Sur"].agregarVecino(&mapaTerritorios["Madagascar"]);

    // Crear territorios de Asia
    mapaTerritorios["Afghanistán"] = Territorio("Afghanistán", "Verde");
    mapaTerritorios["China"] = Territorio("China", "Verde");
    mapaTerritorios["India"] = Territorio("India", "Verde");
    mapaTerritorios["Irkustsk"] = Territorio("Irkustsk", "Verde");
    mapaTerritorios["Japon"] = Territorio("Japon", "Verde");
    mapaTerritorios["Kamchatka"] = Territorio("Kamchatka", "Verde");
    mapaTerritorios["Medio Oriente"] = Territorio("Medio Oriente", "Verde");
    mapaTerritorios["Mongolia"] = Territorio("Mongolia", "Verde");
    mapaTerritorios["Siam"] = Territorio("Siam", "Verde");
    mapaTerritorios["Siberia"] = Territorio("Siberia", "Verde");
    mapaTerritorios["Ural"] = Territorio("Ural", "Verde");
    mapaTerritorios["Yakutsk"] = Territorio("Yakutsk", "Verde");

    // Conectar territorios con sus vecinos (Asia)
    mapaTerritorios["Afghanistán"].agregarVecino(&mapaTerritorios["China"]);
    mapaTerritorios["Afghanistán"].agregarVecino(&mapaTerritorios["India"]);
    mapaTerritorios["Afghanistán"].agregarVecino(&mapaTerritorios["Medio Oriente"]);
    mapaTerritorios["Afghanistán"].agregarVecino(&mapaTerritorios["Ural"]);
    mapaTerritorios["Afghanistán"].agregarVecino(&mapaTerritorios["Ucrania"]);

    mapaTerritorios["China"].agregarVecino(&mapaTerritorios["Afghanistán"]);
    mapaTerritorios["China"].agregarVecino(&mapaTerritorios["India"]);
    mapaTerritorios["China"].agregarVecino(&mapaTerritorios["Mongolia"]);
    mapaTerritorios["China"].agregarVecino(&mapaTerritorios["Siam"]);
    mapaTerritorios["China"].agregarVecino(&mapaTerritorios["Siberia"]);
    mapaTerritorios["China"].agregarVecino(&mapaTerritorios["Ural"]);

    mapaTerritorios["India"].agregarVecino(&mapaTerritorios["Afghanistán"]);
    mapaTerritorios["India"].agregarVecino(&mapaTerritorios["China"]);
    mapaTerritorios["India"].agregarVecino(&mapaTerritorios["Medio Oriente"]);
    mapaTerritorios["India"].agregarVecino(&mapaTerritorios["Siam"]);

    mapaTerritorios["Irkustsk"].agregarVecino(&mapaTerritorios["Kamchatka"]);
    mapaTerritorios["Irkustsk"].agregarVecino(&mapaTerritorios["Mongolia"]);
    mapaTerritorios["Irkustsk"].agregarVecino(&mapaTerritorios["Siberia"]);
    mapaTerritorios["Irkustsk"].agregarVecino(&mapaTerritorios["Yakutsk"]);

    mapaTerritorios["Japon"].agregarVecino(&mapaTerritorios["Kamchatka"]);
    mapaTerritorios["Japon"].agregarVecino(&mapaTerritorios["Mongolia"]);

    mapaTerritorios["Kamchatka"].agregarVecino(&mapaTerritorios["Japon"]);
    mapaTerritorios["Kamchatka"].agregarVecino(&mapaTerritorios["Irkustsk"]);
    mapaTerritorios["Kamchatka"].agregarVecino(&mapaTerritorios["Mongolia"]);
    mapaTerritorios["Kamchatka"].agregarVecino(&mapaTerritorios["Yakutsk"]);

    mapaTerritorios["Medio Oriente"].agregarVecino(&mapaTerritorios["Afghanistán"]);
    mapaTerritorios["Medio Oriente"].agregarVecino(&mapaTerritorios["India"]);
    mapaTerritorios["Medio Oriente"].agregarVecino(&mapaTerritorios["Ucrania"]);
    mapaTerritorios["Medio Oriente"].agregarVecino(&mapaTerritorios["Egipto"]);

    mapaTerritorios["Mongolia"].agregarVecino(&mapaTerritorios["China"]);
    mapaTerritorios["Mongolia"].agregarVecino(&mapaTerritorios["Irkustsk"]);
    mapaTerritorios["Mongolia"].agregarVecino(&mapaTerritorios["Japon"]);
    mapaTerritorios["Mongolia"].agregarVecino(&mapaTerritorios["Kamchatka"]);
    mapaTerritorios["Mongolia"].agregarVecino(&mapaTerritorios["Siberia"]);

    mapaTerritorios["Siam"].agregarVecino(&mapaTerritorios["China"]);
    mapaTerritorios["Siam"].agregarVecino(&mapaTerritorios["India"]);
    mapaTerritorios["Siam"].agregarVecino(&mapaTerritorios["Indonesia"]);

    mapaTerritorios["Siberia"].agregarVecino(&mapaTerritorios["China"]);
    mapaTerritorios["Siberia"].agregarVecino(&mapaTerritorios["Irkustsk"]);
    mapaTerritorios["Siberia"].agregarVecino(&mapaTerritorios["Mongolia"]);
    mapaTerritorios["Siberia"].agregarVecino(&mapaTerritorios["Ural"]);

    mapaTerritorios["Ural"].agregarVecino(&mapaTerritorios["Afghanistán"]);
    mapaTerritorios["Ural"].agregarVecino(&mapaTerritorios["China"]);
    mapaTerritorios["Ural"].agregarVecino(&mapaTerritorios["Siberia"]);
    mapaTerritorios["Ural"].agregarVecino(&mapaTerritorios["Ucrania"]);

    mapaTerritorios["Yakutsk"].agregarVecino(&mapaTerritorios["Irkustsk"]);
    mapaTerritorios["Yakutsk"].agregarVecino(&mapaTerritorios["Kamchatka"]);
    mapaTerritorios["Yakutsk"].agregarVecino(&mapaTerritorios["Siberia"]);

    // Crear territorios de Australia
    mapaTerritorios["Australia Oriental"] = Territorio("Australia Oriental", "Morado");
    mapaTerritorios["Indonesia"] = Territorio("Indonesia", "Morado");
    mapaTerritorios["Nueva Guinea"] = Territorio("Nueva Guinea", "Morado");
    mapaTerritorios["Australia Occidental"] = Territorio("Australia Occidental", "Morado");

    // Conectar territorios con sus vecinos (Australia)
    mapaTerritorios["Australia Oriental"].agregarVecino(&mapaTerritorios["Nueva Guinea"]);
    mapaTerritorios["Australia Oriental"].agregarVecino(&mapaTerritorios["Australia Occidental"]);

    mapaTerritorios["Indonesia"].agregarVecino(&mapaTerritorios["Nueva Guinea"]);
    mapaTerritorios["Indonesia"].agregarVecino(&mapaTerritorios["Australia Occidental"]);
    mapaTerritorios["Indonesia"].agregarVecino(&mapaTerritorios["Siam"]);

    mapaTerritorios["Nueva Guinea"].agregarVecino(&mapaTerritorios["Australia Oriental"]);
    mapaTerritorios["Nueva Guinea"].agregarVecino(&mapaTerritorios["Indonesia"]);
    mapaTerritorios["Nueva Guinea"].agregarVecino(&mapaTerritorios["Australia Occidental"]);

    mapaTerritorios["Australia Occidental"].agregarVecino(&mapaTerritorios["Australia Oriental"]);
    mapaTerritorios["Australia Occidental"].agregarVecino(&mapaTerritorios["Indonesia"]);
    mapaTerritorios["Australia Occidental"].agregarVecino(&mapaTerritorios["Nueva Guinea"]);

}
*/

