#include "main.h"

int main (void) {
	char dummy;
	char * permiso, nombreArchivo;
	FILE * fd;
	printf("Hola che\n");
	Archivo* arch = initialize("archivox.txt");
	printf("%s\n",arch->nombreArchivo);

	printf("resultado: %d\n", arch->suma(1,2));
	printf("Ingresar permiso (read/write/append)\n");
	fgets(permiso, 7, stdin);
	scanf("%c", &dummy);
	fgets(nombreArchivo, 30, stdin);
	scanf("%c", &dummy);
	fd = arch->abrir(nombreArchivo, permiso);
	return 0;
}
