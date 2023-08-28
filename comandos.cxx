
// DIRECTIVAS DE PREPROCESAMIENTO.
#include "comandos.hxx"



/* IMPLEMENTACIÓN DE FUNCIONES PARA EL MANEJO DE COMANDOS. */

string verificarComandoExistente ( string comandoEntrada ) {

    string comando = "" ;
    string vector_comandos[16] = {
        "inicializar", "INICIALIZAR", "turno", "TURNO", "salir", "SALIR", "guardar", "GUARDAR", "guardar_comprimido", "GUARDAR_COMPRIMIDO", "costo_conquista", "COSTO_CONQUISTA", "conquista_mas_barata", "CONQUISTA_MAS_BARATA", "ayuda", "AYUDA"
    } ;

    char simboloBuscado = '<' ;
    size_t posicion = comandoEntrada.find(simboloBuscado) ;

    if ( posicion != string::npos ) {

        size_t posicionMenor = comandoEntrada.find('<') ;
        size_t posicionMayor = comandoEntrada.find('>') ;
    
        // Extraer la primera parte (antes del símbolo '<')
        string primeraParte = comandoEntrada.substr(0, posicionMenor) ;
    
        // Extraer la segunda parte (territorio sin los caracteres < y >)
        string segundaParte = comandoEntrada.substr(posicionMenor + 1, posicionMayor - posicionMenor - 1) ;
    
        comando = primeraParte ;

    } else {

        comando = comandoEntrada ;

    }

    for ( int i = 0 ; i < 16 ; i++ ) {

        if (vector_comandos[i] == comando) {

            if ( i % 2 == 1 ) {
                comando = vector_comandos[i - 1] ;
            }

            return comando ;

        }
        
    }

    return comandoEntrada;

    /*
    Si el primer comando est? bien, pasa a la funci?n ?accionarComandoCorrecto un string para su ejecución.
    Esa "cadena de texto" pasada por par?metro es ?nicamente el primer comando o palabra.
    */

}


void accionarComandoCorrecto ( string primerComando ) {

    if ( primerComando == "inicializar" ) {

        comandoInicializar() ;

    } else if ( primerComando.find("turno ") == 0 || primerComando.find("TURNO ") == 0 ) {

        if ( verificarJugador(1) ) {
            comandoTurno(1) ;
        } else {
            cout << "\nArgumentos incorrectos.\n" << flush ;            
        }

    } else if ( primerComando == "salir" ) {

        comandoSalir() ;

    } else if ( primerComando == "guardar" ) {

        if ( partidaInicializada ) {

            if ( verificarArchivoComoArgumento() ) {
                comandoGuardar() ;
            } else { 
                cout << "La partida no ha sido guardada correctamente.\n" << flush ;
            }

        } else {

            cout << "Esta partida no ha sido inicializada correctamente.\n" << flush ;

        }

    } else if ( primerComando == "guardar_comprimido" ) {

        if ( partidaInicializada ) {

            if ( verificarArchivoComoArgumento() ) {
                comandoGuardarComprimido() ;
            } else {
                cout << "La partida no ha sido codificada ni guardada correctamente.\n" << flush ;
            }
            
        } else {
        
            cout << "Esta partida no ha sido inicializada correctamente.\n" << flush ;

        }

    } else if ( primerComando.find("inicializar ") == 0 || primerComando.find("INICIALIZAR ") == 0 ) {

        if ( !partidaInicializada ) {

            if ( verificarArchivoComoArgumento() ) {
                comandoInicializarArchivo() ;
            } else {
                cout << "\nEl ?nombre_archivo? no contiene informaci?n v?lida para inicializar el juego.\n" << flush ;
            }

        } else {

            cout << "El juego ya ha sido inicializado.\n" << flush ;

        }

    } else if ( primerComando == "costo_conquista" ) {

        if ( !partidaInicializada ) {

            if ( verificarTerritorio() ) {
				comandoCostoConquista() ;
            } else {
                cout << "\nArgumentos incorrectos.\n" << flush ;            
            }

        } else if ( partidaInicializada ) {

            cout << "\nEl juego ya ha sido inicializado.\n" << flush ;

        } else {

            cout << "\nEsta partida ya tuvo un ganador.\n" << flush ;

        }

    } else if ( primerComando == "conquista_mas_barata" ) {

        if ( !partidaInicializada ) {

            if ( verificarJugador(1) ) {
	           comandoConquista() ;
            } else {
                cout << "\nArgumentos incorrectos.\n" << flush ;            
            }

        } else if ( partidaInicializada ) {

            cout << "\nEl juego ya ha sido inicializado.\n" << flush ;

        } else {

            cout << "\nEsta partida ya tuvo un ganador.\n" << flush ;

        }

    } else if ( primerComando == "ayuda" ) {

        comandoAyuda() ;

    } else if ( primerComando.find("ayuda ") == 0 ) {

        comandoAyudaComando(primerComando) ;

    } else {

        cout << "Comando no identificado.\n" << flush ;

    }
    
}


