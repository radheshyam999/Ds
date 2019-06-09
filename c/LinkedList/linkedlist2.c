#include<stdio.h>
#include<stdlib.h>

typedef struct mode{
    int Data;
    char *d;
    struct mode  *next ;
    
}node;
   node *end, *start, *temp;
node *creatNode(){
    char *d;
    int value;
    node *p;
  p = (node *)malloc(sizeof(node));
  d = p==NULL ? "failed" : "allocated";
  printf("%s \t %d \n",d,sizeof(node));
  scanf("%d",&value);
  p->Data = value;
  //p->next =NULL;
   //end = NULL;
  if(start == NULL)
  {
      start = p;
      end = p;

  }else
  {  
     
     end->next =p;
     end = p;


  }
}
int show(){
temp = start;
while (temp != NULL)
 {
     printf("%d",temp->Data);
     temp = temp->next;
 }


}
int main(){
    int x;
   while (1)
   {
       printf("\n 1 \t creatNode \n");
       printf(" 2 \t show\n");
       printf("3 \t exit");
       scanf("%d", &x);
       switch (x)
       {
       case 1:
           creatNode();
           break;
       case 2:
           show();
           break;
       case 3:
           exit(0);
           break;

       default:
           printf("pleas Enter  valid value  ");

           break;
       }
   }
   
    
   
}