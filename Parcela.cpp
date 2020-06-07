#include "Parcela.h"
#include <iostream>
using namespace std;


Parcela::Parcela(int coordenadaX, int coordenadaY){
	this->coordenadaX = coordenadaX;
	this->coordenadaY = coordenadaY;
	this->cultivoSembrado = NULL;
	this->estaRegado = 0;
	this->sePuedeCosechar = 1;
	this->sePuedeRegar = 0;
	this->seRegoEnEsteTurno = 0;
	this->tieneCultivo = 0;
	this->turnosQuePasoSembrado = 0;
	this->turnosDesdeQueSeCosecho = 0;
}

bool Parcela::obtenerSiSeRegoEnEsteTurno(){
	if(this->sePuedeRegar == 0){
		return 0;
	}
	else{
		return 1;
	}
}

bool Parcela::obtenerSiTieneCultivo(){
	if(this->tieneCultivo == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int Parcela::obtenerTurnosQuePasoSembrado(){
	return this->turnosQuePasoSembrado;
}

bool Parcela::obtenerSiSePuedeCosechar(){
	if(this->sePuedeCosechar == 0 && this->tieneCultivo == 1){
		return 0;
	}
	else{
		return 1;
	}
}

bool Parcela::obtenerSiEstaRegado(){
	if(this->estaRegado == 0){
		return 0;
	}
	else{
		return 1;
	}
}

bool Parcela::obtenerSiSePuedeRegar(){
	if(this->sePuedeRegar == 0 && this->estaRegado == 0 && this->seRegoEnEsteTurno == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int Parcela::obtenerCoordenadaX(){
	return this->coordenadaX;
}

int Parcela::obtenerCoordenadaY(){
	return this->coordenadaY;
}

Cultivo* Parcela::obtenerCultivoSembrado(){
	return this->cultivoSembrado;
}

void Parcela::regar(){
	if(this->obtenerSiSePuedeRegar() == 1){
		this->estaRegado = 1;
		this->sePuedeRegar = 0;
		this->seRegoEnEsteTurno = 1;
	}
	else{
		cout << "no se puede regar" << endl;
	}

}


void Parcela::cosechar(){
	if(this->obtenerSiSePuedeCosechar() == 1 && this->cultivoSembrado->obtenerTurnosHastaCosecha() <= this->turnosQuePasoSembrado){
		this->sePuedeCosechar = 0;
		this->cultivoSembrado = NULL;
		this->tieneCultivo = 0;
		this->turnosQuePasoSembrado = 0;
		this->turnosDesdeQueSeCosecho = 1;

	}
	else{
		cout << "no se puede cosechar" << endl;
	}

}


void Parcela::sembrar(Cultivo* cultivoParaSembrar){
	if(this->obtenerSiSePuedeSembrar() == 1 && cultivoParaSembrar->obtenerTurnosDeRecuperacion() <= this->turnosDesdeQueSeCosecho){
		this->cultivoSembrado = cultivoParaSembrar;
		this->estaRegado = 0;
		this->sePuedeCosechar = 0;
		this->sePuedeRegar = 1;
		this->seRegoEnEsteTurno = 0;
		this->tieneCultivo = 1;
		this->turnosQuePasoSembrado = 1;

	}
	else{
		cout << "no se puede sembrar" << endl;
	}

}


void Parcela::pasarTurno(){

	this->estaRegado = 0;
	this->sePuedeRegar = 1;
	this->seRegoEnEsteTurno = 0;
	if(this->tieneCultivo == 1){
		this->turnosQuePasoSembrado ++;
	}
	if(this->tieneCultivo == 0 && this->turnosDesdeQueSeCosecho != 0){
		this->turnosDesdeQueSeCosecho ++;
	}

}

bool Parcela::obtenerSiSePuedeSembrar(){
	if(this->tieneCultivo == 0 && this->cultivoSembrado == NULL){
		return 1;
	}
	else return 0;
}

Parcela::~Parcela(){

}
