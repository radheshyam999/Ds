#include <iostream>
using namespace std;
typedef struct NODE{
  int Data;
  struct NODE *next;
  struct NODE *prev;
}node;
class StartDeletOp{
node *root=NULL;
 public: int addFirst(){
   node *p = new node();
    cin >> p->Data;
    p->prev =NULL;
    p->next = NULL;
    if (root ==NULL) {
         root=p;
      }
    else{
    node *temp =  root;
while (temp->prev !=NULL) {
              temp = temp->prev;
        }
    //temp = temp->prev;

    //temp->p = p;
    p->next = temp;
    temp = p;
    root = temp;
    }
 }
 public: int addLast(){
   node *p = new node();
    cin >> p->Data;
    p->prev =NULL;
    p->next = NULL;
    if (root ==NULL) {
         root=p;
      }
    else{
    node *temp =  root;
    while (temp->next!=NULL) {
           temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
    }
 }
 public: int addAtIndex(int Index){
   node *p = new node();
    cin >> p->Data;
    p->prev = NULL;
    p->next = NULL;
    if (root ==NULL) {
         root=p;
      }
    else{
      if (Index >= 0) {


    node *t, *temp =  root;
    int i = 0;
    while (1) {
        t = temp;
        temp = temp->next;
        if (i==Index) {
           t->next = p;
           p->prev = t;
           temp->prev = p;
           p->next = temp;
            }
       i++;
    }

  }else{

    node *t, *temp =  root;
    int i = 0;
    while (1) {
        t = temp;
        temp = temp->prev;
        if (i==Index) {
           t->next = p;
           p->prev = t;
           temp->prev = p;
           p->next = temp;
            }
       i++;
    }


  }
    }
 }
 public: void DeleteFirst(){
  node *temp = root;
    if (temp == NULL){
            cout <<" You Dont Have Any Element to Remove" << '\n';
        }
    else{
      root =NULL;
      root =  temp->next;
    }

 }
 public: void DeleteLast() {
        node *t,*temp = root;
        if (temp == NULL){
             cout <<" You Dont Have Any Element to Remove" << '\n';
           }
      else{
          while (temp != NULL){
            t = temp;
            temp = temp->next;
          }
          t = NULL;
          temp->prev = NULL;
          temp = NULL;

      }
 }
 public: void DeleteAtIndex(int Index){
     node *t,*temp = root;
     if (Index >= 0) {
           if (temp == NULL){
                 cout <<" You Dont Have Any Element to Remove" << '\n';
              }
           else{
              while (temp->next != NULL){
                         t = temp;
                         temp = temp->next;
                       }
                         temp->prev =NULL;
                         temp =NULL;
                    }
       }
    else{
        int i =0;
        while (i >= Index) {
          if(temp->prev != NULL){

          }
        }



      }
}
 public:int show(){
     node *temp = root;
     while (temp != NULL) {
            cout << temp->Data << '\t';
            temp =  temp->next;
       }
}

/**
*class closed here
**/
};
int main(int argc, char const *argv[]) {
        int option,Index;
        StartDeletOp obj;

        cout << "1 addFirst" << '\n';
        cout << "2 addLast" << '\n';
        cout <<"3  addAtIndex" << endl;
        cout <<"4 DeleteFirst" << endl;
        cout <<"5 DeleteLast" << endl;
        cout <<"6 DeleteAtIndex" << endl;
        cout << "7 show" << endl;
        cout << "8 Exit" << '\n';
        while (1) {
        cin >> option;
        switch (option) {
          case 1:
              obj.addFirst();
          break;
          case 2:
              obj.addLast();
          break;
          case 3:
              cout << "Eneter Index Where you Like to Push Your Value" <<"\n";
              cin >> Index;
              obj.addAtIndex(Index);
          break;
          case 4:
            obj.DeleteFirst();
          break;
          case 5:
             obj.DeleteLast();
          break;
          case 6:
              cout << "Eneter Index Where you Like to Push Your Value" <<"\n";
              cin >> Index;
              obj.DeleteAtIndex(Index);
          break;
          case 7:
              obj.show();
          break;
          case 8:
               exit(0);
          break;
        }
        }
  return 0;
}
/***
* there some problem in addFirst  addAtIndex
**/
