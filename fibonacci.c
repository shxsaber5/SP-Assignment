#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int n0 = 0, n1 = 1;
    for (int i = 0; i < n; i++)
    {
        int next;
        printf("%d ", n0);
        next = n0 + n1;
        n0 = n1;
        n1 = next;
    }
    return 0;
}
