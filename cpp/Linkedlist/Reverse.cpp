#include <iostream>
using namespace std;
class node{
        public:
          int data;
          node *next;

          node *prev;
};


class Reverse {
  public:
    node *root;
    void AddFirst(){
      node *p  = new node();
      cin >> p->data;
      p->next = NULL;
      p->prev = NULL;

      if (root==NULL) {
         root = p;
      }
      else{
         node *temp = root;
          while (temp->prev != NULL) {
                 temp = temp->prev;

          }

          temp->prev = p;
          p->next = root;
          root = p;
      }
    }
  public:
    void AddLast(){
      node *p  = new node();
      cin >> p->data;
      p->next = NULL;
      p->prev = NULL;

      if (root==NULL) {
         root = p;
      }
      else{
         node *temp = root;
           while (temp->next != NULL) {
                 temp = temp->next;
           }
            temp->next = p;

    }


    }
 public :
    void show(){
      node *temp = root;
      while (temp !=NULL) {
            cout << temp->data << '\t';
            temp = temp->next;
          }
          cout << '\n';
    }

   public:
     void LetReverse(){
        if (root !=NULL) {
          /* code */
          node *reverse = root;


                  while (reverse->next != NULL) {
                         reverse = reverse->next;
                      }
             while (reverse != NULL) {
                       cout << reverse->data <<'\t';
                       reverse = reverse->prev;
                    }
                    cout << '\n';
              }
            }


};
int main(int argc, char const *argv[]) {
        Reverse obj;
        int option;
        while (true) {
          cout << "1 \t AddFirst" << '\n';
          cout << "2 \t AddLast" << '\n';
          cout << "3 \t show" << '\n';
          cout << "4 \t Reverse" << '\n';
          cout << "5 \t Exit" << '\n';
          cin >> option;
           switch (option) {
             case 1:
                 obj.AddFirst();
             break;
             case 2:
                obj.AddLast();
             break;
             case 3:
               obj.show();
              break;
              case 4:
                 obj.LetReverse();
              break;
              case 5:
                exit(0);
              break;
              default:
                cout << "hello" << '\n';
           }
}


  return 0;
}
