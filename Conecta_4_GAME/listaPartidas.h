#ifndef listaPartidas_h
#define listaPartidas_h
#include <iostream>
#include <string>
#include <fstream>
#include "partidas.h"

using namespace std;

const int MAXPART = 5;

typedef tPartida tListaPartida[MAXPART];

typedef struct{
	tListaPartida lisPar;
	int contador;
}tListaPartidas;

void guardar(tListaPartidas const &partidas, ofstream &archivo); /*Se encarga de guardar la partida, tiene como parametros de E/S las partidas
																 y el archivo*/
bool cargar(tListaPartidas &partidas, ifstream &archivo);/*Se encarga de cargar la partida, tiene como parametros de E/S las partidas
														 y el archivo*/
bool insertarPartida(tListaPartidas &partidas, tPartida const &partida, int &pos);/*Se encarga de insertar la partida, tiene como parametros de E/S
																				  las partidas el array partida, y la posicion*/
#endif