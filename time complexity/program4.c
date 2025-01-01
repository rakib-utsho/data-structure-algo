#include<stdio.h>
int main()
{
    int i, j, n, count;

    scanf("%d", &n);

    count = 0;

    for (i=0; i<=n; i++){
        for(j = 0; j < n; j++){
            count = count +1;
        }
    }
    // time complexity is O(n^2)
    // the loop run number was depend on "n". so the time complexity is O(n^2)

    printf("n = %d, count =%d\n", n, count);

    return 0;
}
