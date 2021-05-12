	/*
	 * Empleado.h
	 *
	 *  Created on: May 11, 2021
	 *      Author: Mauro
	 */

	#ifndef PRODUCTO_H_
	#define PRODUCTO_H_
	typedef struct
	{
		int   idProducto;
		int   idNacionalidad;
		int   idTipo;
		char  descripcion[80];
		float precioPorUnidad;

	}Producto;



	/*
	Producto* empleado_new(void);
	Producto* empleado_newParam(char* nombre,char* apellido,char* dni,int idEmpleado);


	int producto_delete(Producto* this);

	int producto_setNombre(Producto* this, char* nombre);
	char* producto_getNombre(Producto* this,int* flagError);
	int isValidNombre(char*);

	int producto_setApellido(Producto* this,char* apellido);
	char* producto_getApellido(Producto* this,int* flagError);
	int isValidApellido(char*);

	int producto_setDni(Producto* this,char* dni);
	char* producto_getDni(Producto* this,int* flagError);
	int isValidDni(char*);

	int producto_setId(Producto* this,int idEmpleado);
	int producto_getId(Producto* this,int* flagError);
	int isValidId(int);

	/*

#endif /* PRODUCTO_H_ */

