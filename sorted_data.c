#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int cmpfunc(const void *a, const void *b)
{
   const long long int *A = a, *B = b;
   return (*A > *B) - (*A < *B);
}

int main() {
    FILE *fp = fopen("poop.txt", "r");
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    long long int num;
    long long int nums[50];
    char buf[150];
    char string[95];
    int i = 0;

    while(fgets(buf, sizeof buf, fp) != NULL) {
        sscanf(buf, "%llu %s", &num, string);
        nums[i] = num;
        i++;
    }

    clock_t t;
    t = clock();
    qsort(nums, 50, sizeof(long long int), cmpfunc);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // calculate the elapsed time
    printf("The program took %f seconds to execute\n", time_taken);
    
    for(int j = 0; j < 50; j++){
        printf("%llu\n", nums[j]);
    }

    fclose(fp);

    return 0;

}