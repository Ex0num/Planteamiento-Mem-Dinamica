/*
 ============================================================================
 Name        : CLASE-PARCIALSIM-MEM-DINAMICA.c
 Author      : Gabriel Lopez G
 Version     :
 Copyright   : GLG
 Description : Hello World in C, Ansi-style
 ============================================================================

 Una empresa importadora que comercializa productos textiles, decide registrarlos de la siguiente manera:
      idProducto (numérico)
      descripción (alfanumérico)
      nacionalidad (teniendo en cuenta que cada país tiene su propio Id y descripción con su nombre)
      tipo (teniendo en cuenta de que este puede tener más características: Id, Marca, Fabrica y tipo de tela.)
      precio por unidad (numérico decimal)
	Realizar un programa que permita interactuar con un menú de usuarios con las
	 siguientes opciones:

	 1. ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando
	 haya espacio disponible en el array.
	 2. BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de
	 la lista, dejando espacio disponible para un nuevo producto.
	 3. MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá
	 modificar el precio o el tipo.
	 4. LISTADO Productos.
	 5. LISTADO ordenado por precio.
	 6. LISTADO ordenado por descripción
*/
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	#include "Producto.h"


	Producto* producto_new(void) //Funcion que crea nuevo (X)
	{
		Producto* auxProducto;
		auxProducto = (Producto*) malloc(sizeof(Producto));
		return auxProducto;
		return (Producto*) malloc(sizeof(Producto));
	}


	Producto* producto_newParam  (int idProducto, char* descripcion, int idNacionalidad, int idTipo, float precioPorUnidad) //Parametros de (X)
	{
		Producto* auxProducto = producto_new();
		if(auxProducto != NULL)
		{
			if  ( producto_setIdProducto )
				//Si dan mal los seteos de los pedido que fueron necesarios para crear un nuevo producto.
			{
				producto_delete(auxProducto); //Borro el producto (Osea libero la memoria pedida).
				auxProducto = NULL;
			}
		}
		return auxProducto;
	}

	int producto_delete (Producto* this) //Se libera el espacio requerido.
	{
		int retorno = -1;
		if(this != NULL)
		{
			free(this);
			retorno = 0;
		}
		return retorno;
	}


	int producto_setIdProducto(Producto* this, int idEmpleado) //Seteo y validacion del ID-Producto
	{
		int retorno = -1;
		if(this != NULL && isValidId(idEmpleado) == 0 )
		{
			this->idProducto = idEmpleado;
			retorno = 0;
		}
		return retorno;
	}



	int producto_getIdProducto(Producto* this, int* flagError) //Obtencion ID-Producto
	{
		*flagError = -1;
		int auxId = -1;

		if(this != NULL && flagError != NULL )
		{
			auxId = this->idProducto;
			*flagError = 0;
		}
		return auxId;
	}



	int isValidId(int idEmpleado) //Si el id vale mas que 0 es valido.
	{
		int retorno = -1;

		if (idEmpleado > 0)
		{
			retorno = 0;
		}

		return retorno;
	}













	/*

	int empleado_setNombre(Producto* this, char* nombre)
	{
		int retorno = -1;
		if(this != NULL && nombre != NULL && isValidNombre(nombre) )
		{
			strcpy(this->nombre,nombre);
			retorno = 0;
		}
		return retorno;
	}

	char* empleado_getNombre(Producto* this,int* flagError)
	{
		*flagError = -1;
		char* auxNombre= NULL;
		if(this != NULL && flagError != NULL )
		{
			auxNombre = this->nombre;
			*flagError = 0;
		}
		return auxNombre;
	}

	int isValidNombre(char* nombre)
	{
		return 1;
	}

	int empleado_setApellido(Producto* this, char* apellido)
	{
		int retorno = -1;
		if(this != NULL && apellido != NULL && isValidApellido(apellido) )
		{
			strcpy(this->apellido,apellido);
			retorno = 0;
		}
		return retorno;
	}



	char* empleado_getApellido(Producto* this,int* flagError)
	{
		*flagError = -1;
		char* aux= NULL;
		if(this != NULL && flagError != NULL )
		{
			aux = this->apellido;
			*flagError = 0;
		}
		return aux;
	}


	int isValidApellido(char* apellido)
	{
		return 1;
	}


	int empleado_setDni(Producto* this, char* dni)
	{
		int retorno = -1;
		if(this != NULL && dni != NULL && isValidDni(dni) )
		{
			strcpy(this->dni,dni);
			retorno = 0;
		}
		return retorno;
	}



	char* empleado_getDni(Producto* this,int* flagError)
	{
		*flagError = -1;
		char* aux= NULL;
		if(this != NULL && flagError != NULL )
		{
			aux = this->dni;
			*flagError = 0;
		}
		return aux;
	}


	int isValidDni(char* dni)
	{
		return 1;
	}

	*/



