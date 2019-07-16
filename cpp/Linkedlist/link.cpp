#include "iostream"
using namespace std;
typedef struct Node{
  int Data;
  struct Node *next;
}node;
 class link{
   node *begin,*end,*temp;
    public: link(){
           begin = NULL;
           end = NULL;
           temp = NULL;
      cout << "hello" << '\n';
      }
    public: void addLast(){
            int value;
            node *p = new node;
            cout << "Enter a Number \t";
            cin >> value;
            p->Data = value;
            p->next = NULL;
            if (begin == NULL) {
               begin = p;
               end = p;
               }
            else{
             end->next = p;
             end = p;
           }
         cout << p->Data << '\n';
       }
     public:void addFirst(){
             int value;
             node *p = new node;

             cout << "Enter a Number ";
             cin >> p->Data;
             cout << p->Data << '\n';
             //p->Data = value;
             p->next = NULL;
             if (begin == NULL) {
               begin = p;
               end = p;
              }
            else{
              p->next = begin;
              begin = p;
            }
        }
     public:void addAtIndex(int x){
        if (x<0){
       cout <<"you cant enter less than Zero" <<'\n';
           }
      else{
        int value;
        node *p = new node;

        cout << "Enter a Number ";
        cin >> p->Data;
        cout << p->Data << '\n';
        //p->Data = value;
        p->next = NULL;
        if (begin == NULL) {
          begin = p;
          end = p;
         }
       else{
          temp = head;
         int i =0;
         while (true) {
          temp = temp->next;
             if (i==x) {
               
               break
             }
          i++;
         }
         p->next = begin;
         begin = p;
       }
      }
     }
     public: void show(){
             temp = begin;
             if (temp==NULL){
                   cout << "you dont have any Element" << '\n';
             }
             else{
                 while (temp != NULL) {
                      cout <<temp->Data;
                      temp = temp->next;
             }
             }
    }

};
int main(int argc, char const *argv[]) {
         link obj;
         int option;
         while(true) {
              cout << "1 \t addFirst" <<endl;
              cout << "2 \t addLast" <<endl;
              cout << "3 \t addAtIndex" <<endl;
              cout << "4 \t show"<<endl;
              cout << "5 \t Exit"
              cin >> option;
              cout << option << '\n';
              switch (option) {
                case 1:
                  obj.addFirst();
                break;
                case 2:
                  obj.addLast();
                break;
                case 3:
                  obj.addAtIndex(x)
                break;
                case 4:
                  exit(0);
                break;
               }

         }
        return 0;
   }
