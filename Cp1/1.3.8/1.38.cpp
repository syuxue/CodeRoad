/*
For 1.38. Overflow the stack.
*/

#include "stdio.h"
#include "stdlib.h"
int i=0;			//��ο��Լ����ջ���?ò������ÿ�γ�����ֵ����һ��.

int next(int num){
	i++;
	return next(num+1);
}

		

void main(){
	next(1);
	printf("i=%d\n",i);
}
