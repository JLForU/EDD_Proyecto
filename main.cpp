
// DIRECTIVAS DE PREPROCESAMIENTO.
#include "main.hxx"



// SENTENCIAS GLOBALES GENERALES.
string comandoEntrada ;
bool partidaInicializada = false ;
bool juegoFinalizado = false ;
vector <Carta> mazo ;
vector <Territorio> territorios ;



/* IMPLEMENTACIÓN DE LA FUNCIÓN "MAIN". */

int main ( void ) {


    cout << "\n\n\t\t - - - - - - - - - - -\n" << flush ;
    cout << "\t\t|  BIENVENIDO A RISK  |" << flush ;
    cout << "\n\t\t - - - - - - - - - - -\n\n\n" << flush ;


    llenarMazo() ;

    crearMapa() ;

    funcioon_Jugar() ;
	


    cout << "\t\t - - - - - - - - -\n" << flush ;
    cout << "\t\t|  FIN DEL JUEGO  |\n" << flush ;
    cout << "\t\t - - - - - - - - -\n\n\n" << endl ;


return 0 ;
}

