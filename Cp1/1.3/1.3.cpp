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
	z=add(1,2);		//�������¶ϵ�,�ڴ����濴ESP���������,���Թ۲쵽�������ݲ����ķ�ʽ,���ҵ���,ѹջ����.
	printf("z=%d\n",z);
}

