#include<stdio.h>
#include<stdlib.h>
  typedef struct mode 
    {
     int Data;
     //char  *game,*lame;
     struct mode *next;

   } node;
   node *head,*tail,*temp,*last;
   void show();
   void Delete();
   node creatnode()
    {  
        int x;
        char *lame;

        node *p;

        p = (node *)malloc(sizeof(node));

        lame = p==NULL? " not allocated": "allocated";

        printf("%s %d",lame,sizeof(node));

        scanf("%d",&x);

        p->Data =x;

        p->next= NULL;

        if(head == NULL)
          {
            head = p;

            tail =p;
          } 
       else
          {
            tail->next = p;

            tail = p;
          }
    }
    void show()
    {   
                temp = head;

            while (temp!=NULL)
               {
              printf("%d \t",temp->Data);

              temp = temp->next;
               }
        }
       void Delete()
       {    
           if (tail->next ==NULL)
           {   
               printf("%s",tail);

               tail =NULL;
           }
           
       }
    int main(int argc, char const *argv[])
       {
        int x;

        while(1){

        printf("\n 1 \t CreatNode \n");

        printf(" 2 \t show \n");

        printf(" 3 \t Delete \n");

        printf(" 4 \t Exit \n");

        scanf("%d",&x);

        switch (x)
       {
       case 1:

           creatnode();

           break;

     case 2:
             show();
           break;
       case 3:
           Delete();

            break;
        case 4:
        exit(0);
          break;
       default:
       printf("Pleas Enter Valid option");
           break;
       }
        }
        return 0;
    }
    
   

 