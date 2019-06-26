#include <stdio.h>
#include <stdlib.h>
typedef struct node{
  int Data;
  struct node *next;
}Node;
Node *head, *tail, *temp;
Node insertBegin(){
  int z;

  Node *p = (Node *)malloc(sizeof(Node));

  scanf("%d",&z);
   p->Data = z;
   p->next = NULL;
  if (head == NULL) {
    head = p;
    tail = p;
  }
  else
  {
    p->next = head;
    head = p;
  }

}
void show(/* arguments */) {
temp = head;
  while (temp != NULL) {
    printf("%d\t",temp->Data);
    temp = temp->next;
  }
}
 int main(int argc, char const *argv[]) {
 int option;
  while (1) {
    /* code */

  printf("1 \t begin\n");/* code */
  printf("2 \t show\n");
  scanf("%d",&option);
  if (option == 1) {
  insertBegin();
  }
  else{
    show();
  }
  }
  return 0;
}
