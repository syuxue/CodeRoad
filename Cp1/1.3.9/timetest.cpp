#include <time.h>
#include <stdio.h>

clock_t time_begin,time_end;

void timecntbegin(){
	time_begin=clock();
}

void timecntend(){
	time_end=clock();
	printf("\nCost %lf s\n",(double)(time_end-time_begin)/CLOCKS_PER_SEC);
}



