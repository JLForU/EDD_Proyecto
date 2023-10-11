
// DIRECTIVAS DE PREPROCESAMIENTO.
#include "TAD_Risk.h"



/* IMPLEMENTACIÓN DE FUNCIONES PARA EL MANEJO DE COMANDOS. */

string Risk::verificarComandoExistente ( string comandoEntrada ) {

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


void Risk::accionarComandoCorrecto ( string primerComando ) {

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

    } else if (  primerComando.find("guardar ") == 0 ) {

        if ( partidaInicializada ) {

            if ( verificarArchivoComoArgumento() ) {
                comandoGuardar() ;
            } else { 
                cout << "La partida no ha sido guardada correctamente.\n" << flush ;
            }

        } else {

            cout << "Esta partida no ha sido inicializada correctamente.\n" << flush ;

        }

    } else if ( primerComando.find("guardar_comprimido ") == 0 ) {

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


void Risk::comandoInicializar ( void ) {

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

					vector<Ejercito> cTropas ;
					vector<Ejercito>::iterator ite ;
					cTropas = jugadores[turnoActual].getTropas() ;

					int cart=0 ;
					int tcart=0 ;
					int infan=35 ;
					
					cout << "Cuenta con las siguientes tropas:" << endl ;
					
					for ( ite = cTropas.begin() ; ite != cTropas.end() ; ite++ ) {
						infan = infan-1 ;
						cout << "\t" << ite->getGrupo() << ": " << infan << endl ;
					}

					string color = jugadores[turnoActual].getColor() ;
					Territorio elegirTerritorio = Territorio ( territorioElegido , continente , id ) ;
					Ejercito anadirEjercito = Ejercito ( "Infanteria" , color , 1 ) ;
					Carta nuevaCarta = Carta ( elegirTerritorio , anadirEjercito ) ;

					jugadores[turnoActual].asignarTerritorio ( elegirTerritorio ) ;
					jugadores[turnoActual].agregarTropa ( anadirEjercito ) ;
					jugadores[turnoActual].agregarCarta ( nuevaCarta ) ;

				}

			}

			turnoActual = (turnoActual+1) % jugadores.size() ;

		}
		
    }

}


bool Risk::verificarJugador (string id_jugador ) {
	for(int i=0;i<jugadores.size();i++)
	{
		if(id_jugador==jugadores[i].getNombre())
		{
			return true;
		}
	}
    return false ;

}

