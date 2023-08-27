
// DIRECTIVAS DE PREPROCESAMIENTO.
#include "main.hxx"



/* IMPLEMENTACIÓN DE FUNCIONES PARA EL MANEJO DEL JUEGO. */

void llenarMazo ( void ) {

    // Primer continente.
    mazo.push_back  (  Carta  (  Territorio("Alaska","América del Norte",1)                         ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Alberta","América del Norte",2)                        ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("América Central","América del Norte",3)                ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Estados Unidos Orientales","América del Norte",4)      ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Groenlandia","América del Norte",5)                    ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Territorio Noroccidental","América del Norte",6)       ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Ontario","América del Norte",7)                        ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Quebec","América del Norte",8)                         ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Estados Unidos Occidentales","América del Norte",9)    ,   Ejercito("Artillería",10)   )  ) ;
    // Segundo continente.
    mazo.push_back  (  Carta  (  Territorio("Argentina","América del Sur",1)                        ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Brasil","América del Sur",2)                           ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Perú","América del Sur",3)                             ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Venezuela","América del Sur",4)                        ,   Ejercito("Infantería",1)    )  ) ;
    // Tercer continente.
    mazo.push_back  (  Carta  (  Territorio("Gran Bretaña","Europa",1)                              ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Islandia","Europa",2)                                  ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Europa del Norte","Europa",3)                          ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Escandinavia","Europa",4)                              ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Europa del Sur","Europa",5)                            ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Ucrania","Europa",6)                                   ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Europa Occidental","Europa",7)                         ,   Ejercito("Caballería",5)    )  ) ;
    // Cuarto continente.
    mazo.push_back  (  Carta  (  Territorio("Congo","África",1)                                     ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("África Oriental","África",2)                           ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Egipto","África",3)                                    ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Madagascar","África",4)                                ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("África del Norte","África",5)                          ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("África del Sur","África",6)                            ,   Ejercito("Caballería",5)    )  ) ;
    // Quinto continente.
    mazo.push_back  (  Carta  (  Territorio("Afghanistán","Asia",1)                                 ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("China","Asia",2)                                       ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("India","Asia",3)                                       ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Irkutsk","Asia",4)                                     ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Japón","Asia",5)                                       ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Kamchatka","Asia",6)                                   ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Medio Oriente","Asia",7)                               ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Mongolia","Asia",8)                                    ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Siam","Asia",9)                                        ,   Ejercito("Caballería",5)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Siberia","Asia",10)                                    ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Ural","Asia",11)                                       ,   Ejercito("Infantería",1)    )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Yakutsk","Asia",12)                                    ,   Ejercito("Caballería",5)    )  ) ;
    // Sexto continente.
    mazo.push_back  (  Carta  (  Territorio("Australia Oriental","Oceanía",1)                       ,   Ejercito("Artillería",10)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Indonesia","Oceanía",2)                                ,   Ejercito("Infantería",1)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Nueva Guinea","Oceanía",3)                             ,   Ejercito("Caballería",5)   )  ) ;
    mazo.push_back  (  Carta  (  Territorio("Australia Occidental","Oceanía",4)                     ,   Ejercito("Artillería",10)   )  ) ;

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

