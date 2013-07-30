/*
For 1.38. Overflow the stack.
*/

#include "stdio.h"
#include "stdlib.h"
int i=0;			//如何可以计算出栈深度?貌似这样每次出来的值都不一样.

int next(int num){
	i++;
	return next(num+1);
}

		

void main(){
	next(1);
	printf("i=%d\n",i);
}
