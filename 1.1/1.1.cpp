/*
For Chapter 1.1

*/
#include "stdio.h"
#include "stdlib.h"

int gi,i;
void * address;
char code[16];


void * buildcode(){
	//char code[16];
	char *pcode=code;
	char *ret=code;

	code[0]=0xc7;
	code[1]=0x05;
	pcode+=2;
	*((int *)pcode)=(int)&gi;
	pcode+=4;
	*((int *)pcode)=18;
	pcode+=4;
	*pcode++=0xff;
	*pcode++=0x25;
	*((int *)pcode)=(int)&address;
	return code;
}

/*
void * buildcode2(){
	char * code=(char *)malloc(16);
	char *pMov=code;
	char *pJmp=code+10;
	char *pAddress;

	pMov[0]=0xc7;
	pMov[1]=0x05;
	pAddress=pMov+2;
	*((int *)pAddress)=(int)&gi;
	*((int *)pAddress+4)=18;
	pJmp[0]=0xff;
	pJmp[1]=0x25;
	*((int *)(&pJmp[2]))=(int)&address;
	return code;
}*/


void main(int argc, char* argv[]){
	//char code[16]="\xc7\x05\x03\x04\x05\x0a";
	void *codeaddr=buildcode();
	gi=0x12345678;
	_asm{
			mov address, offset _lb1
			//jmp address 
	}
	gi=12;
	printf("gi=%d\n",gi);
	_asm jmp codeaddr
	gi=13;
_lb1:
	printf("gi=%d\n",gi);
	//gi=12;
	getchar();
}

