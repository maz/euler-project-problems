/*each new term in the Fibonacci sequence is generated by adding the previous two terms.
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <stdio.h>
main(){

    int count = 2;
    int curr = 3;
    int prev = 2;

    while(curr <= 4000000){

        int temp = curr;
        curr += prev;
        prev = temp;
        
        if(curr % 2 == 0){

           count += curr; 

        }

    }
    
    printf("the answer is: %d\n",count);
}