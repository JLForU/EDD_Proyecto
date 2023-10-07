
// DIRECTIVAS DE PREPROCESAMIENTO.
#include "comandos.h"
#include <cstring>
#include <algorithm>


//Variable global
vector<Jugador> jugadores ;
int nJugadores ;
string id_jugador;
string turno;
int nturno;



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
		if(primerComando.find("turno ")==0)
		{
			size_t pos=primerComando.find("turno ");
			id_jugador=primerComando.substr(pos+strlen("turno "));
		}
		else
		{
			size_t pos=primerComando.find("TURNO ");
			id_jugador=primerComando.substr(pos+strlen("TURNO "));
		}
        if ( verificarJugador(id_jugador) ) {
            comandoTurno(id_jugador) ;
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

            if ( verificarJugador(id_jugador) ) {
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

    if ( partidaInicializada ) {
    
        cout << "El juego ya ha sido inicializado.\n\n" << flush ;
    
    } else {

        partidaInicializada = true ;	
		nturno=0;		
        cout << "El juego se ha inicializado correctamente.\n\n" << flush ;
		bool cant=false;
		while(!cant){
			cout<<"Cuantos jugadores van a jugar (3/4/5/6): "<<flush;
			cin>>nJugadores;
			if(nJugadores<3||nJugadores>6){
				cout<<"Cantidad de jugadores invalida.\n\n"<<flush;
			}
			else
			{
				cant=true;
				cout<<"Cantidad de jugadores valida.\n\n"<<flush;
			}
		}
		for(int i=0;i<nJugadores;i++)
		{	
			string nombreJugador;
			 cout<<"Digite el nombre o identificador del jugador "<<i+1<<": "<<flush;
			 cin>>nombreJugador;
			 Jugador nuevoJugador=Jugador(nombreJugador);
			 jugadores.push_back(nuevoJugador);		
			 
		}
		system("cls");
		string color[nJugadores];
		bool ci;
		int tropas;
		switch(nJugadores){
			case 3:
				cout << endl << "Se le han asignado 35 infanterias a cada jugador\n" << flush ;
				tropas=35;
				break;
			case 4:
				cout << endl << "Se le han asignado 30 infanterias a cada jugador\n" << flush ;
				tropas=30;
				break;
			case 5:
				cout << endl << "Se le han asignado 25 infanterias a cada jugador\n" << flush ;
				tropas=25;
				break;
			case 6:
				cout << endl << "Se le han asignado 20 infanterias a cada jugador\n" << flush ;
				tropas=20;
				break;
		}

		cout<<"\n\t1.Gris"<<"\t"<<"\t2.Amarillo"<<"\n"<<"\t3.Rojo"<<"\t"<<"\t4.Negro"<<"\n"<<"\t5.Verde"<<"\t"<<"\t6.Azul"<<"\n\n"<<flush;

		for(int i=0;i<nJugadores;i++){
			ci=true;
			while(ci){
				
				cout<<"Defina el color con el cual se quiere identificar el jugador "<<jugadores[i].getNombre()<<"\n"<<"$ "<<flush;
				cin>>color[i];
				
				bool colorRepetido=false;
				transform(color[i].begin(), color[i].end(), color[i].begin(), ::tolower);
				for(int j=0;j<i;j++)
				{
					if(color[j]==color[i])
					{
						cout<<"Este color ya se encuentra en uso.\n"<<flush;
						colorRepetido=true;
						break;
					}
				}
				if(!colorRepetido){
					if (color[i] != "Gris" && color[i] != "gris" && color[i] != "Amarillo" && color[i] != "amarillo"&& color[i] != "Rojo" && color[i] != "rojo" && color[i] != "Negro" && color[i] != "negro"&& color[i] != "Verde" && color[i] != "verde" && color[i] != "Azul" && color[i] != "azul") {
						cout << "Color incorrecto" << endl;
					}
					else
					{
						ci=false;
						cout<<"Color "<<color[i]<<" guardado con exito para el usuario "<<jugadores[i].getNombre()<<"\n\n"<<flush;
					}
				}
				
				
			}
			Ejercito anadirEjercito=Ejercito("Infanteria",color[i],tropas);
			jugadores[i].setColor(color[i]);
			jugadores[i].agregarTropa(anadirEjercito);
			
		}

		int turnoActual=0 ;

		

		for ( int j=0 ; j < territorios.size() ; j++ ) {
			cout << endl << "\t" << "A continuacion cada jugador deberá escoger un territorio (ingresar ID del territorio);" << endl ;
            for ( int i=0 ; i < territorios.size() ; i++ ) {
				
				bool ocupado=false;
				if(i==0){
					cout << endl << "\t" << territorios[i].getContinente() << endl ;
					
				}else if( territorios[i].getContinente() != territorios[i-1].getContinente()  ){
					cout << endl << "\t" << territorios[i].getContinente() << endl ;
				}
				for(int k=0;k<nJugadores;k++){
					if ( jugadores[k].verificarTerritorioExistente ( territorios[i].getID()) ) {
						ocupado=true;		
						break;
					}
				}
				if(!ocupado)
					cout << "\t" << territorios[i].getID() << "\t" << territorios[i].getNombre() << endl ;

			}

            cout << endl << endl ;

			Jugador& jugadorActual = jugadores[turnoActual] ;

            string territorioElegido ;
            string continente ;
            int id ;

			bool territorioValido = false ;

			while ( ! territorioValido ) {

				cout << "Turno de " << jugadorActual.getNombre() << ". Elija un territorio: "<<endl;
                cin >> id ;

                vector <Territorio>::iterator it ;
                for ( it = territorios.begin() ; it < territorios.end() ; ++it )
                    if ( id == it->getID() ) {
						territorioElegido = it->getNombre() ;
                        territorioValido = true ;
					}

                if ( territorioValido ) {

    				for ( int l=0 ; l < jugadores.size() ; l++ ) {

                        if ( jugadores[l].verificarTerritorioExistente ( id ) ) {
                            cout << "El territorio " << territorioElegido << " ya se encuentra ocupado por el jugador " << jugadores[l].getNombre() << endl ;
                            territorioValido = false ;
                            break ;
                        } else {
                            territorioValido = true ;
                        }

    				}


                } else {

					cout << "El territorio ingresado no es válido.\n\n" << flush ;

				}

                if ( territorioValido ) {

                    for ( int k=0 ; k < territorios.size() ; k++ ) {

                        if ( territorios[k].getID() == id ) {
                            continente = territorios[k].getContinente() ;
                            territorioElegido = territorios[k].getNombre() ;
                            break ;
                        }

                    }


					vector<Ejercito> cTropas;
					vector<Ejercito>::iterator ite;
					cTropas=jugadores[turnoActual].getTropas();

					int cart=0;
					int tcart=0;
					int infan=35;
					
					cout<<"Cuenta con las siguientes tropas:"<<"  "<<endl;
					
					for(ite=cTropas.begin();ite!=cTropas.end();ite++){
						infan=infan-1;
						cout<<"\t"<<ite->getGrupo()<<": "<<infan<<endl;
					}
					
					
					string color;
					color=jugadores[turnoActual].getColor();
					Ejercito anadirEjercito=Ejercito("Infanteria",color,1);
					Territorio elegirTerritorio = Territorio ( territorioElegido , continente , id ) ;
					
					Carta nuevaCarta=Carta(elegirTerritorio,anadirEjercito);
					jugadores[turnoActual].asignarTerritorio(elegirTerritorio) ;
					jugadores[turnoActual].agregarCarta(nuevaCarta) ;
					

				}
			}
			

			turnoActual = (turnoActual+1) % jugadores.size() ;

		}
		
    }

}


bool verificarJugador (string id_jugador ) {
	for(int i=0;i<jugadores.size();i++)
	{
		if(id_jugador==jugadores[i].getNombre())
		{
			return true;
		}
	}
    return false ;

}

bool verificarTurno ( string id_jugador ) {
	Jugador& jugadorActual=jugadores[nturno];
	if(id_jugador==jugadorActual.getNombre())
	{
		return true ;
	}
	else
	{
		return false;
	}

}


void comandoTurno ( string id_jugador  ) {
	int cantTerritorios;
	int cantContinentes;
	int cantUnidades;
	string color;
    if (partidaInicializada) {
		
        if (!juegoFinalizado) {
        
            if (verificarJugador(id_jugador)) {
                if (verificarTurno(id_jugador)) {

					cantTerritorios=jugadores[nturno].territoriosXJugador(id_jugador);
					
					cantContinentes=jugadores[nturno].verificarContinente(id_jugador);
					
					cantUnidades=(cantTerritorios/3)+cantContinentes;
					
					color=jugadores[nturno].getColor();
					
					Ejercito anadirEjercito=Ejercito("Ejercito","",cantUnidades);
					
					jugadores[nturno].agregarTropa(anadirEjercito);

                    cout << "El turno del jugador " << id_jugador << " ha terminado.\n" << flush;
					nturno = (nturno+1) % jugadores.size() ;
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

