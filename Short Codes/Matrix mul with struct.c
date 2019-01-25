#include<stdio.h>
struct Matrix
{
    double x[3][3];

};

typedef struct Matrix matrix;
void multiple(matrix A,matrix B)
{
    matrix multiply;
    int i,j,k,sum;
    for ( i = 0 ; i< 3 ; i++ )
    {
      for ( j = 0 ; j< 3; j++ )
      {sum = 0;
        for ( k = 0 ; k < 3 ; k++ )
        {
          sum = sum + A.x[i][k]*B.x[k][j];
        }

        multiply.x[i][j] = sum;

      }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%lf\t",multiply.x[i][j]);

        printf("\n");
    }
}


int main()
{
    matrix a,b;
    int i,j;
    printf("enter the first matrix ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%lf",&a.x[i][j]);
            printf("\n");
        }
    }
     printf("enter the second matrix ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%lf",&b.x[i][j]);
            printf("\n");
        }
    }

    multiple(a,b);
    return 0;
}
