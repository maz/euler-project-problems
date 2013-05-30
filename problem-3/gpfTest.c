/*
What is the largest prime factor of the number 600851475143 ?
*/



#include <stdio.h>
#define MAGIC_NUMBER 20028382 


main(){

	long theNum = (MAGIC_NUMBER);
	int notFound = 1;
	while(notFound == 1){
		if(primeCheck(theNum) == 1){
			notFound = 0;
			printf("VICTORY!!! %ld\n",theNum);
		}
		else{
			theNum--;
			printf("Failure # %ld\n",((MAGIC_NUMBER) - theNum));
		}
	}		
	return 0;

}

int primeCheck(long candidate){

	int index = 2; // this will be incremented
	int pass = 0; // 0 is false, 1 is true
	while((candidate % index != 0)){
		if(index >= (candidate / 2)){
			pass = 1;
                        break;
		}
		index++;
	}
	if(pass == 1){
		return 1; // 1 is true
	}
	else{
		return 0; // 0 is false
	}
}
