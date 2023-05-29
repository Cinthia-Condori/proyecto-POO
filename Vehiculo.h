#pragma once
using namespace System;
public ref class Vehiculo{
public:
	//Atributos
	String^ Tipo;
	String^ color;
	String^ marca;
	String^ modelo;
	String^ anio;
	String^ precio;
public:  ///constructor
	Vehiculo() {
		Tipo = "NN";
		color = "NN";
		marca = "NN";
		modelo = "NN";
		anio = "NN";
		precio = "NN";
	}
	Vehiculo(String^ _Tipo,	String^ _color,String^ _marca,String^ _modelo,String^ _anio,String^ _precio) {
		Tipo = _Tipo;
		color = _color;
		marca = _marca;
		modelo = _modelo;
		anio = _anio;
		precio = _precio;
	}

	void setTipo(String^ _Tipo) {
		Tipo = _Tipo;
	}
	void setcolor(String^ _color) {
		color = _color;
	}
	void setmarca(String^ _marca) {
		marca = _marca;
	}
	void setmodelo(String^ _modelo) {
		modelo = _modelo;
	}
	void setanio(String^ _anio) {
		anio = _anio;
	}
	void setprecio(String^ _precio) {
		precio = _precio;
	}
	String^ getTipo() {
		return Tipo;
	}
	String^ getcolor() {
		return color;
	}
	String^ getmarca() {
		return marca;
	}
	String^ getmodelo() {
		return modelo;
	}
	String^ getanio() {
		return anio;
	}
	String^ getprecio() {
		return precio;
	}
};

