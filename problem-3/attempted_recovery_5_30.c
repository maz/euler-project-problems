#include <stdio.h>

#define MAGIC_NUMBER 13195


main(){

        long long theNum = MAGIC_NUMBER / 2;
        int counter = 0;
        int notFound = 1;
        while(notFound == 1){
                if(factorCheck(theNum) == 1){
                        //printf("Possible VICTORY!!! %lld\n",theNum);

                        if(primeCheck(theNum) == 1){
                                notFound = 0;
                                printf("SUCCESS!! %lld\n",theNum);
                                break;
                        }
                        else{
                                theNum--;
                        }

                }
                else{
                        theNum--;
                        counter++;
                        printf("Failure # %d\n",counter);
                }
        }
        return 0;

}

int primeCheck(long long candidate){ // checks to see if candidate is prime

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
int factorCheck(long long prelimResult){

        int main = MAGIC_NUMBER;
        if(main % prelimResult == 0){
                return 1;
        }
        else{
                return 2;
            }
}
                               
