#ifndef EJ2_H_
#define EJ2_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Archivo {
   char * nombreArchivo;
   int (*suma)();
   FILE (*abrir)();
   int (*fclose)();
} Archivo;
Archivo * initialize (const char * nombreArchivo);
int sumar (int a, int b);
FILE * abrir (const char * nombreArchivo, const char* permiso);

#endif
