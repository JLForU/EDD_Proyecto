
// DIRECTIVAS DE PREPROCESADOR.
//// LLAMADO DE LIBRERÍAS.
#include <iostream>
#include <vector>
#include <queue>
//// LLAMADO DE ARCHIVOS ADICIONALES.
#include "ArbolHuff.h"



/* IMPLEMENTACIÓN DE CLASE 'ArbolHuff'. */

//// CONSTRUCTORES ////

ArbolHuff::ArbolHuff ( void ) {
    this -> raiiz = NULL ;
}

ArbolHuff::ArbolHuff ( car& valor ) {
    NodoHuff* nodo = new NodoHuff() ;
    nodo -> setDato ( valor ) ;
    this -> raiiz = nodo ;
}

//// DESTRUCTOR ////

ArbolHuff::~ArbolHuff ( void ) {
    if ( this->raiiz != NULL ) {
        delete this -> raiiz ;
        this -> raiiz = NULL ;
    }
}

//// GETTERS ////

NodoHuff* ArbolHuff::getRaiiz ( void ) {
    return this -> raiiz ;
}

//// SETTERS ////

bool ArbolHuff::setRaiiz ( NodoHuff* nuevaRaiiz ) {
    if ( nuevaRaiiz != NULL )
        this->raiiz = nuevaRaiiz ;
    else
        return false ;
return true ;
}

//// COMPORTAMIENTOS ////

bool ArbolHuff::esVacio ( void ) {
    return ( this->raiiz == NULL ) ;
}

vector<NodoHuff*> ArbolHuff::insert ( vector<car> frecuencias ) {

	car dato;
    vector<NodoHuff*> nodos;
	NodoHuff* nodo = new NodoHuff();

	vector<car>::iterator it;
	for(it=frecuencias.begin();it!=frecuencias.end();it++){
		if(it->caracter!=00){
			NodoHuff* nodo= new NodoHuff();
			dato.caracter=it->caracter;
			dato.frecuencia=it->frecuencia;
			nodo->setDato(dato);
			nodos.push_back(nodo);
		}
		
	}
	
	while (nodos.size() > 1) {       

        NodoHuff* nodoIzq = nodos[0];
        NodoHuff* nodoDer = nodos[1];

        NodoHuff* padre = new NodoHuff();
		
        padre->setNodoIzq(nodoIzq);
        padre->setNodoDer(nodoDer);
		dato.caracter='*';
		dato.frecuencia=nodoIzq->getFrec() + nodoDer->getFrec();
		padre->setDato(dato);
        nodos.erase(nodos.begin());
        nodos.erase(nodos.begin());
        nodos.push_back(padre);
    }

	this->setRaiiz ( nodos[0] ) ;

return nodos;
}

vector<string> ArbolHuff::codificar ( string texto ) {

	car dato;
	vector<car> res;
	vector<string> codigo;
	vector<NodoHuff*> nodos;
	vector<NodoHuff*>::iterator it;
	res=frecuencia(texto);
	nodos=insert(res);
	
	char *txt = new char[texto.length()+1] ;
	strcpy ( txt , texto.c_str() ) ;
	int ascii[texto.length()] ;
	
	for(int i=0;i<texto.length();i++){
		ascii[i]=txt[i];
		string cod=buscar(ascii[i]);
		cout<<cod<<endl;
		codigo.push_back(cod);
	}

return codigo ;
}

string ArbolHuff::buscar ( int c) {

	NodoHuff* nodo = new NodoHuff() ;
	nodo = this->raiiz ;
	string cod ;

	while ( nodo != NULL ) {
		
		if(nodo->esHoja()){
			return cod;
		}else {
			if(!buscar(c,nodo->getNodoIzq())){
				nodo=nodo->getNodoDer();
				cod=cod+'1';
			}else if ( ! buscar(c,nodo->getNodoDer()) ) {
				nodo = nodo->getNodoIzq() ;
				cod = cod+'0' ;
			}
		}

	}

	cout << cod << endl ;

return cod ;
}

bool ArbolHuff::buscar ( int c , NodoHuff* actual ) {

	bool cod = false ;
	char j = c ;
	char k = actual->getDato().caracter ;

	cout<<j<<"	"<<k<<endl;

	if(actual->getDato().caracter==c){
		cod=true;
		return cod;
	}else{
		if(actual->getNodoIzq()!=NULL && !cod){
			cod=buscar(c,actual->getNodoIzq());
			if(cod)
				return cod;
		}
		if(actual->getNodoDer()!=NULL && !cod){
			cod=buscar(c,actual->getNodoDer());
			if(cod)
				return cod;
		}
	}

return cod ;
}

void ArbolHuff::decodificar (string cod) {
	cout<<cod<<endl;
	char *prueba=new char[cod.length()+1];
	strcpy(prueba,cod.c_str());
	NodoHuff* p=new NodoHuff();
	p=this->raiiz;
	car v;
	for(int i=0;i<cod.length()+1;i++){
		if(prueba[i]==0){
			cout<<0<<endl;
			p=p->getNodoIzq();
		}else{
			cout<<1<<endl;
			p=p->getNodoIzq();
		}
	}
	if(p->esHoja()){
		
		v=p->getDato();
		cout<<v.caracter<<endl;
		
	}
	
    return;
}


vector<car>  ArbolHuff::frecuencia ( string nombre ) {
	vector<car> res;
	vector<car>::iterator it;
	car letra;
	int frecuencia=0;
	if(nombre.size()==0)
		return res;
	sort(nombre.begin(),nombre.end());
	char ltr=nombre[0];

	for(int i=0;i<nombre.size();i++){
		
		if(nombre[i]==ltr){
			frecuencia++;
		}else{
			letra.caracter=ltr;
			letra.frecuencia=frecuencia;
			res.push_back(letra);
			ltr=nombre[i];
			frecuencia=1;
		}
		
		if(i==nombre.size()-1){
			letra.caracter=ltr;
			letra.frecuencia=frecuencia;
			res.push_back(letra);
		}
	}
	for(int i=0;i<res.size();i++){
		for(it=res.begin();it!=res.end();it++){
			if(it->frecuencia>(it+1)->frecuencia&&(it+1)->frecuencia!=0){
				swap(it->frecuencia,(it+1)->frecuencia);
				swap(it->caracter,(it+1)->caracter);
			}
		}
	}
	return res;
}
