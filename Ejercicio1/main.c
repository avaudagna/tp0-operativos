
#include "ej1.h"
#include <stdio.h>

int main (void) {

	char* container = NULL, user = NULL, domain = NULL;
	printf("1) %s\n", string_concat("Vamo a ", "calmarno"));
	string_concat_dinamyc("No me calmo ", "nada", &container);
	printf("2) %s\n", container);
	mail_split("vamo@calmarno.com", &user, &domain);
	printf("3) user:%s\ndomain:%s\n", user, domain);
	free(container);
	free(user);
	free(domain);
}
