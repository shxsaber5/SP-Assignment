#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int r = 1; r <= n; r++){
        int a = 1;
        for(int c = 1; c <= r; c++){
            printf("%d ",c);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}