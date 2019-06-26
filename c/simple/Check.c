#include <stdio.h>
#include <stdlib.h>
typedef struct mode {
  char c;
  struct mode *link;
}node;
  node *head,*tail,*temp;
/***
*this prograame to entred  is Numbera are  char special chracracater
*
*
**/
void Creatnode(){
  node *p;
  char c, *d;
  p = (node *) malloc(sizeof(node));
  d = p==NULL ? "failed" :"allocated";
  printf("%s\n",d);
  scanf("%c",&c);
  p->c= c;
  // for checking these are specialchar or number  or characater
  // if (c>) {
  //   /* code */
  // } else if (/* condition */) {
  //   /* code */
  // } else {
  //   /* code */
  // }

  p->link = NULL;
  if (head == NULL) {
    head =p;
    tail = p;
  } else {
   tail->link = p;
   tail = p;
  }
  void Display() {
    temp = head;
    while (temp == NULL) {
    printf("%c\t",temp->c);
    temp = temp->link;
    }
  }
}
 int main(int argc, char const *argv[]) {
   int l;
   while (1) {
     /* code */

    printf("1\tCreatNode \n");
    printf("2\tshow \n");
    printf("1\tExit \n");
    scanf("%d\n",&l);
    switch (l) {
    case 1:
       Creatnode();
      break;
    case 2:
       Display();
      break;
  case 3:
   exit(0);
  break;
    }
    }
  return 0;
}
