#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define SWAP(a, b) do { int t; t = a; a = b; b = t;} while(0)

void selectSort(int * A, int n)
{
    for (int i=0; i<n-1; i++)
    {
        int min = i;
        for (int j=i+1; j<n; j++) 
        {
            if ( A[j] < A[min]) 
                min = j;
        }

        if ( i !=min )
            SWAP(A[i], A[min]);

        printf("[%d] ", i+1);
        for (int i=0; i<n; i++)
            printf("%d ", A[i]);
        puts("");
    }
}
int main(int argc, char ** argv)
{
    int a[5] = {5, 7, 6, 4, 3};
    selectSort(a, 5);

    return 0;
}

