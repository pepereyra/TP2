#ifndef CULTIVO_H_
#define CULTIVO_H_
#include <string>


/*
 * Un cultivo contiene los datos de cada cultivo. Su costo, rentabilidad, tiempo de recuperacion
 * Unidades de riego por turno y el nombre del cultivo
 */

class Cultivo{

	private:

	std::string nombre;

	int costoDeSemilla;

	int turnosHastaCosecha;

	int precioDeVenta;

	int turnosDeRecuperacion;

	int unidadesDeRiegoNecesarias;

	public:


	/*
	 * Pre:
	 * Post:Crea un Cultivo en condiciones de ser usado.
	 */
	Cultivo(std::string nombre, int costoDeSemilla, int turnosHastaCosecha, int precioDeVenta, int turnosDeRecuperacion, int unidadesDeRiegoNecesarias);

	/*
	 * Pre:
	 * Post:Devuelve el nombre del cultivo.
	 */
	std::string obtenerNombreDeCultivo();


	/*
	 * Pre:
	 * Post:Devuelve el costo de la semilla.
	 */
	int obtenerCostoDeSemilla();

	/*
	 * Pre:
	 * Post:Devuelve la cantidad de turnos que necesitan transcurrir antes de poder ser cosechado.
	 */
	int obtenerTurnosHastaCosecha();

	/*
	 * Pre:
	 * Post:Devuelve el precio por el cual se vende la cosecha.
	 */
	int obtenerPrecioDeVenta();

	/*
	 * Pre:
	 * Post:Devuelve la cantidad de turnos necesarios antes de que se pueda volver a sembrar.
	 */
	int obtenerTurnosDeRecuperacion();

	/*
	 * Pre:
	 * Post:Devuelve la cantidad de unidades de riego necesarias para poder regarse.
	 */
	int obtenerUnidadesDeRiegoNecesarias();

	/*
	 * Pre:
	 * Post:Libera los recursos tomados.
	 */
	~Cultivo();


};


#endif /* CULTIVO_H_ */
