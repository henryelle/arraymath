#include <stdio.h>
#include <math.h>
#define LIMIT 7

void InitArraySquared(int array[], int size);
void InitArrayDoubled(int array[], int size);
void PrintArray(int array[], int size);
void SumArrays(int arrayIn1[], int arrayIn2[], int arrayOut[], int size);
void MultArrays(int array1[], int array2[], int arrayOut[], int size);

int main(void)
{
    int squared[LIMIT];
    int doubled[LIMIT];
    int sum[LIMIT];
    int product[LIMIT];
    //i created two more variables to use in place of arrayOut[] in Mult and Sum

    InitArraySquared(squared, LIMIT);
    InitArrayDoubled(doubled, LIMIT);
    
    printf("Array 1:\n");
    PrintArray(squared, LIMIT);
    printf("Array 2:\n");
    PrintArray(doubled, LIMIT);

    printf("Sum of Array1 and Array2:\n");
    SumArrays(squared, doubled, sum, LIMIT);

    printf("Product of Array1 and Array2:\n");
    MultArrays(squared, doubled, product, LIMIT)
