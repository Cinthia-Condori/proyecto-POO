#pragma once
#include "Vehiculo.h"
using namespace System;
public ref class Persona:public Vehiculo{
	//Atributos
public:
	Vehiculo Vehiculo;
	String^ Nombre;
	String^ ApPaterno;
	String^ ApMaterno;
	String^ DNI;
	String^ Edad;
	String^ Genero;
	String^ Nro_Cel;
	String^ Direccion;
public:   //constructor
	Persona() {
		Vehiculo::Vehiculo();
		Nombre = "NN";
		ApPaterno = "NN";
		ApMaterno = "NN";
		DNI = "NN";
		Edad = "NN";
		Genero = "NN";
		Nro_Cel = "NN";
		Direccion = "NN";
	}
	Persona(String^ _Tipo, String^ _color, String^ _marca, String^ _modelo, String^ _anio, String^ _precio,String^ _Nombre,String^ _ApPaterno,String^ _ApMaterno,String^ _DNI,String^ _Edad,String^ _Genero,String^ _Nro_Cel,String^ _Direccion): Vehiculo(_Tipo,_color,_marca, _modelo,_anio, _precio) {
		Vehiculo.Tipo = _Tipo;
		Vehiculo.color = _color;
		Vehiculo.marca = _marca;
		Vehiculo.modelo = _modelo;
		Vehiculo.anio = _anio;
		Vehiculo.precio = _precio;
		Nombre = _Nombre;
		ApPaterno = _ApPaterno;
		ApMaterno = _ApMaterno;
		DNI = _DNI;
		Edad = _Edad;
		Genero = _Genero;
		Nro_Cel = _Nro_Cel;
		Direccion = _Direccion;
	}
	void setNombre(String^ _Nombre) {
		Nombre = _Nombre;
	}
	void setApPaterno(String^ _ApPaterno) {
		ApPaterno = _ApPaterno;
	}
	void setApMaterno(String^ _ApMaterno) {
		ApMaterno = _ApMaterno;
	}
	void setDNI(String^ _DNI) {
		DNI = _DNI;
	}
	void setEdad(String^ _Edad) {
		Edad = _Edad;
	}
	void setGenero(String^ _Genero) {
		Genero = _Genero;
	}
	void setNro_Cel(String^ _Nro_Cel) {
		Nro_Cel = _Nro_Cel;
	}
	void setDireccion(String^ _Direccion) {
		Direccion = _Direccion;
	}
	String^ getNombre() {
		return Nombre;
	}
	String^ getApPaterno() {
		return ApPaterno;
	}String^ getApMaterno() {
		return ApMaterno;
	}
	String^ getDNI() {
		return DNI;
	}
	String^ getEdad() {
		return Edad;
	}
	String^ getGenero() {
		return Genero;
	}
	String^ getNro_Cel() {
		return Nro_Cel;
	}
	String^ getDireccion() {
		return Direccion;
	}

};

