#include<iostream>
#include<vector>
using namespace std;
class Queues {

  public:  static const int max=5;
  public:  int arr[max];
  public:  int top , start ;
  public:   Queues(){
       top =-1;
       start = 0;
     }
     int push(){
        int value;
        if (top == max-1) {
          cout << "overflow" << endl;
         }
       else{
          cout << "Enter A Number";
          cin >> value;
          arr[++top] = value;

       }
     }
     int pop(){
       if (top == -1) {
         cout << "undeFlow";

       }
       else{
         start++;
       }

     }
     int show(){
       for ( int i=start; i<max;  i++) {
         cout << arr[i];
       }
     }


};
int main(int argc, char const *argv[]) {
  Queues acess;
  int option;
  while (true) {
    /* code */

cout << "1 \t push" << '\n';
cout << "2 \t pop" << '\n';
cout << "3 \t show" << '\n';
cout << "4 \t Exit" << '\n';
cin >> option;
switch (option) {
  case 1:
  acess.push();
  break;
  case 2:
  acess.pop();
  break;
  case 3:
  acess.show();
  break;
  case 4:
   exit(0);
   break;
}


}
  return 0;
}
