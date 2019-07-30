#include<stdio.h>
void meregeSort()
{    int num,num1,i,j;  
    printf("pleas Enter Size of Arraya ");
        scanf("%d",&num);
        printf("pleas Enter Size of Another Arraya ");
        scanf("%d", &num1);
        int x[num], y[num], z[num + num1];
        for ( i = 0; i < num; i++)
        {    printf("pleas Enter value in first Arraya");
            scanf("%d",&x[i]);
        }

        for (i = 0; i < num1; i++)
        {
            printf("pleas Enter value in second Arraya");
            scanf("%d", &x[i]);
        }


        for ( i = 0; i < num; i++)
        {
           
           for ( j = 0; i < num1; i++)
           {
              
              z[i] = y[j];
                if (j>num && j<num+num1 )
                {
                    z[num+i] = x[j];
                }
           }
           
                
                
               // z[i] = x[i];
                
            
           }
           
               for (i = 0; i < num1 + num; i++)
               {
                   printf("%d \t", z[i]);
               }
        }


void main()
{
  meregeSort();
}
        
