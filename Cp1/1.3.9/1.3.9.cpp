/*
For 1.3.9 Compare among Normal, Stdcall and Fastcall
If we do not need to use Variable parametre function, we can use _stdcall or _fastcall to enforce the speed.
PS: The time test method can be changed. 
*/

#include "testtime.h"
#include "stdio.h"
#include "stdlib.h"

//Normal Call
int add_normal(int a, int b){
	return a+b;
}

//Stdcall
int _stdcall add_std(int a,int b){
	return a+b;
}

int _fastcall add_fst(int a, int b){
	return a+b;
}

void test(int times){
	int i=0;

	//Normal call
	printf("Normal Call test for %d times:",times);
	timecntbegin();
	for(;i<times;i++){
		add_normal(1,2);
	}
	timecntend();
	printf("_Stdcall test for %d times:",times);
	timecntbegin();
	for(;i<times;i++){
		add_std(1,2);
	}
	timecntend();
	printf("_fastcall test for %d times:",times);
	timecntbegin();
	for(;i<times;i++){
		add_fst(1,2);
	}
	timecntend();
	printf("\n");
}


void main(){
	int i=4;
	int k=1000000;
	while(i--){
		test(k);
		k*=10;
	}
	system("pause");
}
