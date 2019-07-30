#include <stdio.h>
#include<stdlib.h>
int j,temp;
int Array[] = {5,8,9,1,-100};
int main(){
for (int i = 0; i < 5; i++) {
  printf("%d\t",Array[i]);
}
printf("\n");
printf("Sorted\n");

for (int i = 1; i < 5; i++) {
  j = i-1;
  temp = Array[i];

}
  while (j>0 && Array[j] >Array[j+1]) {

         j--;


         }




return 0;
}
