#include <stdio.h>
#include <unistd.h>
#include "malloc.h"


void main() {

	char *a = (char*)malloc(10);
	a[0] = 'h';
	a[1] = 'w';
	printf("%s\n", a);
	while(1) {
		sleep(2);
		break;
	}
	free(a);

}	
