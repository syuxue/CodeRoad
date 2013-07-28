/*
For 1.38. Overflow the stack.
*/

#include "stdio.h"
#include "stdlib.h"
static int i;			//如何可以计算出栈深度?貌似这样每次出来的值都不一样.

int next(int num){
	i=num;
	return next(num+1);
}

		

void main(){
	next(1);
}
