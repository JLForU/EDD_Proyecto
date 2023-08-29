
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

    /*
    vector <Territorio>::iterator it_01 ;
    for ( it_01 = territorios.begin() ; it_01 < territorios.end() ; ++it_01 )
        for ( int contador_i=0 ; contador_i < it_01->getVecinos().size() ; contador_i++ )
            cout << it_01->getNombre() << " : " << it_01->getVecinos()[contador_i].getNombre() << endl ;
    cout << endl << endl ;
    */

    funcioon_Jugar() ;


    cout << "\t\t - - - - - - - - -\n" << flush ;
    cout << "\t\t|  FIN DEL JUEGO  |\n" << flush ;
    cout << "\t\t - - - - - - - - -\n\n\n" << endl ;


return 0 ;
}

