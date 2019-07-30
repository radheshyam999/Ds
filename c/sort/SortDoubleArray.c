#include<stdio.h>

void sort()
{

int tmp, l,x,i,j;

printf("pleas enter value");
scanf("%d",&x);
int a[x][x];


for ( i = 0; i < x; i++)
{
   for ( j = 0; j < x; j++)
    {
      scanf("%d",&a[i][j]); 
    }
  
}

for ( i = 0; i < x; i++)
{
    for ( j = 0; j < x; j++)
    {
        //tmp = a[i][j];
        l = j + 1;
        for (int k = i; k < x; k++)
        {
            while (l < x)
            {
                if (a[i][j] > a[k][l])
                {
                    tmp = a[k][l];
                    a[k][l] = a[i][j];
                    a[i][j] = tmp;
                }
                l++;
            }
            l = 0;
        }
    }
}

for (i = 0; i < x; i++)
{
    for (j = 0; j < x; j++)
    {
        printf("%d \t", a[i][j]);
    }
    printf("\n");
}
}

void main()
{
    sort();
}