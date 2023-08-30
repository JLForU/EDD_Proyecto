
// DIRECTIVAS DE PREPROCESAMIENTO.
#include "comandos.hxx"
#include <cstring>


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
    
        cout << "El juego ya ha sido inicializado." << endl ;
    
    } else {

        partidaInicializada = true ;	
		nturno=0;		
        cout << "El juego se ha inicializado correctamente.\n" << flush ;
		while(nJugadores<3||nJugadores>6){
			cout<<"Cuantos jugadores van a jugar (3/4/5/6): "<<flush;
			cin>>nJugadores;
			if(nJugadores<3||nJugadores>6){
				cout<<"Cantidad de jugadores invalida.\n"<<flush;
			}
			else
			{
				cout<<"Cantidad de jugadores valida.\n"<<flush;
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
		string color[nJugadores];
		bool ci;
		int tropas;
		switch(nJugadores){
			case 3:
				cout<<"Se le han asignado 35 infanterias a cada jugador\n"<<flush;
				tropas=35;
				break;
			case 4:
				cout<<"Se le han asignado 30 infanterias a cada jugador";
				tropas=30;
				break;
			case 5:
				cout<<"Se le han asignado 25 infanterias a cada jugador";
				tropas=25;
				break;
			case 6:
				cout<<"Se le han asignado 20 infanterias a cada jugador";
				tropas=20;
				break;
		}
		cout<<"\n\t1.Gris"<<"\t"<<"\t2.Amarillo"<<"\n"<<"\t3.Rojo"<<"\t"<<"\t4.Negro"<<"\n"<<"\t5.Verde"<<"\t"<<"\t6.Azul"<<"\n"<<flush;
				for(int i=0;i<nJugadores;i++){
					ci=true;
					while(ci){
						
						cout<<"Defina el color con el cual se quiere identificar el jugador "<<i+1<<"\n"<<"$ "<<flush;
						cin>>color[i];
						bool colorRepetido=false;
						// transform(color[i].begin(), color[i].end(), color[i].begin(), ::tolower);
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
								cout<<"Color "<<color[i]<<" guardado con exito para el usuario "<<i+1<<"\n"<<flush;
							}
						}
						
					}
					Ejercito anadirEjercito=Ejercito("Infanteria",color[i],tropas);
					jugadores[i].agregarTropa(anadirEjercito);
					
				}

				int turnoActual=0 ;

				cout << endl << "\t" << "A continuacion cada jugador deberá escoger un territorio (ingresar nombre con la primera mayuscula);" << endl ;

				for ( int j=0 ; j < territorios.size() ; j++ ) {

                    for ( int i=0 ; i < territorios.size() ; i++ ) {

						if ( territorios[i].getContinente() != territorios[i-1].getContinente() )
							cout << endl << "\t" << territorios[i].getContinente() << endl ;

                        cout << "\t" << territorios[i].getID() << "\t" << territorios[i].getNombre() << endl ;

					}

                    cout << endl << endl ;

					Jugador& jugadorActual = jugadores[turnoActual] ;

                    string territorioElegido ;
                    string continente ;
                    int id ;

					bool territorioValido = false ;

					while ( ! territorioValido ) {

						cout << "Turno de " << jugadorActual.getNombre() << ". Elija un territorio: " ;
                        cin.ignore() ;
						getline ( cin , territorioElegido ) ;

                        vector <Territorio>::iterator it ;
                        for ( it = territorios.begin() ; it < territorios.end() ; ++it )
                            if ( territorioElegido == it->getNombre() )
                                territorioValido = true ;

                        if ( territorioValido ) {

    						for ( int l=0 ; l < jugadores.size() ; l++ ) {

                                if ( jugadores[l].verificarTerritorioExistente ( territorioElegido ) ) {
                                    cout << "El territorio " << territorioElegido << " ya se encuentra ocupado por el jugador " << jugadores[l].getNombre() << endl ;
                                    territorioValido = false ;
                                    break ;
                                } else {
                                    territorioValido = true ;
                                }

    						}


                        }

                        if ( territorioValido ) {

                            for ( int k=0 ; k < territorios.size() ; k++ ) {

                                if ( territorios[k].getNombre() == territorioElegido ) {
                                    continente = territorios[k].getContinente() ;
                                    id = territorios[k].getID() ;
                                    break ;
                                }

                            }

                        }

					}

					Territorio elegirTerritorio = Territorio ( territorioElegido , continente , id ) ;
					jugadores[turnoActual].asignarTerritorio(elegirTerritorio) ;
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
		nturno = (nturno+1) % jugadores.size() ;
		return true ;
	}
	else
	{
		return false;
	}

}


