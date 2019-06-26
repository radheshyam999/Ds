a/**
* this linked list where  i use some logic to bulid linked list that could help me understand  linked and is way of working of linkedlist
************/

#include<stdio.h>
#include "stdlib.h"
typedef struct creatNode  {
  char Data;
  struct creatNode *next;

}node;
 node *begin,*end, *temp;

 node creatnodeAtBegin()
 { char value;
   node *dynamic = (node*)malloc(sizeof(node));
   char *p = dynamic == NULL? "failed": "allacated";
   printf("%s \n",p);
   printf("Enter data \t");
   scanf("%c",&value);
   dynamic->Data = value;
    dynamic->next = NULL;
   if (begin ==NULL) {
     begin = dynamic;
     end =  dynamic;
   }
   else{
     dynamic->next = begin;
     begin =  dynamic;
   }
 }
node creatnodeAtEnd(){
  char value;
    node *dynamic = (node*)malloc(sizeof(node));
    char *p = dynamic == NULL? "failed": "allacated";
    printf("%s \n",p);
    printf("Enter data \t");
    scanf("%c",&value);
    dynamic->Data = value;
     dynamic->next = NULL;
    if (begin == NULL) {
      begin = dynamic;
      end =  dynamic;
    }
    else{
    end->next = dynamic;
    end= dynamic;

    }
}
node creatnodeAtwhichPostion(){
printf("creatnodeAtwhichPostion");
}
node deletenodeAtBegin(){
printf("deletenodeAtBegin");
}
node deletenodeAtEnd(){
printf(" deletenodeAtEnd");
}
node deletenodeAtwhichPostion(){
printf("deletenodeAtwhichPostion");
}



void show(){
  printf("show \n");
temp = begin;
while (temp!=NULL) {
printf("%c \t",temp->Data);
 temp = temp->next;
}
printf("\n");
}
int main(int argc, char const *argv[]) {
  int option;
  while (1) {
    /* code */

   printf("1\tCreatNodeatBegin \n");
   printf("2\tCreatnodeAtEnd \n");
   printf("3\t creatnodeAtwhichPostion");
   printf("4\tdeleteNodeatBegin \n");
   printf("5\tdeleteNodeatend \n");
   printf("6\t deletnodeAtwhichPostion\n");
   printf("7 \t show \n");
   printf("8\tExit \n");
   scanf("%d\n",&option);
   switch (option) {
   case 1:
      creatnodeAtBegin();
     break;
   case 2:
      creatnodeAtEnd();
     break;
 case 3:
  creatnodeAtwhichPostion();
  break;
 case 4:

  deletenodeAtBegin();
 break;
 case 5:
 deletenodeAtEnd();
 break;
 case 6:
 deletenodeAtwhichPostion();
 break;
 case 7:
   show();
 break;
 case 8:
 exit(0);
 break;
   }
   }
  return 0;
}
