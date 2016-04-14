#include "ej2.h"

int sumar (int a, int b) {
	return a+b;
}

Archivo * initialize (const char * nombreArchivo) {
	Archivo *a = (Archivo*) malloc(sizeof(Archivo));
	if(a != NULL) {
		a->suma = sumar;
		a->nombreArchivo = (char*) malloc(sizeof(nombreArchivo));
		if(a->nombreArchivo == NULL) {
			return NULL;
		}
		a->abrir = abrir;
		strcpy(a->nombreArchivo, nombreArchivo);
		return a;
	}
	return NULL;
}

FILE * abrir (const char * nombreArchivo, const char* permiso) {
	char c = '';
	switch(permiso) {
			case "read":
				c = 'r';
			case "write":
				c = 'w';
			case "append":
				c = 'a';
				return fopen(nombreArchivo,c);
				break;
			default:
				return NULL;
				break;
		}
}
