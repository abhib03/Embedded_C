#include<stdio.h>

int usingTemporaryVariable(int *x, int *y);
int withoutUsingTemporaryVariable(int *x, int *y);
int usingXOROperator(int *x, int *y);

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping: a = %d, b = %d\n",a,b);
    // Swapping using a temporary variable
    usingTemporaryVariable(&a,&b);
    printf("Numbers after swapping: a = %d, b = %d\n",a,b);
    // Swapping without using a temporary variableS
    withoutUsingTemporaryVariable(&a,&b);
    printf("Numbers after swapping again: a = %d, b = %d\n",a,b);
    // Swapping using XOR operator
    usingXOROperator(&a,&b);
    printf("Numbers after swapping using XOR: a = %d, b = %d\n",a,b);      
    return 0;
}

int usingTemporaryVariable(int *x, int *y){
    int temp;
    temp = *x; // Store the value of x in temp
    *x = *y;   // Assign the value of y to x
    *y = temp; // Assign the value of temp (original x) to y
    return 0;
}

int withoutUsingTemporaryVariable(int *x, int *y){
    *x = *x + *y; // Step 1: x now holds the sum of x and y
    *y = *x - *y; // Step 2: y now holds the original value of x
    *x = *x - *y; // Step 3: x now holds the original value of y
    return 0;
}

int usingXOROperator(int *x, int *y){
    *x = *x ^ *y; // Step 1: x now holds the result of x XOR y
    *y = *x ^ *y; // Step 2: y now holds the original value of x
    *x = *x ^ *y; // Step 3: x now holds the original value of y
    return 0;
}