void comandoInicializar ( void ) {
int nJugadores;

    if ( partidaInicializada ) {
    
        cout << "El juego ya ha sido inicializado." << endl ;
    
    } else {

        partidaInicializada = true ;
		Territorio t;
        for(int i =0;i<5;i++)
		{
			cout<< Territorio(i);
		}
		
        cout << "El juego se ha inicializado correctamente." << endl ;
		cout<<"Cuantos jugadores van a jugar (3/4/5/6):";
		cin>>nJugadores;
		switch(nJugadores){
			case 3:
			cout<<"Cantidad de jugadores invalida.";
			
		}
		
    }

}


bool verificarJugador ( int id_jugador ) {

    return true ;

}

bool verificarTurno ( int id_jugador ) {

    return true ;

}


void comandoTurno ( int id_jugador ) {

    if (partidaInicializada) {
    
        if (!juegoFinalizado) {
        
            if (verificarJugador(id_jugador)) {
            
                if (verificarTurno(id_jugador)) {
                    cout << "El turno del jugador " << id_jugador << " ha terminado.\n" << flush;
                } else {
                    cout << "No es el turno del jugador " << id_jugador << ".\n" << flush;
                }
            
            } else {
                cout << "\nEl jugador " << id_jugador << " no forma parte de esta partida.\n" << flush;
            }
        
        } else {
        
            cout << "\nEsta partida ya tuvo un ganador.\n" << flush;
        
        }
    
    } else {
    
        cout << "Esta partida no ha sido inicializada correctamente.\n" << flush;
    
    }

}


void comandoSalir ( void ) {

    cout << "Saliendo..." << endl ;
    
    // exit(0) ;

}


bool verificarArchivoComoArgumento ( void ) {

    int contadorDeEspacios = 0 ;
    for ( char iterator_i : comandoEntrada ) {
        if ( iterator_i == ' ' ) {
            ++contadorDeEspacios ;
        }
    }
    
    if ( contadorDeEspacios == 1 ) {
    
        bool bandera = false ;
        int contador_i = 0 ;
        
        for ( char iterator_i : comandoEntrada ) {
        
            if ( bandera ) {
                ++contador_i ;
            }
            
            if ( iterator_i == ' ' ) {
                bandera = true ;
            }
        
        }
        
        char nombreDeArchivo[contador_i] ;
        bandera = false ;
        contador_i = 0 ;
        
        for ( char iterator_i : comandoEntrada ) {
        
            if ( bandera ) {
                nombreDeArchivo[contador_i] = iterator_i ;
                ++contador_i ;
            }
            
            if ( iterator_i == ' ' ) {
                bandera = true ;
            }
        
        }
        
        cout << "Nombre de archivo: " << nombreDeArchivo << endl ;
        
        ifstream file(nombreDeArchivo) ;
        bool archivoExiste = file.good() ;
        
        if ( archivoExiste ) {
            cout << "El archivo existe." << endl ;
            return true ;
        } else {
            cout << "El archivo no existe." << endl ;
            return false ;
        }
    
    } else {
    
        cout << "El número de parámetros es incorrecto.\n" << flush ;
        
        return false ;
    
    }


}


void comandoGuardar ( void ) {

    cout << "\nLa partida ha sido guardada correctamente.\n\n" << flush ;

}


void comandoGuardarComprimido ( void ) {

    cout << "\nLa partida ha sido codificada y guardada correctamente.\n" << flush ;

}


void comandoInicializarArchivo ( void ) {

    cout << "\nLa partida ha sido inicializada correctamente.\n" << flush ;

}


bool verificarTerritorio ( void ) {

    return true ;

}


void comandoCostoConquista ( void ) {

    cout << "\nPara conquistarel territorio <territorio>, debe atacar desde <territorio_1>, pasando por los territorios <territorio_2>, <territorio_3>, ..., <territorio_m>. Debe conquistar <n> unidades de ejército. \n" << flush ;

}


void comandoConquista ( void ) {

    cout << "\nLa conquista más barata es avanzar sobre el territorio <territorio_1> desde el territorio <territorio_2>. Para conquistar el territorio <territorio_1>, debe atacar desde <territorio_2>, pasando por los territorios <territorio_2>, <territorio_3>, ..., <territorio_m>. Debe conquistar <n> unidades de ejército. \n" << flush ;

}


