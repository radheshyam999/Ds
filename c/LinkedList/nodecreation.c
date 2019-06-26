#include <stdio.h>
#include <stdlib.h>
typedef struct mode { /**
* created  stucture used typedef to change name   in node
*there is two member first one is  int DataType
*second one is node type of Pointer   that is pointing Integer
  **/
  int Data;
  struct mode *link;
}node;
node *head,*tail,*temp;
void show(); // function decleration  here
node creatNode(){  /**
* creating  a function  return type of  that function is Node **/
   int x;
   node *p;
   p = (node *) malloc(sizeof(node)); /**
   *malloc function using to assiging  dyanamic memory allocation
   * sizeof that  memory is  equal to size of node
   * down side using trinary operater to  check  that memory is allacated or not
   **/
   char *c = p == NULL ? "not allocated": "allocated";
   /**
   *
   **/
   printf("%s\n",c);
   scanf("%d",&x);
   p->Data = x;// assigin  value here
   p->link = NULL;
   if (head == NULL)
    {    /**
      *if head  is equal to  NULL means  that in the list
      * there is only one  last node also  pointing to NULL
      **/
      head = p;
      tail = p;
     }
   else
   {
      /**
      *  if head is not equale to  null that means  there will be  more than one Element

      **/
     tail->link = p; //
     tail = p;
   }
if (head->link==tail->link) {
 printf("head and tail are equale");
}
else{
  printf("not equal\n");
}
}
void show() {
  temp = head;
  while (temp!=NULL) {
    printf("%d \t",temp->Data);
        temp = temp->link;
  }
}
// void add_start()
//   {    /**
//     *if head  is equal to  NULL means  that in the list
//     * there is only one  last node also  pointing to NULL
//     **/
//    int x;
//     node *p;
//     p = (node *) malloc(sizeof(node));
//     /**
//     *  if head is not equale to  null that means  there will be  more than one Element
//
//     **/
//     scanf("%d",&x);
//     p->Data =x;
//     p->link = NULL;
//     if (head == NULL) {
//       head = p;
//       tail = p;
//     }
//     else{
//    p->link = head; //
//    head = p;
// }
//
// }
int main(int argc, char const *argv[]) {

  int x;
  while(1){
     printf("\n");
  printf("1 creatNode\n");
  printf("2 show\n");
  printf("3 Exit\n");
  //printf("4 ADDB \n");
  scanf("%d",&x);
  switch (x) {
    case 1:
      creatNode();
      break;
    case 2:
       show();
      break;
    case 3:
      exit(0);
      break;
      // case 4:
      // add_start();
      // break;
   default:
    printf("Eneter Valid value\n");
    break;
  }}
  return 0;
}