<<<<<<< HEAD
void comandoTurno ( string id_jugador  ) {
	int cantTerritorios;
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
=======
>>>>>>> 371fe26458810036a0d18fafde8d6f8d7c11bbb5


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
void comandoTurno(int idJugador, vector<Jugador>& jugadores) {
    static int turnoActual = 0;
    
    if (partidaInicializada) {
        if (!juegoFinalizado) {
            int jugadorIndex = -1;

            // Buscar al jugador por su ID y obtener su índice en el vector
            for (size_t i = 0; i < jugadores.size(); ++i) {
                if (jugadores[i].getId() == idJugador) {
                    jugadorIndex = static_cast<int>(i);
                    break;
                }
            }

            if (jugadorIndex != -1) {
                if (verificarJugador(idJugador) && verificarTurno(idJugador)) {
	            Jugador& jugadorActual = jugadores[turnoActual];
                    int nuevasUnidades = 0;

                    // Obtener nuevas unidades basadas en territorios ocupados
                    int territoriosOcupados = jugadores[jugadorIndex].getTerritoriosOcupados();
                    nuevasUnidades += static_cast<int>(territoriosOcupados / 3);

                    // Obtener nuevas unidades basadas en control de continentes
                    nuevasUnidades += calcularUnidadesPorContinentes(jugadores[jugadorIndex]);

                    // Mostrar la cantidad total de nuevas unidades disponibles
                    cout << "El jugador " << jugadores[jugadorIndex].getNombre() << " obtiene " << nuevasUnidades << " nuevas unidades.\n";

                    // Asignar las nuevas unidades a los territorios
                    asignarNuevasUnidades(jugadores[jugadorIndex], nuevasUnidades);
			
			// Realizar la fortificación
			fortificarPosicion(jugadorActual);
			 
				// Mostrar territorios disponibles para atacar
                    cout << "Territorios disponibles para atacar:\n";
                    for (size_t i = 0; i < jugadorActual.getTerritorios().size(); ++i) {
                        cout << i << ". " << jugadorActual.getTerritorios()[i].getNombre() << "\n";
                    }

                    // Seleccionar territorio atacante
                    int indiceAtacante = seleccionarTerritorioAtacante(jugadorActual);
                    Territorio& territorioAtacante = jugadorActual.getTerritorios()[indiceAtacante];

                    // Seleccionar territorio defensor
                    int indiceDefensor = seleccionarTerritorioDefensor(territorioAtacante);
                    Territorio& territorioDefensor = *territorioAtacante.getTerritoriosVecinos()[indiceDefensor];

                    // Realizar el ataque
                    atacarTerritorio(jugadorActual, territorioAtacante, territorioDefensor);

                    // Mostrar mensaje de finalización del turno
                    cout << "El turno del jugador " << idJugador << " ha terminado.\n" << flush;

                    // Actualizar turno actual
                    turnoActual = (turnoActual + 1) % jugadores.size();
                } else {
                    cout << "No es el turno del jugador " << idJugador << " o el jugador no es válido.\n";
                }
            } else {
                cout << "El jugador con ID " << idJugador << " no forma parte de esta partida.\n";
            }
        } else {
            cout << "Esta partida ya tuvo un ganador.\n";
        }
    } else {
        cout << "Esta partida no ha sido inicializada correctamente.\n";
    }
}

int calcularUnidadesPorContinentes(const Jugador& jugador) {
    int unidadesExtras = 0;

    // Obtener la lista de territorios ocupados por el jugador
    const vector<Territorio>& territoriosOcupados = jugador.getTerritorios();
    
    // Contar la cantidad de territorios que el jugador tiene en cada continente
    map<string, int> territoriosPorContinente;
    for (const Territorio& territorio : territoriosOcupados) {
        string continente = territorio.getContinente(); 
        territoriosPorContinente[continente]++;
    }
    
    // Verificar si el jugador tiene control completo de algún continente y asignar unidades
    for (const auto& entry : territoriosPorContinente) {
        string continente = entry.first;
        int territoriosControlados = entry.second;
        
        if (continente == "AmericaDelSur" && territoriosControlados == 4) {
            unidadesExtras += 2;
        } else if (continente == "Australia" && territoriosControlados == 2) {
            unidadesExtras += 2;
        } else if (continente == "Africa" && territoriosControlados == 6) {
            unidadesExtras += 3;
        } else if (continente == "AmericaDelNorte" && territoriosControlados == 9) {
            unidadesExtras += 5;
        } else if (continente == "Europa" && territoriosControlados == 7) {
            unidadesExtras += 5;
        } else if (continente == "Asia" && territoriosControlados == 7) {
            unidadesExtras += 7;
        }
    }
    
    return unidadesExtras;
}

void asignarNuevasUnidades(Jugador& jugador, int nuevasUnidades) {
    // Obtener la lista de territorios del jugador
    vector<Territorio>& territorios = jugador.getTerritorios();

    // Si el jugador no tiene territorios, no se pueden asignar unidades
    if (territorios.empty()) {
        cout << "El jugador no tiene territorios para asignar unidades.\n";
        return;
    }

    cout << "El jugador " << jugador.getNombre() << " puede reclamar " << nuevasUnidades << " unidades adicionales.\n";

    // Asignar unidades a los territorios
    for (Territorio& territorio : territorios) {
        if (nuevasUnidades <= 0) {
            break;
        }

        int unidadesAsignar = 0;
        cout << "Cuántas unidades desea asignar al territorio " << territorio.getNombre() << "? ";
        cin >> unidadesAsignar;

        if (unidadesAsignar > 0 && unidadesAsignar <= nuevasUnidades) {
            territorio.agregarUnidades(unidadesAsignar);
            nuevasUnidades -= unidadesAsignar;
            cout << "Se han asignado " << unidadesAsignar << " unidades al territorio " << territorio.getNombre() << ".\n";
        } else {
            cout << "Cantidad inválida de unidades.\n";
        }
    }
}

void fortificarPosicion(Jugador& jugador) {
    // Obtener territorios del jugador
    vector<Territorio>& territorios = jugador.getTerritorios();

    if (territorios.empty()) {
        cout << "El jugador no tiene territorios para fortificar.\n";
        return;
    }

    // Mostrar los territorios del jugador
    cout << "Territorios del jugador " << jugador.getNombre() << ":\n";
    for (size_t i = 0; i < territorios.size(); ++i) {
        cout << i + 1 << ". " << territorios[i].getNombre() << endl;
    }

    // Seleccionar el territorio origen
    int indiceOrigen = -1;
    while (indiceOrigen < 0 || indiceOrigen >= static_cast<int>(territorios.size())) {
        cout << "Selecciona el número de territorio de origen: ";
        cin >> indiceOrigen;

        if (indiceOrigen < 0 || indiceOrigen >= static_cast<int>(territorios.size())) {
            cout << "Número de territorio inválido.\n";
        }
    }

    // Obtener el territorio de origen
    Territorio& territorioOrigen = territorios[indiceOrigen];

    // Mostrar los territorios vecinos del territorio de origen
    vector<Territorio*> vecinos = territorioOrigen.getTerritoriosVecinos();
    cout << "Territorios vecinos del territorio de origen:\n";
    for (size_t i = 0; i < vecinos.size(); ++i) {
        cout << i + 1 << ". " << vecinos[i]->getNombre() << endl;
    }

    // Seleccionar el territorio destino
    int indiceDestino = -1;
    while (indiceDestino < 0 || indiceDestino >= static_cast<int>(vecinos.size())) {
        cout << "Selecciona el número de territorio de destino: ";
        cin >> indiceDestino;

        if (indiceDestino < 0 || indiceDestino >= static_cast<int>(vecinos.size())) {
            cout << "Número de territorio inválido.\n";
        }
    }

    // Obtener el territorio de destino
    Territorio& territorioDestino = *vecinos[indiceDestino];

    // Verificar si la fortificación es válida según las reglas
    if (!verificarFortificacionValida(territorioOrigen, territorioDestino)) {
        cout << "La fortificación no es válida.\n";
        return;
    }

    // Seleccionar la cantidad de unidades a trasladar
    int cantidadUnidades = -1;
    while (cantidadUnidades < 0 || cantidadUnidades >= territorioOrigen.getUnidades()) {
        cout << "Selecciona la cantidad de unidades a trasladar (hasta " << territorioOrigen.getUnidades() - 1 << "): ";
        cin >> cantidadUnidades;

        if (cantidadUnidades < 0 || cantidadUnidades >= territorioOrigen.getUnidades()) {
            cout << "Cantidad de unidades inválida.\n";
        }
    }

    // Realizar la fortificación
    territorioOrigen.restarUnidades(cantidadUnidades);
    territorioDestino.sumarUnidades(cantidadUnidades);

    cout << "Se han fortificado " << cantidadUnidades << " unidades desde " << territorioOrigen.getNombre()
         << " a " << territorioDestino.getNombre() << ".\n";
}

void atacarTerritorio(Jugador& atacante, Territorio& territorioAtacante, Territorio& territorioDefensor) {
    // Definir la cantidad de dados para el ataque y la defensa
    int dadosAtaque = min(3, territorioAtacante.getNumUnidades() - 1);
    int dadosDefensa = min(2, territorioDefensor.getNumUnidades());

    // Lanzar dados
    vector<int> resultadosAtaque = lanzarDados(dadosAtaque);
    vector<int> resultadosDefensa = lanzarDados(dadosDefensa);

    // Mostrar resultados de los dados
    cout << "Resultados de los dados del atacante: ";
    for (int resultado : resultadosAtaque) {
        cout << resultado << " ";
    }
    cout << "\n";
    cout << "Resultados de los dados del defensor: ";
    for (int resultado : resultadosDefensa) {
        cout << resultado << " ";
    }
    cout << "\n";

    // Comparar resultados de los dados y aplicar pérdidas
    int unidadesPerdidasAtacante = 0;
    int unidadesPerdidasDefensor = 0;
    for (size_t i = 0; i < min(resultadosAtaque.size(), resultadosDefensa.size()); ++i) {
        if (resultadosAtaque[i] > resultadosDefensa[i]) {
            unidadesPerdidasDefensor++;
        } else {
            unidadesPerdidasAtacante++;
        }
    }

    // Aplicar pérdidas de unidades
    territorioAtacante.reducirUnidades(unidadesPerdidasAtacante);
    territorioDefensor.reducirUnidades(unidadesPerdidasDefensor);

    // Mostrar unidades perdidas
    cout << "El atacante pierde " << unidadesPerdidasAtacante << " unidades.\n";
    cout << "El defensor pierde " << unidadesPerdidasDefensor << " unidades.\n";

    // Si el defensor pierde todas sus unidades, el atacante puede conquistar el territorio
    if (territorioDefensor.getNumUnidades() == 0) {
        // Mover unidades del atacante al territorio conquistado
        int unidadesMovidas = min(dadosAtaque, territorioAtacante.getNumUnidades() - 1);
        territorioAtacante.reducirUnidades(unidadesMovidas);
        territorioDefensor.aumentarUnidades(unidadesMovidas);

        cout << "El atacante conquista el territorio " << territorioDefensor.getNombre() << ".\n";
    }
}