void comandoAyuda ( void ) {

    cout<<"INICIALIZAR\t\t\t\t"<<"Realiza las operaciones necesarias para inicializar el juego, de acuerdo a las instrucciones entregadas."<<endl;
    cout<<"TURNO <id_jugador>\t\t\t"<<"Realiza las operaciones descritas dentro del turno de un jugador (obtener nuevas unidades, atacar y fortificar)."<<endl;
    cout<<"SALIR\t\t\t\t\t"<<"Finaliza el programa."<<endl;
    cout<<"GUARDAR <nombre_archivo>\t\t"<<"El estado actual del juego es guardado en un archivo de texto."<<endl;
    cout<<"GUARDAR_COMPRIMIDO <nombre_archivo>\t"<<"El estado actual del juego es guardado en un archivo binario con la informacion comprimida."<<endl;
    cout<<"INICIALIZAR <nombre_archivo>\t\t"<<"Inicializa el juego con los datos contenidos en el archivo identificado por <nombre_archivo>."<<endl;
    cout<<"COSTO_CONQUISTA <territorio>\t\t"<<"El programa debe calcular el costo y la secuencia de territorios a ser conquistados para lograr controlar el territorio dado por el usuario."<<endl;
    cout<<"CONQUISTA_MASBARATA\t\t\t"<<"De todos los territorios posibles, calcular aquel que pueda implicar un menor número de unidades de ejercito perdidas."<<endl;
    cout<<"AYUDA\t\t\t\t\t"<<"Proporciona información de Ayuda para los comandos del programa."<<endl;
    cout<<"AYUDA <comando>\t\t\t\t"<<"Muestra información de ayuda del comando especificado."<<endl;

}


void comandoAyudaComando ( string comandoAC ) {

    if(comandoAC=="ayuda inicializar" || comandoAC=="AYUDA INICIALIZAR" || comandoAC=="ayuda INICIALIZAR"){
        cout<<"--INICIALIZAR"<<endl<<"\t"<<"Realiza las operaciones necesarias para inicializar el juego, de acuerdo a las instrucciones entregadas."<<endl;
        cout << "--INICIALIZAR <nombre_archivo>" <<endl<<"\t"<< "Inicializa el juego con los datos contenidos en el archivo identificado por <nombre_archivo>." << endl;
    } else if (comandoAC == "ayuda turno" || comandoAC == "AYUDA TURNO" || comandoAC == "ayuda TURNO") {
        cout << "--TURNO <id_jugador>"<<endl<<"\t"<<"Realiza las operaciones descritas dentro del turno de un jugador (obtener nuevas unidades, atacar y fortificar." << endl;
    } else if (comandoAC == "ayuda salir" || comandoAC == "AYUDA SALIR" || comandoAC == "ayuda SALIR") {
        cout << "--SALIR" <<endl<<"\t"<< "Finaliza el programa." << endl;
    } else if (comandoAC == "ayuda guardar" || comandoAC == "AYUDA GUARDAR" || comandoAC == "ayuda GUARDAR") {
        cout << "--GUARDAR <nombre_archivo>" <<endl<<"\t"<< "El estado actual del juego es guardado en un archivo de texto." << endl;
    } else if (comandoAC == "ayuda guardar_comprimido" || comandoAC == "AYUDA GUARDAR_COMPRIMIDO" || comandoAC == "ayuda GUARDAR_COMPRIMIDO") {
        cout << "--GUARDAR_COOMPRIMIDO <nombre_archivo>" <<endl<<"\t"<< "El estado actual del juego es guardado en un archivo binario con la informacion comprimida." << endl;
    } else if (comandoAC == "ayuda costo_conquista" || comandoAC == "AYUDA COSTO_CONQUISTA" || comandoAC == "ayuda COSTO_CONQUISTA") {
        cout << "--COSTO_CONQUISTA <territorio>" <<endl<<"\t"<< "El programa debe calcular el costo y la secuencia de territorios a ser conquistados para lograr controlar el territorio dado por el usuario." << endl;
    } else if (comandoAC == "ayuda conquista_mas_barata" || comandoAC == "AYUDA CONQUISTA_MASBARATA" || comandoAC == "ayuda CONQUISTA_MASBARATA") {
        cout << "--CONQUISTA_MASBARATA" <<endl<<"\t"<< "De todos los territorios posibles, calcular aquel que pueda implicar un menor número de unidades de ejercito perdidas." << endl;
    } else if (comandoAC == "ayuda ayuda" || comandoAC == "AYUDA AYUDA" || comandoAC == "ayuda AYUDA") {
        cout << "--AYUDA" <<endl<<"\t"<< "Proporciona información de Ayuda para los comandos del programa." << endl;
        cout << "--AYUDA <comando>" <<endl<<"\t"<< "Muestra información de ayuda del comando especificado." << endl;
    } else {
        cout << "\nComando no identificado.\n" << flush ;
    }

}

