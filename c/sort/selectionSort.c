#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
   int Ar[5],min,temp;

  for (int i = 0; i < 5; i++) {
    scanf("%d",&Ar[i]);
    //printf("%d \t",Ar[i]);
  }
  for (int i = 0; i < 5; i++) {
    //scanf("%d",&Ar[i]);
    printf("%d \t",Ar[i]);
  }
    printf("\n");
  for (int i = 0; i < 5-1; i++) {
       min = i;

      for (int j=i+1; j<5; j++) {
             if(Ar[j] < Ar[min]){
               min =j;
             }
          }
    temp = Ar[i];
    Ar[i] = Ar[min];
    Ar[min] =temp;
  }
  for (int i = 0; i < 5; i++) {
         printf("%d\t", Ar[i]);
  }
  return 0;
}
