#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0){
        printf("%d is even number. \n", n);
    }else{
        printf("%d is odd number. \n", n);
    }
    //time complexity is O(1);
    // space complexity is O(1) . how much space it consume is not depend on n

    return 0;
}

