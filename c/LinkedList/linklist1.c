#include<stdio.h>
#include "stdlib.h"
typedef struct node{
    int value;
    char *c,*d;
    struct node *next;
}struc;
  struc *start,*end,*temp,*p;
  
  struc *CreatLinkList()
  {  int x;
      
       p = (struc *)malloc(sizeof(struc));
       p->d = p->c == NULL ? "Failed" : "Assigned";

       printf("%s %d", p->d, sizeof(p));

       scanf("%d", &x);

       p->value = x;
       printf("%d",p->value);
       p->next =NULL;
       
       
      if (start==NULL)
      {
          start =p;
          //end->next = p;
          end = p;
      }
      else
      {
          end->next=p;
          end = p;
      }
      
      
      return start;

    }
    int show(){
        temp = start;

        while (temp!=NULL)
        {
            printf("%d \t",temp->value);
            temp = temp->next;  
        }
        
    }
    int main(){
        int x;
        while (1)
        {
            printf(" \n1 \t Enter data");
            printf("2 \t Show data");
            scanf("%d", &x);
            if (x == 1)
            {
                CreatLinkList();
            }
            else
            {
                show();
            }
        }
        }
        
   