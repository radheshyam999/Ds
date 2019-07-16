#include "stdio.h"
#include "stdlib.h"
typedef struct NODE{
     int Data;
  struct NODE *next;
  struct NODE *perv;
}node;
node *root;
int push(){
int value;
node *p = (node*)malloc(sizeof(node));
          scanf("%d",&value);
          p->Data = value;
        //  printf("%d\n",p->Data);
          p->next = NULL;
          p->perv = NULL;
          if (root == NULL){
               root = p;
            }
          else{
            node *r = root;
            while (r->next != NULL) {
              r = r->next;
              }
              r->next = p;
              p->perv = r;

          }
}
int show(){
    node *temp = root;
    while (temp != NULL) {
      printf("%d\t",temp->Data);
      temp = temp->next;
   }

}
int main(int argc, char const *argv[]){
         int option;
         while (1){
              printf("Enter 1 To Push \n");
              printf("Enter 1 To Dispalay \n");
              scanf("%d",&option);
              if(option == 1){
                   push();
                   }
               else{
                    show();
                   }
            }
  return 0;
}
