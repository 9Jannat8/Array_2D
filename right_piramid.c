#include<stdio.h>
int main()
{
    int T, row, col, x1, x2, y1, y2, i, j, k, ar[100][100],sum=0;
    printf("Take numbers of rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("Take values of matrix\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &ar[i][j]);
        }
    }
    printf("Take number of test cases: ");
    scanf("%d", &T);

    for(i=1; i<=T; i++){
       printf("Take x1: ");
       scanf("%d", &x1);
       printf("Take y1: ");
       scanf("%d", &y1);
       printf("Take x2: ");
       scanf("%d", &x2);
       printf("Take y2: ");
       scanf("%d", &y2);
       if(x1<=x2 && y1<=y2){
        for(k=x1; k<=x2; k++){
            for(j=y1; j<=y2; j++){
            sum=ar[k][j]+sum;
        }
        }
       }
       printf("Case %d: %d\n", i, sum);
       sum=0;
    }
    return 0;
}
