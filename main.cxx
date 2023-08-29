
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
void crear mapa(){ 
std::map<std::string, Territorio> territorios;

// Crear territorios de América del Norte
    territorios["Alaska"] = Territorio("Alaska", "Amarillo");
    territorios["Alberta"] = Territorio("Alberta", "Amarillo");
    territorios["Territorio Noroccidental"] = Territorio("Territorio Noroccidental", "Amarillo");
    territorios["America Central"] = Territorio("America Central", "Amarillo");
    territorios["Estados Unidos Orientales"] = Territorio("Estados Unidos Orientales", "Amarillo");
    territorios["Groenlandia"] = Territorio("Groenlandia", "Amarillo");
    territorios["Territorio Noroccidental"] = Territorio("Territorio Noroccidental", "Amarillo");
    territorios["Ontario"] = Territorio("Ontario", "Amarillo");
    territorios["Quebec"] = Territorio("Quebec", "Amarillo");
    territorios["Estados Unidos Occidentales"] = Territorio("Estados Unidos Occidentales", "Amarillo");

    // Conectar territorios con sus vecinos (América del Norte)
    territorios["Alaska"].agregarVecino(&territorios["Alberta"]);
    territorios["Alaska"].agregarVecino(&territorios["Territorio Noroccidental"]);

    territorios["Alberta"].agregarVecino(&territorios["Alaska"]);
    territorios["Alberta"].agregarVecino(&territorios["Territorio Noroccidental"]);
    territorios["Alberta"].agregarVecino(&territorios["Ontario"]);

    territorios["Territorio Noroccidental"].agregarVecino(&territorios["Alaska"]);
    territorios["Territorio Noroccidental"].agregarVecino(&territorios["Alberta"]);
    territorios["Territorio Noroccidental"].agregarVecino(&territorios["Ontario"]);
    territorios["Territorio Noroccidental"].agregarVecino(&territorios["Groenlandia"]);

    territorios["America Central"].agregarVecino(&territorios["Estados Unidos Orientales"]);
    territorios["America Central"].agregarVecino(&territorios["Quebec"]);
    territorios["America Central"].agregarVecino(&territorios["Venezuela"]);

    territorios["Estados Unidos Orientales"].agregarVecino(&territorios["America Central"]);
    territorios["Estados Unidos Orientales"].agregarVecino(&territorios["Estados Unidos Occidentales"]);
    territorios["Estados Unidos Orientales"].agregarVecino(&territorios["Ontario"]);
    territorios["Estados Unidos Orientales"].agregarVecino(&territorios["Quebec"]);

    territorios["Groenlandia"].agregarVecino(&territorios["Territorio Noroccidental"]);
    territorios["Groenlandia"].agregarVecino(&territorios["Ontario"]);
    territorios["Groenlandia"].agregarVecino(&territorios["Quebec"]);
    territorios["Groenlandia"].agregarVecino(&territorios["Islandia"]);

    territorios["Territorio Noroccidental"].agregarVecino(&territorios["Alaska"]);
    territorios["Territorio Noroccidental"].agregarVecino(&territorios["Alberta"]);
    territorios["Territorio Noroccidental"].agregarVecino(&territorios["Ontario"]);
    territorios["Territorio Noroccidental"].agregarVecino(&territorios["Groenlandia"]);

    territorios["Ontario"].agregarVecino(&territorios["Alberta"]);
    territorios["Ontario"].agregarVecino(&territorios["Territorio Noroccidental"]);
    territorios["Ontario"].agregarVecino(&territorios["Estados Unidos Orientales"]);
    territorios["Ontario"].agregarVecino(&territorios["Quebec"]);
    territorios["Ontario"].agregarVecino(&territorios["Groenlandia"]);

    territorios["Quebec"].agregarVecino(&territorios["Estados Unidos Orientales"]);
    territorios["Quebec"].agregarVecino(&territorios["Ontario"]);
    territorios["Quebec"].agregarVecino(&territorios["Groenlandia"]);

    territorios["Estados Unidos Occidentales"].agregarVecino(&territorios["Estados Unidos Orientales"]);
    territorios["Estados Unidos Occidentales"].agregarVecino(&territorios["America Central"]);
    territorios["Estados Unidos Occidentales"].agregarVecino(&territorios["Ontario"]);

    // Crear territorios de América del Sur
territorios["Argentina"] = Territorio("Argentina", "Purpura");
territorios["Brasil"] = Territorio("Brasil", "Purpura");
territorios["Peru"] = Territorio("Peru", "Purpura");
territorios["Venezuela"] = Territorio("Venezuela", "Purpura");

// Conectar territorios con sus vecinos (América del Sur)
territorios["Argentina"].agregarVecino(&territorios["Peru"]);
territorios["Argentina"].agregarVecino(&territorios["Brasil"]);

territorios["Brasil"].agregarVecino(&territorios["Argentina"]);
territorios["Brasil"].agregarVecino(&territorios["Peru"]);
territorios["Brasil"].agregarVecino(&territorios["Venezuela"]);
territorios["Brasil"].agregarVecino(&territorios["Africa del Norte"]);

territorios["Peru"].agregarVecino(&territorios["Argentina"]);
territorios["Peru"].agregarVecino(&territorios["Brasil"]);
territorios["Peru"].agregarVecino(&territorios["Venezuela"]);

territorios["Venezuela"].agregarVecino(&territorios["Brasil"]);
territorios["Venezuela"].agregarVecino(&territorios["Peru"]);
territorios["Venezuela"].agregarVecino(&territorios["America Central"]);

// Crear territorios de Europa
territorios["Gran Bretaña"] = Territorio("Gran Bretaña", "Azul");
territorios["Islandia"] = Territorio("Islandia", "Azul");
territorios["Europa del Norte"] = Territorio("Europa del Norte", "Azul");
territorios["Escandinavia"] = Territorio("Escandinavia", "Azul");
territorios["Europa del Sur"] = Territorio("Europa del Sur", "Azul");
territorios["Ucrania"] = Territorio("Ucrania", "Azul");
territorios["Europa Occidental"] = Territorio("Europa Occidental", "Azul");

// Conectar territorios con sus vecinos (Europa)
territorios["Gran Bretaña"].agregarVecino(&territorios["Islandia"]);
territorios["Gran Bretaña"].agregarVecino(&territorios["Europa del Norte"]);
territorios["Gran Bretaña"].agregarVecino(&territorios["Escandinavia"]);
territorios["Gran Bretaña"].agregarVecino(&territorios["Europa Occidental"]);

territorios["Islandia"].agregarVecino(&territorios["Gran Bretaña"]);
territorios["Islandia"].agregarVecino(&territorios["Europa del Norte"]);
territorios["Islandia"].agregarVecino(&territorios["Escandinavia"]);
territorios["Islandia"].agregarVecino(&territorios["Groenlandia"]);

territorios["Europa del Norte"].agregarVecino(&territorios["Gran Bretaña"]);
territorios["Europa del Norte"].agregarVecino(&territorios["Escandinavia"]);
territorios["Europa del Norte"].agregarVecino(&territorios["Europa del Sur"]);
territorios["Europa del Norte"].agregarVecino(&territorios["Ucrania"]);
territorios["Europa del Norte"].agregarVecino(&territorios["Europa Occidental"]);

territorios["Escandinavia"].agregarVecino(&territorios["Gran Bretaña"]);
territorios["Escandinavia"].agregarVecino(&territorios["Islandia"]);
territorios["Escandinavia"].agregarVecino(&territorios["Europa del Norte"]);
territorios["Escandinavia"].agregarVecino(&territorios["Ucrania"]);

territorios["Europa del Sur"].agregarVecino(&territorios["Europa del Norte"]);
territorios["Europa del Sur"].agregarVecino(&territorios["Europa Occidental"]);
territorios["Europa del Sur"].agregarVecino(&territorios["Ucrania"]);
territorios["Europa del Sur"].agregarVecino(&territorios["Egipto"]);

territorios["Ucrania"].agregarVecino(&territorios["Europa del Norte"]);
territorios["Ucrania"].agregarVecino(&territorios["Escandinavia"]);
territorios["Ucrania"].agregarVecino(&territorios["Europa del Sur"]);
territorios["Ucrania"].agregarVecino(&territorios["Afghanistán"]);
territorios["Ucrania"].agregarVecino(&territorios["Medio Oriente"]);
territorios["Ucrania"].agregarVecino(&territorios["Ural"]);

territorios["Europa Occidental"].agregarVecino(&territorios["Gran Bretaña"]);
territorios["Europa Occidental"].agregarVecino(&territorios["Europa del Norte"]);
territorios["Europa Occidental"].agregarVecino(&territorios["Europa del Sur"]);
territorios["Europa Occidental"].agregarVecino(&territorios["Africa del Norte"]);

// Crear territorios de África
territorios["Congo"] = Territorio("Congo", "Naranja");
territorios["Africa Oriental"] = Territorio("Africa Oriental", "Naranja");
territorios["Egipto"] = Territorio("Egipto", "Naranja");
territorios["Madagascar"] = Territorio("Madagascar", "Naranja");
territorios["Africa del Norte"] = Territorio("Africa del Norte", "Naranja");
territorios["Africa del Sur"] = Territorio("Africa del Sur", "Naranja");

// Conectar territorios con sus vecinos (África)
territorios["Congo"].agregarVecino(&territorios["Africa Oriental"]);
territorios["Congo"].agregarVecino(&territorios["Africa del Norte"]);
territorios["Congo"].agregarVecino(&territorios["Africa del Sur"]);

territorios["Africa Oriental"].agregarVecino(&territorios["Congo"]);
territorios["Africa Oriental"].agregarVecino(&territorios["Egipto"]);
territorios["Africa Oriental"].agregarVecino(&territorios["Madagascar"]);
territorios["Africa Oriental"].agregarVecino(&territorios["Africa del Sur"]);

territorios["Egipto"].agregarVecino(&territorios["Europa del Sur"]);
territorios["Egipto"].agregarVecino(&territorios["Medio Oriente"]);
territorios["Egipto"].agregarVecino(&territorios["Africa Oriental"]);
territorios["Egipto"].agregarVecino(&territorios["Africa del Norte"]);

territorios["Madagascar"].agregarVecino(&territorios["Africa Oriental"]);
territorios["Madagascar"].agregarVecino(&territorios["Africa del Sur"]);

territorios["Africa del Norte"].agregarVecino(&territorios["Congo"]);
territorios["Africa del Norte"].agregarVecino(&territorios["Africa Oriental"]);
territorios["Africa del Norte"].agregarVecino(&territorios["Egipto"]);
territorios["Africa del Norte"].agregarVecino(&territorios["Brasil"]);

territorios["Africa del Sur"].agregarVecino(&territorios["Congo"]);
territorios["Africa del Sur"].agregarVecino(&territorios["Africa Oriental"]);
territorios["Africa del Sur"].agregarVecino(&territorios["Madagascar"]);

// Crear territorios de Asia
territorios["Afghanistán"] = Territorio("Afghanistán", "Verde");
territorios["China"] = Territorio("China", "Verde");
territorios["India"] = Territorio("India", "Verde");
territorios["Irkustsk"] = Territorio("Irkustsk", "Verde");
territorios["Japon"] = Territorio("Japon", "Verde");
territorios["Kamchatka"] = Territorio("Kamchatka", "Verde");
territorios["Medio Oriente"] = Territorio("Medio Oriente", "Verde");
territorios["Mongolia"] = Territorio("Mongolia", "Verde");
territorios["Siam"] = Territorio("Siam", "Verde");
territorios["Siberia"] = Territorio("Siberia", "Verde");
territorios["Ural"] = Territorio("Ural", "Verde");
territorios["Yakutsk"] = Territorio("Yakutsk", "Verde");

// Conectar territorios con sus vecinos (Asia)
territorios["Afghanistán"].agregarVecino(&territorios["China"]);
territorios["Afghanistán"].agregarVecino(&territorios["India"]);
territorios["Afghanistán"].agregarVecino(&territorios["Medio Oriente"]);
territorios["Afghanistán"].agregarVecino(&territorios["Ural"]);
territorios["Afghanistán"].agregarVecino(&territorios["Ucrania"]);

territorios["China"].agregarVecino(&territorios["Afghanistán"]);
territorios["China"].agregarVecino(&territorios["India"]);
territorios["China"].agregarVecino(&territorios["Mongolia"]);
territorios["China"].agregarVecino(&territorios["Siam"]);
territorios["China"].agregarVecino(&territorios["Siberia"]);
territorios["China"].agregarVecino(&territorios["Ural"]);

territorios["India"].agregarVecino(&territorios["Afghanistán"]);
territorios["India"].agregarVecino(&territorios["China"]);
territorios["India"].agregarVecino(&territorios["Medio Oriente"]);
territorios["India"].agregarVecino(&territorios["Siam"]);

territorios["Irkustsk"].agregarVecino(&territorios["Kamchatka"]);
territorios["Irkustsk"].agregarVecino(&territorios["Mongolia"]);
territorios["Irkustsk"].agregarVecino(&territorios["Siberia"]);
territorios["Irkustsk"].agregarVecino(&territorios["Yakutsk"]);

territorios["Japon"].agregarVecino(&territorios["Kamchatka"]);
territorios["Japon"].agregarVecino(&territorios["Mongolia"]);

territorios["Kamchatka"].agregarVecino(&territorios["Japon"]);
territorios["Kamchatka"].agregarVecino(&territorios["Irkustsk"]);
territorios["Kamchatka"].agregarVecino(&territorios["Mongolia"]);
territorios["Kamchatka"].agregarVecino(&territorios["Yakutsk"]);

territorios["Medio Oriente"].agregarVecino(&territorios["Afghanistán"]);
territorios["Medio Oriente"].agregarVecino(&territorios["India"]);
territorios["Medio Oriente"].agregarVecino(&territorios["Ucrania"]);
territorios["Medio Oriente"].agregarVecino(&territorios["Egipto"]);

territorios["Mongolia"].agregarVecino(&territorios["China"]);
territorios["Mongolia"].agregarVecino(&territorios["Irkustsk"]);
territorios["Mongolia"].agregarVecino(&territorios["Japon"]);
territorios["Mongolia"].agregarVecino(&territorios["Kamchatka"]);
territorios["Mongolia"].agregarVecino(&territorios["Siberia"]);

territorios["Siam"].agregarVecino(&territorios["China"]);
territorios["Siam"].agregarVecino(&territorios["India"]);
territorios["Siam"].agregarVecino(&territorios["Indonesia"]);

territorios["Siberia"].agregarVecino(&territorios["China"]);
territorios["Siberia"].agregarVecino(&territorios["Irkustsk"]);
territorios["Siberia"].agregarVecino(&territorios["Mongolia"]);
territorios["Siberia"].agregarVecino(&territorios["Ural"]);

territorios["Ural"].agregarVecino(&territorios["Afghanistán"]);
territorios["Ural"].agregarVecino(&territorios["China"]);
territorios["Ural"].agregarVecino(&territorios["Siberia"]);
territorios["Ural"].agregarVecino(&territorios["Ucrania"]);

territorios["Yakutsk"].agregarVecino(&territorios["Irkustsk"]);
territorios["Yakutsk"].agregarVecino(&territorios["Kamchatka"]);
territorios["Yakutsk"].agregarVecino(&territorios["Siberia"]);

// Crear territorios de Australia
territorios["Australia Oriental"] = Territorio("Australia Oriental", "Morado");
territorios["Indonesia"] = Territorio("Indonesia", "Morado");
territorios["Nueva Guinea"] = Territorio("Nueva Guinea", "Morado");
territorios["Australia Occidental"] = Territorio("Australia Occidental", "Morado");

// Conectar territorios con sus vecinos (Australia)
territorios["Australia Oriental"].agregarVecino(&territorios["Nueva Guinea"]);
territorios["Australia Oriental"].agregarVecino(&territorios["Australia Occidental"]);

territorios["Indonesia"].agregarVecino(&territorios["Nueva Guinea"]);
territorios["Indonesia"].agregarVecino(&territorios["Australia Occidental"]);
territorios["Indonesia"].agregarVecino(&territorios["Siam"]);

territorios["Nueva Guinea"].agregarVecino(&territorios["Australia Oriental"]);
territorios["Nueva Guinea"].agregarVecino(&territorios["Indonesia"]);
territorios["Nueva Guinea"].agregarVecino(&territorios["Australia Occidental"]);

territorios["Australia Occidental"].agregarVecino(&territorios["Australia Oriental"]);
territorios["Australia Occidental"].agregarVecino(&territorios["Indonesia"]);
territorios["Australia Occidental"].agregarVecino(&territorios["Nueva Guinea"]);

}
