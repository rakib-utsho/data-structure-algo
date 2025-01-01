#include<stdio.h>
int main()
{
    int i, j, n, count;

    scanf("%d", &n);

    count = 0;
    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++){
                count = count +1;
            }
    }
    // time complexity = O(n^2)

    for (i = 0; i < n; i++){
        count = count +1;
    }
    // time complexity is O(n)

    // time complexity is O(n^2+n) but n^2 is significantly big then n and n^2 is faster then n
    // so time complexity is O(n^2)
    printf("n = %d, count =%d\n", n, count);

    return 0;
}
