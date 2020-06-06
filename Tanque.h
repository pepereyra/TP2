#ifndef TANQUE_H_
#define TANQUE_H_
/*
 * Tanque de agua, que es capaz de aumentar hasta N unidades de riego.
 */

class Tanque{
private:
	bool estaVacio;
	int unidadesDeRiegoActivas;
	int unidadesDeRiegoMaximas;
	int faseDeTanque;

public:


	/*
	 * Pre:
	 * Post:Crea un tanque con todos sus atributos necesarios.
	 */
	Tanque();

	/*
	 * Pre:Recibe las unidades de riego
	 * Post:Agrega agua al tanque
	 */
	void agregarAgua(int unidadesDeRiego);

	/*
	 * Pre:
	 * Post:Devuelve las unidades de riego disponibles
	 */
	int obtenerUnidadesDeRiegoDisponibles();

	/*
	 * Pre:
	 * Post:Se amplia el tanque.
	 */
	void ampliarTanque();


	/*
	 * Pre:Recibe las unidades de riego que se usan
	 * Post:Utiliza el agua.
	 */
	void utilizarAgua(int unidadesDeRiego);

};



#endif /* TANQUE_H_ */
