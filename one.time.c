#include<stdio.h>
int main()
{
    int ar[100], arsum[100], i, j, sum=0, n, low, upper, T;
    printf("Take n:");
    scanf("%d", &n);
    printf("Take %d numbers:", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
        arsum[i]=sum;
    }
    printf("Take number of test cases: ");
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        printf("\n lower bound=");
        scanf("%d", &low);
        printf("\nupper bound=");
        scanf("%d", &upper);
        if(low >=1 && upper <=n)
        {
            if(low==1)
            {
                printf("\nSum is: %d\n", arsum[upper-1]);
            }
            else
            {
                sum=arsum[upper-1]-arsum[low-1-1];
                printf("\nSum is: %d\n", sum);
                sum=0;
            }
        }
    }
    return 0;
}
