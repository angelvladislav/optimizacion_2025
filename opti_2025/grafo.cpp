 /*
 *  GRAFO.CPP - Plantilla para la implementación de la clase GRAFOS
 *
 *
 *  Autores : Antonio Sedeno Noda, Sergio Alonso
 *  Cursos   : 2012-2021
 */

#include "grafo.h"

void GRAFO :: destroy()
{
	for (unsigned i=0; i< n; i++)
    {
		LS[i].clear();
		if (dirigido == 1)
        	   LP[i].clear();
	}
	LS.clear();
	if (dirigido == 1)
		LP.clear();

}

void GRAFO :: build (char nombrefichero[85], int &errorapertura)
{
    ElementoLista     dummy;
	ifstream textfile;
	textfile.open(nombrefichero);
	if (textfile.is_open())
    {
		unsigned i, j, k;
		// leemos por conversion implicita el numero de nodos, arcos y el atributo dirigido
		textfile >> (unsigned &) n >> (unsigned &) m >> (unsigned &) dirigido;
		// los nodos internamente se numeran desde 0 a n-1
		// creamos las n listas de sucesores
		LS.resize(n);
        // leemos los m arcos
		for (k=0;k<m;k++)
        	{
			textfile >> (unsigned &) i  >> (unsigned &) j >> (int &) dummy.c;
			//damos los valores a dummy.j y dummy.c
			//situamos en la posición del nodo i a dummy mediante push_back
			//pendiente de hacer un segundo push_back si es no dirigido. O no.
			//pendiente la construcción de LP, si es dirigido
			//pendiente del valor a devolver en errorapertura
			//...

}

GRAFO::~GRAFO()
{
	destroy();
}

GRAFO::GRAFO(char nombrefichero[85], int &errorapertura)
{
	build (nombrefichero, errorapertura);
}

void GRAFO:: actualizar (char nombrefichero[85], int &errorapertura)
{
    //Limpiamos la memoria dinamica asumida en la carga previa, como el destructor
    destroy();
    //Leemos del fichero y actualizamos G con nuevas LS y, en su caso, LP
    build(nombrefichero, errorapertura);
}

unsigned GRAFO::Es_dirigido()
{

}

void GRAFO::Info_Grafo()
{

}

void Mostrar_Lista(vector<LA_nodo> L)
{

}

void GRAFO :: Mostrar_Listas (int l)
{

}

void ListaPredecesores() //Recorre la lista de sucesores LS para construir la de predecesores, LP
{

}

void GRAFO::dfs_cc(unsigned i, vector<bool> &visitado) //Este recorrido estaá hecho adhoc para mostrar el ritmo de nodos visitados, para su uso en la construccion de Componentes Conexas
{
  
}

void GRAFO::ComponentesConexas()
{
  
}

void GRAFO::dfs_cfc(unsigned i, vector<bool> &visitado) //Este recorrido estaá hecho adhoc para mostrar el ritmo de nodos visitados, para su uso en la construccion de Componentes fuertemente Conexas
{

}

void GRAFO::dfs_postnum(unsigned i, vector<bool> &visitado, vector<unsigned> &postnum, unsigned &postnum_ind) //Este recorrido estaá hecho adhoc para calcular el orden postnumeración de los nodos
{

}

void GRAFO::ComponentesFuertementeConexas()
{

}

