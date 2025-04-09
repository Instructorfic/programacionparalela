#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	printf("El ID del proceso es: %d\n:", (int)getpid());
	printf("El ID del proceso padre es: %d\n",(int)getppid());
	system("ls -l");
	system("top");
return 0;
}
