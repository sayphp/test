#include <stdio.h>

#include "hello.h"

int main(void){
#ifdef HAVE_DMALLOC
echo(HAVE_DMALLOC);
#endif
	echo("\nThis is LoL!\n");
	return 0;
}
