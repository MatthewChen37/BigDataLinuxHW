#include <stdio.h>
#include <stdlib.h>


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


main() {
    FILE *fp = fopen("poop.txt", "r");
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int num;
    int nums[50];
    char string[95];
    int i = 0;

    while((read = getline(&line, &len, fp)) != -1) {
        fscanf(line, "%d %s", num, string);
        nums[i] = num;
        printf("%d", nums[i]);
        i++;
    }

    




    fclose(fp);
}