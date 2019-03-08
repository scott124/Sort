#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void SWAP(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
void qsort_recursive(int arr[], int left, int right)
{
    int pivot, i, j;

    if (left >= right) return;

    pivot = arr[left];
    printf("%d\n", pivot);

    i = left;
    j = right;

    do {

        do { i++; }while (arr[i] < pivot);
        do { j--; }while (arr[j] > pivot);
        if (i < j) SWAP(&arr[i], &arr[j]);

    }while (i < j);

    SWAP(&arr[left], &arr[j]);
    qsort_recursive(arr, left, j-1);
    qsort_recursive(arr, j+1, right);
}
int main(int argc, char ** argv)
{
    int a[] = {77, 5, 37, 1, 61, 11, 59, 15, 48, 19};

    qsort_recursive(a, 0, sizeof(a)/sizeof(int));

    for (int i=0; i<sizeof(a)/sizeof(int); i++)
        printf("%d ", a[i]);

    return 0;
}

