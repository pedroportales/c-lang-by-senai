#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int numCent = 1, numResult, numAnt = 0;
	
	printf("%d, ", numCent);
	
	for(int i = 0; i < 19; i++){
		numResult = numCent + numAnt;
		if(i == 18){
			printf("%d.\n", numResult);
		} else {
			printf("%d, ", numResult);
		}
		
		numAnt = numCent;
		numCent = numResult;
	
	}
	
	return 0;
}