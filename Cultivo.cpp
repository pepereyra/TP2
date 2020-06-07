#include "Cultivo.h"

using namespace std;

Cultivo::Cultivo(string nombre, int costoDeSemilla, int turnosHastaCosecha, int precioDeVenta, int turnosDeRecuperacion, int unidadesDeRiegoNecesarias){

	this->nombre = nombre;
	this->costoDeSemilla = costoDeSemilla;
	this->turnosHastaCosecha = turnosHastaCosecha;
	this->precioDeVenta = precioDeVenta;
	this->turnosDeRecuperacion = turnosDeRecuperacion;
	this->unidadesDeRiegoNecesarias = unidadesDeRiegoNecesarias;

}

string Cultivo::obtenerNombreDeCultivo(){

	return this->nombre;

}

int Cultivo::obtenerCostoDeSemilla(){

	return this->costoDeSemilla;

}

int Cultivo::obtenerTurnosHastaCosecha(){

	return this->turnosHastaCosecha;

}

int Cultivo::obtenerPrecioDeVenta(){

	return this->precioDeVenta;

}

int Cultivo::obtenerTurnosDeRecuperacion(){

	return this->turnosDeRecuperacion;

}

int Cultivo::obtenerUnidadesDeRiegoNecesarias(){

	return this->unidadesDeRiegoNecesarias;

}

Cultivo::~Cultivo(){

}
