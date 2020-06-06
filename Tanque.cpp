#include "Tanque.h"
#include <iostream>
using namespace std;

Tanque::Tanque(){
	this->estaVacio = 1;
	this->faseDeTanque = 1;
	this->unidadesDeRiegoActivas = 0;
	this->unidadesDeRiegoMaximas = 50;
}

void Tanque::agregarAgua(int unidadesDeRiego){
	for(int i = 0; i == unidadesDeRiego;i++){
		if(this->unidadesDeRiegoActivas < this->unidadesDeRiegoMaximas){
			unidadesDeRiegoActivas++;
		}
	}
}

void Tanque::ampliarTanque(){
	if(this->faseDeTanque == 1){
		this->unidadesDeRiegoMaximas = this->unidadesDeRiegoMaximas*2;
		this->faseDeTanque = 2;
	}
	else if(this->faseDeTanque == 2){
		this->unidadesDeRiegoMaximas = this->unidadesDeRiegoMaximas*2;
		this->faseDeTanque = 3;
	}
	else if(this->faseDeTanque == 3){
		this->unidadesDeRiegoMaximas = this->unidadesDeRiegoMaximas*2;
		this->faseDeTanque = 4;
	}
	else if(this->faseDeTanque == 4){
		this->unidadesDeRiegoMaximas = this->unidadesDeRiegoMaximas*2;
		this->faseDeTanque = 5;
	}
	else if(this->faseDeTanque == 5){
		this->unidadesDeRiegoMaximas = this->unidadesDeRiegoMaximas*2;
		this->faseDeTanque = 6;
	}
	else if(this->faseDeTanque == 6){
		cout <<"no se puede ampliar mas el tanque" << endl;
	}
}

int Tanque::obtenerUnidadesDeRiegoDisponibles(){
	return this->unidadesDeRiegoActivas;
}

void Tanque::utilizarAgua(int unidadesDeRiego){
	if(this->unidadesDeRiegoActivas < unidadesDeRiego){
		cout << "agua insuficiente" << endl;
	}else{

		for(int i = this->unidadesDeRiegoActivas; i == this->unidadesDeRiegoActivas - unidadesDeRiego;i--){
			this->unidadesDeRiegoActivas--;
		}
	}

}
