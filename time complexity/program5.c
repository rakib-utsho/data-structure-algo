#include<stdio.h>
int main()
{
    int i, j, k, n, count;

    scanf("%d", &n);

    count = 0;
    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k < n; k++){
                count = count +1;
            }
        }
    }
    // time complexity is O(n^3)
    // count = n^3. so the time complexity is O(n^3)

    printf("n = %d, count =%d\n", n, count);

    return 0;
}
