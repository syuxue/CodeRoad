/*
For 1.3.7
*/

#include "stdio.h"
#include "stdlib.h"

struct myrd{	
	int i1;
	int i2;
	int i3;
};

myrd myfunc(){
	myrd r1;
	r1.i1=1;
	r1.i2=2;
	r1.i3=3;
	return r1;
}

void main(){
	myrd r;
	r=myfunc();

}
