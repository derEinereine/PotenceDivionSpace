#include <stdio.h>
#include <math.h> // für pow()

#define LONG 10
#define BASIS 10
int iBasis = 5;
int iResult = 0;
int iResultX[LONG];

int iFaktor = 0;
int iExponent = 0;

int main(int argc, char *argv[]){

	printf("Dies ist eine Testumgebung!\n\r");
	
	for(int k = 2; k<=6; k++){

		for(int c = 2; c<=BASIS; c++){

			for(int i = 1; i <= LONG; i++){
				iResultX[c-1]=pow(c,i);
				//DEBUG LINE
				//printf("k:%d, c:%d, i:%d!\n\r",k,c,i);
				printf("%d\t",iResultX[c-1]);

			}
			printf("\n\r");

			for(int i = 1; i <= LONG; i++){
				iResultX[c-1]=pow(c,i);
				//DEBUG LINE
				//printf("k:%d, c:%d, i:%d!\n\r",k,c,i);
				printf("%d\t",iResultX[c-1]%k);
				
			}
			printf("\n\r");
		}
		printf("\n\r____________%d__________________\n\r ------------------------------ \n\r", k);

	}

	return 0;
}
