/**
*this all about tree
* tree is an hircharical  data Stsuture  be can  creat tree Data Stucture with help of two thing
* first withe using arrays  or list conceptn
*  i am list this programe to implmenta  tree
**/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int Data;
    struct Node *left,*right;
}node;
    node *root =NULL;
    int addRight(int Number);
    int addLeft(int Number);
    int insert();
    void show();
 int main(int argc, char const *argv[]) {
       int option;
       while (1) {
     /* code */

     printf("1 for push \n");
     printf("2 for show \n");
     scanf("%d",&option);
     switch (option){
       case 1:
          insert();
       break;
       case 2:
         show();
       break;
       case 3:
         exit(0);
       break;
       default:
          printf("Please choose Valid option\n");
        break;
     }
   }

int insert(){
  int Number;
  node *p = (node*)malloc(sizeof(node));
  printf("Enter Number\n");
  scanf("%d",&Number);
  p->right = NULL;
  p->left =NULL;
  if (root == NULL) {
     p->Data=Number;
     root= p;
  }
}
else{
  node *temp = root;
  if (temp->Data < Number) {
    addRight(p,Number);
  }
  else if(temp->DataRight > Number){
      addLeft(p,Number);
  }
  else{
    printf("Please Enter bigger Number or lesser Number\n");
  }
}

  return 0;
}
int addRight(node *p, int Number){

      node *t, *temp =root;
      Data = Number;
      while (temp != NULL) {
         t = temp;
         temp = temp->right;
    }
    temp->right = p;




}
int addLeft(node *p, int Number){
  node *t, *temp =root;
  Data = Number;
  while (temp != NULL) {
     t = temp;
     temp = temp->left;
}
temp->right = p;

}

 void show(){
  node *temp_r = root;
  node *temp_l = root;
  while(1){
    if(temp_r != NULL){
         printf("%d",temp->Data);
         temp = temp->right;
    }
  if (temp_l != NULL){
      printf("%d",temp_l->Data);
       temp_l=->right;
    }




  }
