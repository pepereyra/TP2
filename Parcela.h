#ifndef PARCELA_H_
#define PARCELA_H_
#include "Cultivo.h"


/*
 * Una parcela contiene los atributos de la misma, como sus coordenadas y el estado.
 */

class Parcela{

	private:

	bool seRegoEnEsteTurno;

	bool tieneCultivo;

	bool estaRegado;

	bool sePuedeCosechar;

	bool sePuedeRegar;

	Cultivo* cultivoSembrado;

	int turnosQuePasoSembrado;

	int turnosDesdeQueSeCosecho;

	int coordenadaX;

	int coordenadaY;

	public:


	/*
	 * Pre:
	 * Post:Crea una parcela con todos sus atributos necesarios.
	 */
	Parcela(int coordenadaX, int coordenadaY);

	/*
	 * Pre:
	 * Post:Devuelve las coordenadas en X de la parcela.
	 */
	int obtenerCoordenadaX();

	/*
	 * Pre:
	 * Post:Devuelve las coordenadas en Y de la parcela.
	 */
	int obtenerCoordenadaY();

	/*
	 * Pre:Hay un cultivo sembrado
	 * Post:En caso de que haya, devuelve un puntero al cultivo sembrado, sino no devuelve un puntero a NULL.
	 */
	Cultivo* obtenerCultivoSembrado();


	/*
	 * Pre:
	 * Post:Devuelve si se puede cosechar, osea si la parcela tiene cosecha y pasaron los turnos para que se pueda cosechar.
	 */
	bool obtenerSiSePuedeCosechar();

	/*
	 * Pre:
	 * Post:Devuelve si se puede regar, osea si la parcela tiene cosecha y no fue regada en este turno.
	 */
	bool obtenerSiSePuedeRegar();

	/*
	 * Pre:
	 * Post:Si no se rego en este turno, cambia el valor de seRegoEnEsteTurno.
	 */
	void regar();

	/*
	 * Pre:
	 * Post:Si el cultivo paso los turnos necesarios para que pueda ser cosechado, se cambia el valor de tieneCultivo, se puede regar, etc.
	 */
	void cosechar();

	/*
	 * Pre:
	 * Post:Si la parcela no tiene cultivo y pasaron los turnos necesarios para que se pueda sembrar, se cambian los valores correspondientes.
	 * el valor de
	 */
	void sembrar(Cultivo* cultivoParaSembrar);

	/*
	 * Pre:
	 * Post:Pasa el turno de esta parcela. Modificando valores con las consecuencias de pasar 1 turno.
	 */
	void pasarTurno();

	/*
	 * Pre:
	 * Post:Devuelve los turnos que paso sembrado con el cultivo.
	 */
	int obtenerTurnosQuePasoSembrado();



	private:

	/*
	 * Pre:
	 * Post:Devuelve si el cultivo fue regado en este turno
	 */
	bool obtenerSiSeRegoEnEsteTurno();

	/*
	 * Pre:
	 * Post:Devuelve si la parcela tiene un cultivo;
	 */
	bool obtenerSiTieneCultivo();


	/*
	 * Pre:
	 * Post:Devuelve si esta regado.
	 */
	bool obtenerSiEstaRegado();

	/*
	 * Pre:
	 * Post:Devuelve si se puede sembrar.
	 */
	bool obtenerSiSePuedeSembrar();


	/*
	 * Pre:
	 * Post:Libera los recursos tomados.
	 */
	~Parcela();

};





#endif /* PARCELA_H_ */
