#include<stdio.h>
#include<stdlib.h>
 void push();
 void pop();
 void add_start();
 void add_end();
 void add_indexed(int i);
 void delete_start() ;
 void delete_end();
 void delete_indexed(int x);
 void delete_element(char c);
 void show();

 typedef struct mode{
   /*
    *this is stucture variable on is for storing data and one for link 
    *
    * ****/
    int Data;
    struct mode *next;
   }node;

    node *begin,*end,*temp;

    void push(){
       int value; 
        node *p = (node) malloc(sizeof(node));
        
	char allo = p==NULL?"failed":"allocated"; 
        
	if(allo==""failed){
          
	    printf("memory allocation failed \n");
            exit(0)
          
	   }
        scanf("%d",&value);
        p->Data = value;
        p->next = NULL;

      if(begin==NULL){
	   begin =p;
	   end =p;

         }
      else{
        end->next =p;
	end=p;
      
      }


    }
 void  pop(){
  node lsd;
     if(head == NULL){
        printf("Don,t have any Element \n");
     
  }
     else 
     {   
	     
	     temp = head;
	     while(temp != NULL){
                   if(temp->next == NULL){
		        lsd = temp;
			temp = NULL;
                          
		   
		   }
		   else{

		     temp = temp->next;
                 }
          }
     }}
   void add_start(){
	   int value;
      node *p = (*node) malloc(sizeof(node));
      printf("Enter A Number");
      scanf("%d",&value);
      p->data = value;
      p->next = NULL;
      if(begin ==NULL){
            
        begin = p;
	end = p;

      }
      else{
             begin->next =p;
	     begin =p;

   
    
     
         

   
   
   
   }


   }	

void add_end(){

push();
}
void add_indexd(int i){
      int num =0;
      int value;
	 temp = head;
	 node *p = (node *) malloc(sizeof(node));

	while(temp !=NULL){
         
            if(num==i){
                scanf("%d",&value);
	          p->Data = value;
		
	    
	    }
           num++;
       }

}




