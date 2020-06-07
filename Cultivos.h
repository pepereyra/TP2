#ifndef CULTIVOS_H_
#define CULTIVOS_H_
#include "Lista.h"
#include "Cultivo.h"

/*
 * Donde se recopilan todos los objetos "Cultivo"
 */
class Cultivos{

	private:


	Lista<Cultivo*>* listaDeCultivos;

	public:

	/*
	 * Pre:
	 * Post:Crea una lista de cultivos.
	 */
	Cultivos();

	/*
	 * Pre:Recibe un puntero a un cultivo
	 * Post:Agrega el cultio a la lista de cultivos.
	 */
	void agregarCultivo(Cultivo*);

	/*
	 * Pre:
	 * Post:Devuelve la lista de cultivos.
	 */
	Lista<Cultivo*>* obtenerListaDeCultivos();


	/*
	 * Pre:
	 * Post:Libera los recursos solicitados.
	 */
	~Cultivos();

};



#endif /* CULTIVOS_H_ */
