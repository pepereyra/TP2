#include "Cultivos.h"

Cultivos::Cultivos(){

	this->listaDeCultivos = new Lista<Cultivo*>;

}

void Cultivos::agregarCultivo(Cultivo* cultivoParaAgregar){

	this->listaDeCultivos->agregar(cultivoParaAgregar);

}

Lista<Cultivo*>* Cultivos::obtenerListaDeCultivos(){

	return this->listaDeCultivos;

}
