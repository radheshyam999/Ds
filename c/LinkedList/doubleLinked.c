#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int Data;
  struct Node *next;
  struct Node *prev;
}node;
node *root;
int add(){
   node *start = (node*)malloc(sizeof(node));
   scanf("%d",&start->Data);
   start->next = NULL;
   start->prev = NULL;
   if(root==NULL){
       root = start;
   }
   else{
	node *temp = root;
        while(temp->next!=NULL){
           temp =  temp->next;

       }
     temp->next = start;
     start->prev = temp;


   }

}

void show(){
  node *temp =root;
  while (temp != NULL){
    printf("%d \t",temp->Data);
    temp= temp->next;
    /* code */
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
      int option;
      while (1) {
        /* code */

        printf("1 for push \n");
        printf("2 for show \n");
        scanf("%d",&option);
        if (option ==1){
          /* code */
          add();
        }
        else{
          show();
        }
  }
  return 0;
}
