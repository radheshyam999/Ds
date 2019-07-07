#include<stdio.h>
#include<stdlib.h>
#define max 5
 int push();
 int pop();
 int Display();
 int top =-1;
 int stack[max];
 int main(){
      int option;
      printf("1 \t push \n");
      printf("2 \t pop \n");
      printf("3 \t Display \n");
      printf("4 \t Exit \n");
      printf("choose option \t");
      scanf("%d",&option);
      while (1)
      {
          switch(option){
              {
              case 1:
                 push();
              break;
              case 2:
                 pop();
               break;
               case 3:
                  Display();
               break;
               case 4:
                  exit(0);
                break;
               default:
                 puts("pleas Enter valid value \n");
               break;
                }
          }
      }
    }
int push(){
      int Item;
      if (top == max - 1)
          {
            printf("overflow");
          }
       else
          {
           printf("push item");
           scanf("%d",&Item);
           stack[++top] =  Item;
           if (stack[top] == Item)
           {
              printf("Sucusfull \n");
           }

       }

  }  /* push  function is ended here */
int pop(){
    if (top  == -1)
        {
         printf("undeflow \n");
        }
    else
       {
        top--;
      }

  }  /*  pop method  ended here */

int Display(){
    if (top == -1)
        {
          printf("Empaty");
        }
    else
     {
        for (int i = 0; i <= top; i++)
              {
                printf("[%d] %d \n",i,stack[i]);
              }
      }
}
