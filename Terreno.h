#ifndef TERRENO_H_
#define TERRENO_H_
#include "Lista.h"
#include "Parcela.h"

/*
 * Terreno contiene una lista de parcelas en las que el jugador podra desarrollar sus habilidades para
 * la huerta.
 */

class Terreno{

private:

	Lista<Parcela*>* listaDeParcelas;

	int cantidadDeParcelas;

	int bordeSuperior;

	int bordeInferior;

	int bordeDerecho;

	int bordeIzquierdo;


public:

	/*
	 * Pre:
	 * Post:Crea un terreno con todos sus atributos necesarios.
	 */
	Terreno(int cantidadDeParcelas);

	/*
	 * Pre:
	 * Post:Devuelve la coordenada en Y mas alta.
	 */
	int obtenerBordeSuperior();

	/*
	 * Pre:
	 * Post:Devuelve la coordenada en Y mas baja.
	 */
	int obtenerBordeInferior();

	/*
	 * Pre:
	 * Post:Devuelve la coordenada en X mas alta.
	 */
	int obtenerBordeDerecho();

	/*
	 * Pre:
	 * Post:Devuelve la coordenada en X mas baja.
	 */
	int obtenerBordeIzquierdo();

	/*
	 * Pre:
	 * Post:Devuelve la lista de parcelas.
	 */
	Lista<Parcela*>* obtenerListaDeParcelas();

	/*
	 * Pre:
	 * Post:Libera los recursos solicitados.
	 */
	~Terreno();

private:


	/*
	 * Pre:
	 * Post:Agrega la parcela a la lista de parcelas.
	 */
	void agregarParcela();

	/*
	 * Pre:
	 * Post:Busca el borde indicado, para luego ser utilizados por el dibujador.
	 */
	int generarBordeSuperior();

	/*
	 * Pre:
	 * Post:Busca el borde indicado, para luego ser utilizados por el dibujador.
	 */
	int generarBordeInferior();

	/*
	 * Pre:
	 * Post:Busca el borde indicado, para luego ser utilizados por el dibujador.
	 */
	int generarBordeDerecho();

	/*
	 * Pre:
	 * Post:Busca el borde indicado, para luego ser utilizados por el dibujador.
	 */
	int generarBordeIzquierdo();
};




#endif /* TERRENO_H_ */
