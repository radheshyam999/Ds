#include <stdio.h>
#include <stdlib.h>
struct node
   {


   int data;
   struct node *next
   };
   struct node  *temp, *head, *taill;
   int value;
   //char ch;
   struct node *p, g;
   int AcessData()
   {
         p = (struct node *)malloc(sizeof(struct node));
         scanf("%d", &value);
         p->data = value;  // assigin  value to member of  of stucture data
         p->next = NULL;  //  next pointing to last elment
         if (head == NULL)
         {
            head = p;   // heding pointing to first  if it is null
            taill = p;  // tail pointing to first  if it is null
         }
         else
         {
            taill->next = p; //
            taill = p;
         }
}
int show(){
   temp = head;
   while (temp !=NULL)
   {
     printf("%d \t",temp->data);
     temp = temp->next;
   }

}

int main(){
  int value;
  while (1)
  {
   printf("\n");
   printf("1 \t Enter Number \n");
   printf("2 \t show \n");
   printf("3 \t Exit \n");
   scanf("%d",&value);
   switch (value)
   {
   case 1:
      AcessData();
      break;
   case 2:
     show();
      break;
   case 3:
      exit(0);
      break;

   default:
   printf("Eneter Valid Value");
     main();

   }

  }
}
