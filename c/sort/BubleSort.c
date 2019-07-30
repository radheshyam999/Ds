#include<stdio.h>
#include "stdlib.h"
int size;
void Assinding(int A[]);
void desinding(int A[]);
 int main(int argc, char const *argv[]) {
  printf("plese Enter size of array\n");
  scanf("%d",&size);
  int A[size];
  int i=0,k=0,option;
  while (i < size){
       printf("Enter Value");
       scanf("%d",&A[i]);
       i++;
      }
  for (int i = 0; i < size; i++) {
        printf("%d\t",A[i]);
       }
        while (1) {
         /* code */
             printf(" what you like to perform \n");
             printf("1 to Assinding order \n");
             printf("2 to desinding order \n");
             printf("3 to Exit \n");
             scanf("%d",&option);
             switch (option) {
                   case 1:
                       Assinding(A);
                    break;
                    case 2:
                        desinding(A);
                     break;
                     case 3:
                          exit(0);
                      break;
                      default:
                          printf("please chosse valiad option \n");
                      break;
              }
              for (int i = 0; i < size; i++) {
                      printf("%d\t",A[i]);
                }
      }
  }
void Assinding(int A[]){
  int temp=0;
      for (int j=0;j<size-1; j++) {
       for (int i = 0; i < size -j -1; i++) {
         if(A[i] > A[i+1]){
           temp =A[i];
           A[i] = A[i+1];
           A[i+1] = temp;
         }
       }
    }

}
void desinding(int A[]){
  int temp=0;
      for (int j=0;j<size-1; j++) {
       for (int i = 0; i < size -j -1; i++) {
         if(A[i] < A[i+1]){
           temp =A[i];
           A[i] = A[i+1];
           A[i+1] = temp;
         }
       }
    }
}
