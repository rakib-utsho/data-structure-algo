#include<stdio.h>
int main()
{
    int n, result;

    scanf("%d", &n);

    result = 0;

    for (int i=1; i<=n; i++){
    result = result + i;
    }

    // time complexity is O(2n) => 2O(n) => O(n)
    // the loop run number was depend on "n". so the time complexity is O(n)

    printf("Result is: %d", result);

    return 0;
}
