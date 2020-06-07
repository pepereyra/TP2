#include "Terreno.h"


Terreno::Terreno(int cantidadDeParcelas){

	this->cantidadDeParcelas = cantidadDeParcelas;
	this->listaDeParcelas = new Lista<Parcela*>;
	this->bordeDerecho = this->generarBordeDerecho();
	this->bordeIzquierdo = this->generarBordeIzquierdo();
	this->bordeInferior = this->generarBordeInferior();
	this->bordeSuperior = this->generarBordeSuperior();

}


int Terreno::obtenerBordeSuperior(){
	return this->bordeSuperior;
}

int Terreno::obtenerBordeInferior(){
	return this->bordeInferior;
}

int Terreno::obtenerBordeDerecho(){
	return this->bordeDerecho;
}

int Terreno::obtenerBordeIzquierdo(){
	return this->bordeIzquierdo;
}

void Terreno::agregarParcela(){

	for(int i = 0;i+1 == cantidadDeParcelas;i++){
		for(int x = 0;x == 5;x++){
			if(i<= cantidadDeParcelas){
				for(int y = 0;y == 5;y++){
					if(i<= cantidadDeParcelas){
						Parcela* parcelaParaAgregar = new Parcela(x, y);

						listaDeParcelas->agregar(parcelaParaAgregar);

						delete parcelaParaAgregar;

						i++;
					}
				}
				i++;
			}
		}
	}
}
