/*
For 1.3.1

*/

#include "stdio.h"
#include "stdlib.h"

int add(int x, int y){
	int sum;
	sum=x+y;
	return sum;
}

void main(){
	int z;
	z=add(1,2);		//在这行下断点,内存里面看ESP附近的情况,可以观察到函数传递参数的方式,从右到左,压栈操作.
	printf("z=%d\n",z);
}

