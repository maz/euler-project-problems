#include <stdio.h>

main(){

FILE *fp;
fp = fopen("./primeList.txt", "a"); // this opens the file

fprintf(fp,"testing\n");

fclose(fp); // closes the file

}
