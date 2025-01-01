#include <stdio.h>

int main()
{
    int n, i, even[101];

    for(i = 0; i < 101; i++){
        even[i] = 0;
    }

    for(i = 0; i < 101; i += 2) {
        even[i] = 1;
    }

    scanf("%d", &n);

    if (even[n]){
        printf("%d is even number. \n", n);
    }else{
        printf("%d is odd number. \n", n);
    }
    //time complexity is O(n);
    // space complexity is O(n) . how much space it consume is depend on n

    return 0;
}

