#include<stdio.h>

int main()
{
    int n; scanf("%d",&n);
    for (int i = 1; i <= 10; i++){
        int multi = n * i;
        printf("%d * %d = %d\n", n, i, multi);
    }
    return 0;
}