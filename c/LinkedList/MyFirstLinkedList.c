#include<stdio.h>
#include<stdlib.h>
typedef struct NODE{
   int data;
   struct NODE *next;
 }node;
node *head, *tail;
int AddFirst();
int AddLast();
int AddIdexed(int index);
int DeleteFirst();
int DeleteLast();
int DeleteIndex(int index);

void show();
int AddFirst(){
       node *dyn = (node*)malloc(sizeof(node));
       scanf("%d",&dyn->data);
       dyn->next = NULL;
       if(head==NULL){
          head = dyn;
          tail = dyn;
         }
       else{
         dyn->next = head;
         head = dyn;
       }
}

 int AddLast(){
      node *dyn = (node*)malloc(sizeof(node));
      scanf("%d",&dyn->data);
      dyn->next = NULL;
      if (head==NULL) {
          head = dyn;
          tail = dyn;
     }
     else{
        tail->next = dyn;
        tail = dyn;
     }
 }
int i;
int AddIdexed(int index){
 printf("i need to  maintain %d\t",index);
    }
int DeleteFirst(){
    node *temp;
    if (head==NULL) {
      printf("Empaty\n");
    }
    else{

    temp = head->next;
    head = NULL;
    head = temp;
  }
}
int DeleteLast(){
  node *temp,*t;
  if (head==NULL) {
    printf("Empaty\n");
  }
  else{
    temp = head;
    while (temp->next != NULL) {
      t =  temp;
      temp = temp->next;
    }
      free(t->next);
      t->next = NULL;
  }
}
void show(){
node *temp = head;
    while (temp!=NULL) {
       printf("%d\t",temp->data);
       temp = temp->next;
    }
    printf("\n");
}
int DeleteIndex(int index){
  node *t,*temp=head;
  int i = 0;

  while (temp!=NULL){

    if (i==index) {
        t->next = temp->next;
        // #free(temp);
        // #temp =NULL;
       }
       t= temp;
       temp = temp->next;
    i++;
  }
}
 int main(int argc, char const *argv[]) {
    int option,x;
    while (1) {
          printf("1 \tAddaFirst \n");
          printf("2 \tAddaLast \n");
          printf("3 \tAddaIndexed \n");
          printf("4 \tDeleteFirst \n");
          printf("5 \tDeleteLast \n");
          printf("6 \tDeleteaIndex \n");
          printf("7 \tshow\n");
          printf("8 \tEXIT\n");
          printf("please chhose option:\t");
          scanf("%d",&option);
          switch (option) {
            case 1:
               AddFirst();
            break;
            case 2:
               AddLast();
            break;
            case 3:

                printf("Enter index");
                scanf("%d",&x);
                AddIdexed(x);
            break;
            case 4:
               DeleteFirst();
            break;
            case 5:
               DeleteLast();
            break;
            case 6:
                printf("Please Enter index number for delete ing Element");
               scanf("%d",&x);
               DeleteIndex(x);
            break;
            case 7:
              show();
            break;
            case 8:
            exit(0);
            break;
            default:
            printf("Please choose valid option \n");
            break;
          }
    }
    return 0;
}
