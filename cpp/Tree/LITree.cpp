#include<iostream>
using namespace std;
  class node{
          public:
            int data;
            node *left;
            node *right;
  };
class LITree{
  node *root;

   public:
      void Insert(){
        node *t,*temp, *p = new node();
        cin >> p->data;
        p->left = NULL;
        p->right = NULL;
        temp = root;
         t =root; 
      if (root == NULL) {
             root = p;
         }
   else if(t->data > p->data){
            while(temp->left != NULL) {
                 if (p->data < temp->data) {
                     temp = temp->right;
                    }
                 else{
                      temp = temp->left;
                  }
              }

          }
   else if(t->data < p->data){
          while (temp->right != NULL) {
                if (p->data > temp->data) {
                       temp = temp->right;
                       }
                 else{
                       temp = temp->left;
                     }
          }
             }
        }
        void show(){
             node *temp = root;
             while (temp != NULL) {
               if(temp->left !=NULL){
                    cout << temp->data<< '\n';
                    temp = temp->left;
              }
              
             }
              temp =root;
             while (temp !=NULL)
             {
               /* code */
               if (temp->right != NULL)
               {
                 /* code */
                 cout << temp->data << '\n';
                 temp = temp->right;
               }
             }
             

        }

 };
 int main(int argc, char const *argv[]) {
LITree obj;
int option;
  cout << "Enter Number" << endl;
  cin >> option;
  while (true) {
     switch (option) {
       case 1:
         obj.Insert();
      break;
      case 2:
         obj.show();
      break;
      default:
       cout <<"hello world" <<'\n';
     }



  }


     return 0;
}
