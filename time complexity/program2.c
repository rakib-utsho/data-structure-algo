#include<stdio.h>
int main()
{
    int n, result;

    scanf("%d", &n);

    result = n * (n+1)/2; //assignment operation, 3 math operation,

    // time complexity is O(1) = Big O of 1

    printf("Result is: %d", result);

    return 0;
}
