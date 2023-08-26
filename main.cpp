
// Directivas de preprocesamiento.
#include "main.h"
#include "TAD_Carta.h"



// Sentencias globales.
string comandoEntrada ;
bool partidaInicializada = false ;
bool juegoFinalizado = false ;
vector<Carta> mazo ;


int main ( void ) {


    cout << "\n\n\t\t - - - - - - - - - - -\n" << flush ;
    cout << "\t\t|  BIENVENIDO A RISK  |" << flush ;
    cout << "\n\t\t - - - - - - - - - - -\n\n\n" << flush ;


    llenarMazo() ;

    vector<Carta>::iterator it ;
    for ( it = mazo.begin() ; it != mazo.end() ; ++it )
        cout << it -> getTerritorio() << " ; " << it -> getDibujo() << endl ;
    cout << endl << endl ;

    /*
    do {

        cout << "\tIntroduce un comando: " << flush ;
        getline (cin,comandoEntrada) ;
        
        cout << endl << endl ;
        
	    accionarComandoCorrecto ( verificarComandoExistente(comandoEntrada) ) ;
            
        cout << endl << endl ;
        
        if ( comandoEntrada == "salir" || comandoEntrada == "SALIR" ) break ;
        
    } while ( true ) ;
    */


    cout << "\t\t - - - - - - - - -\n" << flush ;
    cout << "\t\t|  FIN DEL JUEGO  |\n" << flush ;
    cout << "\t\t - - - - - - - - -\n\n\n" << endl ;


return 0 ;
}




// To rest -->      