bool Risk::verificarTurno ( string id_jugador ) {
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


void Risk::comandoTurno ( string id_jugador  ) {

	int cantTerritorios;
	int cantContinentes;
	int cantUnidades;
	string color;

    if ( partidaInicializada ) {
		
        if ( !juegoFinalizado ) {
        
            if ( verificarJugador(id_jugador) ) {

                if ( verificarTurno(id_jugador) ) {

					cantTerritorios = jugadores[nturno].territoriosXJugador ( jugadores , id_jugador ) ;
					
					cantContinentes = jugadores[nturno].verificarContinente ( jugadores , id_jugador ) ;
					
					cantUnidades = (cantTerritorios/3) + cantContinentes ;
					
					Ejercito anadirEjercito = Ejercito ( "Ejercito" , cantUnidades ) ;
					
					jugadores[nturno].agregarTropa ( anadirEjercito ) ;

					bool seguir = true ;
					int elec = 0 ;
					do {
						atacar ( nturno ) ;
						cout << "¿Seguir atacando? (0|1): " << flush , cin >> elec , cout << flush ;
						if ( elec == 0 )
							seguir = false ;
					} while ( seguir ) ;

					fortificar() ;

                    cout << "El turno del jugador " << id_jugador << " ha terminado.\n" << flush ;

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


void Risk::atacar ( int nTurno ) {

	bool territorioVaalido = false ;

	int territorioDesde = 0 ;

	/*
	for ( int contadorTerritorios=0 ; contadorTerritorios < territorios.size() ; contadorTerritorios++ ) {
		cout << territorios[contadorTerritorios].getID() << " : " << territorios[contadorTerritorios].getNombre() << endl ;
		for ( int contadorVecinos=0 ; contadorVecinos < territorios[contadorTerritorios].getVecinos().size() ; contadorVecinos++ )
			cout << territorios[contadorTerritorios].getVecinos().at(contadorVecinos).getID() << endl ;
		cout << endl ;
	}
	*/

	do {

		cout << "Atacar desde: " << flush , cin >> territorioDesde , cout << flush ;

		int contadorTerritorios = 0 ;
		vector<Territorio>::iterator iteradorTerritorios = jugadores[nTurno].getTerritorios().begin() ;
		for ( ; iteradorTerritorios != jugadores[nTurno].getTerritorios().end() ; iteradorTerritorios++ ) {
			if ( iteradorTerritorios->getID() == territorioDesde ) {
				territorioVaalido = true ;
				territorioDesde = contadorTerritorios ;
				break ;
			}
		contadorTerritorios++ ;
		}

		if ( ! territorioVaalido )
			cout << "Territorio inválido." << endl ;
		else
			cout << "Territorio válido." << endl ;

	} while ( ! territorioVaalido ) ;

	territorioVaalido = false ;

	do {

		int	territorioHacia = 0 ;

		cout << "Atacar hacia: " << flush , cin >> territorioHacia , cout << flush ;

		for ( int contadorVecinos=0 ; contadorVecinos < territorios[territorioDesde].getVecinos().size() ; contadorVecinos++ )
			if ( territorios[territorioDesde].getVecinos().at(contadorVecinos).getID() == territorioHacia ) {
				territorioVaalido = true ;
				restarUnidades ( territorioDesde , territorioHacia ) ;
				break ;
			}

		if ( ! territorioVaalido )
			cout << endl << "Territorio inválido.\n\n" << flush ;
		else
			cout << endl << "Territorio válido.\n\n" << flush ;

	} while ( ! territorioVaalido ) ;

}


void Risk::restarUnidades ( int territorioDesde , int territorioHacia ) {

	int jugadorAtacado = 0 ;
	int territorioAtacado = 0 ;

	for ( int contadorJugadores=0 ; contadorJugadores < jugadores.size() ; contadorJugadores++ )
		for ( int contadorTerritorios=0 ; contadorTerritorios < jugadores[contadorJugadores].getTerritorios().size() ; contadorTerritorios++ )
			if ( jugadores[contadorJugadores].getTerritorios().at(contadorTerritorios).getID() == territorioHacia ) {
				jugadorAtacado = contadorJugadores ;
				territorioAtacado = contadorTerritorios ;
			}

	// Ayuda para generar número aleatorio basado en tiempo de computadora.
	srand ( time(nullptr) ) ;

	// Dados de atacante.
	cout << endl << "Dados atacante: " ;
	int dadosAtacante[3] ;
	for ( int contadorDados=0 ; contadorDados < 3 ; contadorDados++ ) {
		int dado = ( 1 + ( rand() % 6 ) ) ;
		cout << dado << " " ;
		dadosAtacante[contadorDados] = dado ;
	}
	cout << endl ;
	int dadoAtacante = dadosAtacar ( dadosAtacante ) ;
	cout << "Total: " << dadoAtacante ;

	// Dados de defensor.
	cout << endl << "Dados defensor: " ;
	int dadosDefensor = 0 ;
	for ( int contadorDados=0 ; contadorDados < 2 ; contadorDados++ ) {
		int dado = ( 1 + ( rand() % 6 ) ) ;
		cout << dado << " " ;
		dadosDefensor += dado ;
	}
	cout << endl << "Total: " << dadosDefensor << endl ;

	/*
	cout << endl << "Desde: " << jugadores[nturno].getTropas().at(territorioDesde).getUnidades() << endl ;
	cout << "Hacia: " << jugadores[jugadorAtacado].getTropas().at(territorioAtacado).getUnidades() << endl << endl ;
	*/

	// Evaluar ganador en juego de dados.
	if ( dadoAtacante <= dadosDefensor ) {

		int unidadesPerdidas = 0 ;
		unidadesPerdidas = jugadores[nturno].getTropas().at(territorioDesde).getUnidades() ;
		unidadesPerdidas-- ;
		jugadores[nturno].getTropas().at(territorioDesde).setUnidades ( unidadesPerdidas ) ;

	} else {

		int unidadesPerdidas = 0 ;
		unidadesPerdidas = jugadores[nturno].getTropas().at(territorioDesde).getUnidades() ;

		int unidadesAtacadas = 0 ;
		unidadesAtacadas = jugadores[jugadorAtacado].getTropas().at(territorioAtacado).getUnidades() ;
		unidadesAtacadas-- ;
		jugadores[jugadorAtacado].getTropas().at(territorioAtacado).setUnidades ( unidadesAtacadas ) ;

		if ( unidadesPerdidas > 2 && unidadesAtacadas == 0 ) {

			string ocupado = jugadores[jugadorAtacado].getTerritorios().at(territorioAtacado).getNombre() ;
			int ocupar = 0 ;
			cout << "El territorio " << ocupado << " puede ser ocupado." << endl << "¿Ocupar? (0|1)" << flush , cin >> ocupar , cout << flush ;

			if ( ocupar ) {

				Territorio nuevo = jugadores[jugadorAtacado].getTerritorios().at(territorioAtacado) ;
				jugadores[nturno].asignarTerritorio ( nuevo ) ;

				bool aceptarUnidades = false ;
				do {

					int unidades = 0 ;
					cout << "¿Unidades?" << flush , cin >> unidades , cout << flush ;

					if ( unidades < unidadesPerdidas ) {
						unidadesPerdidas -= unidades ;
						jugadores[nturno].getTropas().at(territorioDesde).setUnidades ( unidadesPerdidas ) ;
						string grupo = "Infantería" ;
						Ejercito nuevaTropa = Ejercito ( grupo , unidades ) ;
						jugadores[nturno].agregarTropa ( nuevaTropa ) ;
						aceptarUnidades = true ;
					}

				} while ( ! aceptarUnidades ) ;

			}

		}

	}

	// Eliminar territorio con unidades nulas.
	for ( int contadorJugadores=0 ; contadorJugadores < jugadores.size() ; contadorJugadores++ )

		for ( int contadorTerritorios=0 ; contadorTerritorios < jugadores[contadorJugadores].getTerritorios().size() ; contadorTerritorios++ )

			if ( jugadores[contadorJugadores].getTropas().at(contadorTerritorios).getUnidades() == 0 ) {

				vector<Territorio>::iterator it_Territorio ;
				it_Territorio = jugadores[contadorJugadores].getTerritorios().begin() ;
				jugadores[contadorJugadores].getTerritorios().erase ( it_Territorio + contadorTerritorios ) ;

				vector<Ejercito>::iterator it_Ejercito ;
				it_Ejercito = jugadores[contadorJugadores].getTropas().begin() ;
				jugadores[contadorJugadores].getTropas().erase ( it_Ejercito + contadorTerritorios ) ;

				vector<Carta>::iterator it_Carta ;
				it_Carta = jugadores[contadorJugadores].getCartas().begin() ;
				jugadores[contadorJugadores].getCartas().erase ( it_Carta + contadorTerritorios ) ;

			}

}


int Risk::dadosAtacar ( int dados[] ) {

	bool terminar = false ;
	int elec = 0 ;
	int dadoFinal = 0 ;

	do {

		cout << "Primer dado: " << flush , cin >> elec , cout << flush ;

		for ( int contadorDados=0 ; contadorDados < 3 ; contadorDados++ )
			if ( dados[contadorDados] == elec )
				terminar = true ;

	} while ( ! terminar ) ;

	terminar = false ;
	dadoFinal = elec ;
	elec = 0 ;

	do {

		cout << "Segundo dado: " << flush , cin >> elec , cout << flush ;

		for ( int contadorDados=0 ; contadorDados < 3 ; contadorDados++ )
		//  if ( dados[contadorDados] == elec && elec != dadoFinal )
            if ( dados[contadorDados] == elec )
				terminar = true ;

	} while ( ! terminar ) ;

	dadoFinal += elec ;

return dadoFinal ;
}


void Risk::fortificar ( void ) {

	bool territorioVaalido = false ;

	int territorioDesde = 0 ;

	/*
	for ( int contadorTerritorios=0 ; contadorTerritorios < territorios.size() ; contadorTerritorios++ ) {
		cout << territorios[contadorTerritorios].getID() << " : " << territorios[contadorTerritorios].getNombre() << endl ;
		for ( int contadorVecinos=0 ; contadorVecinos < territorios[contadorTerritorios].getVecinos().size() ; contadorVecinos++ )
			cout << territorios[contadorTerritorios].getVecinos().at(contadorVecinos).getID() << endl ;
		cout << endl ;
	}
	*/

	do {

		cout << "Fortificar desde: " << flush , cin >> territorioDesde , cout << flush ;

		int contadorTerritorios = 0 ;
		vector<Territorio>::iterator iteradorTerritorios = jugadores[nturno].getTerritorios().begin() ;
		for ( ; iteradorTerritorios != jugadores[nturno].getTerritorios().end() ; iteradorTerritorios++ ) {
			if ( iteradorTerritorios->getID() == territorioDesde ) {
				territorioVaalido = true ;
				territorioDesde = contadorTerritorios ;
				break ;
			}
		contadorTerritorios++ ;
		}

		if ( jugadores[nturno].getTropas().at(territorioDesde).getUnidades() <= 1 )
			territorioVaalido = false ;

		if ( ! territorioVaalido )
			cout << "Territorio inválido." << endl ;
		else
			cout << "Territorio válido." << endl ;

	} while ( ! territorioVaalido ) ;

	territorioVaalido = false ;

	do {

		int	territorioHacia = 0 ;

		cout << "Fortificar hacia: " << flush , cin >> territorioHacia , cout << flush ;

		for ( int contadorVecinos=0 ; contadorVecinos < jugadores[nturno].getTerritorios().at(territorioDesde).getVecinos().size() ; contadorVecinos++ )

			if ( jugadores[nturno].getTerritorios().at(territorioDesde).getVecinos().at(contadorVecinos).getID() == territorioHacia ) {

				int unidadesPerdidas = 0 ;
				unidadesPerdidas = jugadores[nturno].getTropas().at(territorioDesde).getUnidades() ;
				int nuevasUnidades = 0 ;

				bool unidadesCorrectas = false ;
				do {

					cout << "Número de unidades para fortificar: " << flush , cin >> nuevasUnidades , cout << flush ;

					if ( nuevasUnidades > 0 && nuevasUnidades < unidadesPerdidas )
						unidadesCorrectas = true ;

					if ( unidadesCorrectas )
						cout << "Unidades correctas." << endl ;
					else
						cout << "Unidades incorrectas." << endl ;

				} while ( ! unidadesCorrectas ) ;

				int unidadesActuales = jugadores[nturno].getTropas().at(contadorVecinos).getUnidades() ;

				unidadesPerdidas -= nuevasUnidades ;
				jugadores[nturno].getTropas().at(territorioDesde).setUnidades ( unidadesPerdidas ) ;

				unidadesActuales += nuevasUnidades ;
				jugadores[nturno].getTropas().at(contadorVecinos).setUnidades ( unidadesActuales ) ;

				territorioVaalido = true ;
				break ;

			}

		if ( jugadores[nturno].getTerritorios().at(territorioDesde).getID() == territorioHacia )
			territorioVaalido = true ;

		if ( ! territorioVaalido )
			cout << endl << "Territorio inválido.\n\n" << flush ;
		else
			cout << endl << "Territorio válido.\n\n" << flush ;

	} while ( ! territorioVaalido ) ;

}


void Risk::comandoSalir ( void ) {

    cout << "Saliendo..." << endl ;
    
    // exit(0) ;

}


bool Risk::verificarArchivoComoArgumento ( void ) {

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
        
        return true ;
        
        /*
        ifstream file(nombreDeArchivo) ;
        bool archivoExiste = file.good() ;
        
        if ( archivoExiste ) {
            cout << "El archivo existe." << endl ;
            return true ;
        } else {
            cout << "El archivo no existe." << endl ;
            return false ;
        }
        */
    
    } else {
    
        cout << "El número de parámetros es incorrecto.\n" << flush ;
        
        return false ;
    
    }

}


void Risk::comandoGuardar ( void ) {
	
	int contadorDeEspacios = 0 ;
	int contador_i;
	char* nombreDeArchivo ;

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
		
        nombreDeArchivo = new char [contador_i] ;
		bandera = false ;
		contador_i = 0 ;
		
		for ( char iterator_i : comandoEntrada ) {
		
		    if ( bandera ) {
		        nombreDeArchivo[contador_i++] = iterator_i ;
		    }
		    
		    if ( iterator_i == ' ' ) {
		        bandera = true ;
		    }

		}
        
	} else {
		return;
	}
	
	string nombreA=nombreDeArchivo;
	nombreA=nombreA+".txt";
	ofstream archivo;
	archivo.open(nombreA,ios::out);
	
	if(archivo.fail()){
		cout<<"No fue posible abrir el archivo";
		return;
	}

	vector<Jugador>::iterator it;
	archivo<<jugadores.size()<<" ";

	for ( it=jugadores.begin() ; it != jugadores.end() ; it++ ) {

		vector<Carta> cartas;
		vector<Territorio> terri;
		vector<Carta>::iterator itt;
		terri=it->getTerritorios();
		cartas=it->getCartas();
		Territorio terr;
		Ejercito ej;
		
		archivo<<it->getNombre()<<" "<<it->getColor()<<" "<<terri.size()<<" ";
		
		for(itt=cartas.begin();itt!=cartas.end();itt++){
			terr=itt->getTerritorio();
			ej=itt->getEjercito();
            if ( itt+1 != cartas.end() )
			    archivo<<terr.getID()<<":"<<ej.getUnidades()<<"-";
            else
                archivo<<terr.getID()<<":"<<ej.getUnidades() ;
		}

        // archivo<<"::"<<cartas.size();
		archivo<<" ";

	}

	archivo.close();
	
    cout << "\nLa partida ha sido guardada correctamente.\n\n" << flush ;

}


void Risk::comandoGuardarComprimido ( void ) {

    int contadorDeEspacios = 0 ;
    int contador_i;
    char nombreDeArchivo[contador_i] ;
    string texto;
    int cod;
    ArbolHuff arbol;

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

    } else {

        return ;

    }

    string nombreA2=nombreDeArchivo;
    nombreA2=nombreA2+".bin";
    ofstream binario(nombreA2,ios::out);

    vector<string> respuesta;
    vector<string>::iterator itr;
    vector<car> cantidad;
    vector<car>::iterator itk;

    if(binario.is_open()){

        texto=jugadores.size()+" ";

        vector<Jugador>::iterator it;
        for(it=jugadores.begin();it!=jugadores.end();it++){

            vector<Carta> cartas;
            vector<Territorio> terri;
            vector<Carta>::iterator itt;
            terri=it->getTerritorios();
            cartas=it->getCartas();
            Territorio terr;
            Ejercito ej;

            texto=texto+it->getNombre()+" "+it->getColor()+" "+to_string(terri.size())+" ";

            for(itt=cartas.begin();itt!=cartas.end();itt++){
                terr=itt->getTerritorio();
                ej=itt->getEjercito();
                texto=texto+to_string(terr.getID())+":"+to_string(ej.getUnidades())+"-";
            }

            texto=texto+"::"+to_string(cartas.size());

        }

        ArbolHuff arbol;
        vector<int> cantCarac;
        vector<int>::iterator itp;
        cantidad=arbol.frecuencia(texto);
        cantCarac=binarios(cantidad.size(),16);

        for(itp=cantCarac.begin();itp!=cantCarac.end();itp++){
            binario<<*itp;
        }

        binario<<"#";

        int ncaracteres=0;
        vector<int> ncarac;
        vector<int>::iterator itnca;
        for(itk=cantidad.begin();itk!=cantidad.end();itk++){

            int caracter=itk->caracter;
            int frecuencia=itk->frecuencia;
            vector<int> frec;
            vector<int> carac;
            vector<int>::iterator itca;
            vector<int>::iterator itfre;
            carac=binarios(caracter,8);
            frec=binarios(frecuencia,64);

            for(itca=carac.begin();itca!=carac.end();itca++){
                binario<<*itca;
            }

            binario<<":";
            for(itfre=frec.begin();itfre!=frec.end();itfre++){
                binario<<*itfre;
            }

            binario<<"-";
            ncaracteres++;

        }

        ncarac=binarios(ncaracteres,64);
        binario<<"#";

        for(itnca=ncarac.begin();itnca!=ncarac.end();itnca++){
            binario<<*itnca;
        }

        binario<<endl;

        respuesta=arbol.codificar(texto);

        for(itr=respuesta.begin();itr!=respuesta.end();itr++){
            binario<<*itr;
        }

    } else {

        cout<<"No se pudo abrir el archivo"<<endl;
        return;

    }

    cout << "\nLa partida ha sido codificada y guardada correctamente.\n" << flush ;

}


vector<int> Risk::binarios(int decimal, int bits){

    short binario[bits];
    vector<int> resultado;

    for(int i=0;i<bits;i++){
      binario[i]=decimal%2;
      decimal/=2;
    }

    for(int i=bits-1;i>=0;i--){
      resultado.push_back(binario[i]);
    }

return resultado;
}


void Risk::comandoInicializarArchivo ( void ) {

	int contadorDeEspacios = 0 ;
	int contador_i ;
	char* nombreDeArchivo ;

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

		nombreDeArchivo = new char [contador_i] ;
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

	} else {
		return ;
	}

    // Crear nombre de archivo.
	string nombreArchivoCompleto=nombreDeArchivo;
    nombreArchivoCompleto += ".txt" ;

    // Abrir el archivo para su lectura.
    ifstream archivo ;
    archivo.open ( nombreArchivoCompleto , ios::in ) ;

    /*
    if ( archivo.fail() )
        cout << "ERROR!" << endl ;
    else
        cout << "GOOD!" << endl ;
    */

    // Declarar variable para leer archivo.
    string contenidoArchivoEntrada ;

    // Leer número de jugadores.
    archivo >> contenidoArchivoEntrada ;
    // Almacenar en memoría número de jugadores.
    int nuumeroJugadores = atoi ( contenidoArchivoEntrada.c_str() ) ;
    nJugadores = nuumeroJugadores ;

    for ( int contador_i=0 ; contador_i < nJugadores ; contador_i++ ) {

        // Almacenar ID de jugador.
        archivo >> contenidoArchivoEntrada ;
        Jugador nuevoJugador = Jugador ( contenidoArchivoEntrada ) ;
        // Almacenar COLOR de jugador.
        archivo >> contenidoArchivoEntrada ;
        nuevoJugador.setColor ( contenidoArchivoEntrada ) ;
        // Almacenar JUGADOR con ID y COLOR.
        jugadores.push_back ( nuevoJugador ) ;

        // Almacenar # DE TERRITORIOS por jugador.
        archivo >> contenidoArchivoEntrada ;
        int nuumeroTerritorios = atoi ( contenidoArchivoEntrada.c_str() ) ;
        // ... dato sin uso ...

        // Almacenar TERRITORIOS por jugador.
        archivo >> contenidoArchivoEntrada ;
        contenidoArchivoEntrada += '\0' ;
        string nuumeros = "" ;
        for ( char iterador_i : contenidoArchivoEntrada ) {

            if ( isdigit(iterador_i) ) {

                nuumeros += iterador_i ;

            } else if ( iterador_i == ':' ) {

                // Proceso para agregar un nuevo TERRITORIO.
                int nuevoIdTerritorio = atoi ( nuumeros.c_str() ) ;
                string nuevoNombreTerritorio ;
                string nuevoContinenteTerritorio ;
                for ( int contador_j=0 ; contador_j < territorios.size() ; contador_j++ )
                    if ( territorios[contador_j].getID() == nuevoIdTerritorio ) {
                        nuevoNombreTerritorio = territorios[contador_j].getNombre() ;
                        nuevoContinenteTerritorio = territorios[contador_j].getContinente() ;
                    }
                Territorio nuevoTerritorio = Territorio ( nuevoNombreTerritorio , nuevoContinenteTerritorio , nuevoIdTerritorio ) ;
                jugadores[jugadores.size()-1].asignarTerritorio ( nuevoTerritorio ) ;

                nuumeros = "" ;

            } else if ( iterador_i == '-' || iterador_i == '\0' ) {

                // Proceso para agregar un nuevo EJERCITO.
                int nuevoNuumeroTropas = atoi ( nuumeros.c_str() ) ;
                Ejercito nuevaTropa = Ejercito ( "Infanteria" , nuevoNuumeroTropas ) ;
                jugadores[jugadores.size()-1].agregarTropa ( nuevaTropa ) ;

                // Proceso para agregar una nueva CARTA.
                Territorio temp_Territorio ;
                int uultimoTerritorio = jugadores[jugadores.size()-1].getTerritorios().size()-1 ;
                temp_Territorio = jugadores[jugadores.size()-1].getTerritorios().at(uultimoTerritorio) ;
                Carta nuevaCarta = Carta ( temp_Territorio , nuevaTropa ) ;
                jugadores[jugadores.size()-1].agregarCarta ( nuevaCarta ) ;

                nuumeros = "" ;

            }

        }

    }

	/*
    for ( int contador_i=0 ; contador_i < 3 ; contador_i++ )
        cout << jugadores[contador_i].getTropas().size() << endl ;
	*/

    // Arreglos finales.
    partidaInicializada = true ;
	cout << "\nLa partida ha sido inicializada correctamente.\n" << flush ;

}


bool Risk::verificarTerritorio ( void ) {

    return true ;

}


void Risk::comandoCostoConquista ( void ) {

    cout << "\nPara conquistarel territorio <territorio>, debe atacar desde <territorio_1>, pasando por los territorios <territorio_2>, <territorio_3>, ..., <territorio_m>. Debe conquistar <n> unidades de ejército. \n" << flush ;

}


void Risk::comandoConquista ( void ) {

    cout << "\nLa conquista más barata es avanzar sobre el territorio <territorio_1> desde el territorio <territorio_2>. Para conquistar el territorio <territorio_1>, debe atacar desde <territorio_2>, pasando por los territorios <territorio_2>, <territorio_3>, ..., <territorio_m>. Debe conquistar <n> unidades de ejército. \n" << flush ;

}


void Risk::comandoAyuda ( void ) {

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


void Risk::comandoAyudaComando ( string comandoAC ) {

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

