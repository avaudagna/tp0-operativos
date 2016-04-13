//1) Realizar las siguientes funciones (revisar qué funciones de Ansi C nos pueden ayudar):

#include <string.h>
#include <stdlib.h>
/* 
*   Retorna un String nuevo que es la concatenación
*   de los dos Strings pasados por parámetro
*   Ejemplo:
*   char* nombre = "Ritchie";
*   char* saludo = string_concat("Hola ", nombre);
*   =>
*   saludo = "Hola Ritchie"
*/
char* string_concat(const char* first, const char* second) {
	char* container;
	container = (char*) malloc(sizeof(char)*(strlen(first)+strlen(second)));
	if(container != NULL) {
		strcpy(container, first);
		return strcat(container,second);
	}
	return NULL;
}

/*
*   Asigna en el tercer parámetro, la concatenación
*   de los primeros dos Strings
*   Ejemplo:
*   char* nombre = "Ritchie";
*   char* saludo;
*   string_concat("Hola ", nombre, &saludo);
*   =>
*   saludo = "Hola Ritchie"
*/
void string_concat_dinamyc(const char* first, const char* second, char** third) {
	*third = (char*) malloc(sizeof(char) * strlen(string_concat(first, second)));
	if(*third != NULL) {
		*third = string_concat(first, second);
	}
}

/*
*   Separa el mail en un usuario y un dominio.
*   Ejemplo:
*   char* mail = "ritchie@ansic.com.ar";
*   char* user, dominio;
*   mail_split(mail, &user, &dominio);
*   =>
*   user = "ritchie"
*   dominio = "ansic.com.ar"
*/
void mail_split(const char* mail, char** user, char** domain) {
	char* dummy = NULL;
	dummy = (char*) malloc(sizeof(mail));
	strcpy(dummy,mail);
	dummy = strtok(dummy, "@");
	*user = (char*) malloc(sizeof(dummy));
    strcpy(*user, dummy);
    dummy = strtok(NULL, "@");
    *domain = (char*) malloc(sizeof(dummy));
    strcpy(*domain, dummy);
    //free(dummy);
}
