
// DIRECTIVAS DE PREPROCESAMIENTO.
#include "TAD_Risk.h"



/* IMPLEMENTACIÓN DE LA FUNCIÓN "MAIN". */

int main ( void ) {


    cout << "\n\n\t\t - - - - - - - - - - -\n" << flush ;
    cout << "\t\t|  BIENVENIDO A RISK  |" << flush ;
    cout << "\n\t\t - - - - - - - - - - -\n\n\n" << flush ;


	Risk juego = Risk() ;

    juego.llenarMazo() ;

    juego.crearMapa() ;

    juego.funcioon_Jugar() ;
	


    cout << "\t\t - - - - - - - - -\n" << flush ;
    cout << "\t\t|  FIN DEL JUEGO  |\n" << flush ;
    cout << "\t\t - - - - - - - - -\n\n\n" << endl ;


return 0 ;
}

