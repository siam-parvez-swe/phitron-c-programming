#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d ", &A[i]);
    }
    int ind = 1;
    int small = A[1];
    int tem;
    for (int i = 1; i <= n; i++)
    {
        tem = A[i];
        if(small>tem){
            small = A[i];
            ind = i;
        }
    }
    printf("%d %d", small, ind);
    
    return 0;
}