#include<stdio.h>

int main()
{
    int n, l, reverse = 0;
    scanf("%d",&n);
    while(n > 0){
        l = n % 10;
        reverse = reverse * 10 + l;
        n /= 10;
    }
    printf("%d",reverse);
    return 0;
}