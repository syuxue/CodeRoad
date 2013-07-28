
/*
For 1.2.2
*/

#include "stdio.h"
#include "stdlib.h"

int		i;
int		*pi;
short	*ps;
char	*pc;

void main(){
	pi=&i;
	ps=(short *)&i;
	pc=(char *)&i;
	*pi=0x1234;
	*ps=0x1234;
	*pc=0x12;

}



