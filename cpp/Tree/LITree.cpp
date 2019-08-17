#include<iostream>

using namespace std;
  class node{
          public:
            int data;
            node *left;
            node *right;
            node(int data){
              this->data =data;
              this->left =NULL;
              this->right =NULL;
            }
          };
class LITree{
  node *root;

   public:
     void Insert()
     {
  int value ;
  cin >> value;
       node *p = new node(value);
      //  p->data = value;
      //  p->right = NULL;
      //  p->left =NULL;
       
       if (root == NULL)
       {
         root = p;
         return;
       }
       node *temp = root;
       while (true)
       {

         if (value <= temp->data)
         {
           //temp = temp->right;
           if (temp->left == NULL)
           {
             temp->left = p;
             cout << "i am going to left" << endl;
             return;
           }
           else
           {
             temp = temp->left;
             //cout <<"i am going to left" <<endl;
           }
         }
         else if (value > temp->data)
         {
           //temp = temp->right;
           if (temp->right == NULL)
           {
             temp->right = p;
             cout << "i am going to right" << endl;
             return;
           }
           else
           {
             temp = temp->right;
             //cout << "i am going to right" << endl;
           }
         }

       } // while loop is completed 
       return;
    }
        void show(){
            node *t,*temp = root;
            t =root;
             while (true)
             {
                 if (temp->left != NULL)
                   {
                      cout << temp->data <<endl;              
                      temp = temp->left;                  
                   }
              else if (temp->right !=NULL){
                    cout << temp->data <<endl;
                    temp = temp->right;
               }
                else if(temp->right == NULL && temp->left == NULL){
                      cout << "traversal is over" <<endl;
                      return;
                     }
             }
      }
   };
 int main(int argc, char const *argv[]) {
   
   //int value;
   
   LITree obj;
   int option;
   cout << "Enter Number" << endl;
   
   while (true)
   {
     cout << "1 \t insert" << endl;
     cout << "2 \t show" << endl;
     cout << "3 \t Exit" << endl;
     cin >> option;
     switch (option)
     {
     case 1:
       //cin >> value;
       obj.Insert();
       break;
     case 2:
       obj.show();
       break;
     case 3:
          exit(0);
       break;
     default:

       cout << "hello world" << '\n';
       break;
     }
      }
   return 0;
 }
// these is tree traversael


