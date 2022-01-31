#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
struct timespec start,end;

double timeSpent(){
	return (end.tv_sec-start.tv_sec)+(end.tv_nsec-start.tv_nsec)/(pow(10,9)*1.0);
}
int main(int argc, char** argv){

	if(argc==1){
		puts("Not enough arguments :p");
		return 0;
	}	
	for(int i=1;i<argc;i++){	
		clock_gettime(CLOCK_REALTIME,&start);

		char command[50]="gcc ";
		strcat(command,argv[i]);
		strcat(command," -o tmp.out");
			
		system(command);

		clock_gettime(CLOCK_REALTIME,&end);

		printf("The elapsed time for %s is %f seconds\n", argv[i], timeSpent());
	}
	system("rm tmp.out");
	return 0;
}

