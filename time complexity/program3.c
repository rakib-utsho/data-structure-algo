#include<stdio.h>
int main()
{
    int n, result;

    scanf("%d", &n);

    result = 0;

    for (int i=1; i<=n; i++){
    result = result + i;
    }

    // time complexity is O(1) = Big O of 1

    printf("Result is: %d", result);

    return 0;
}
