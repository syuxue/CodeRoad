/*
For 1.38. Overflow the stack.
*/

#include "stdio.h"
#include "stdlib.h"
static int i;			//��ο��Լ����ջ���?ò������ÿ�γ�����ֵ����һ��.

int next(int num){
	i=num;
	return next(num+1);
}

		

void main(){
	next(1);
}
