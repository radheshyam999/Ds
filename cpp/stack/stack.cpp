#include <iostream>
#include <vector>
//#include <algorithm>
using namespace std;
class stack {
  int SizeArray;
  public: vector<int> v;
  public: stack(){
  int SizeArray;
    cout << "What will be  size of Array" << '\n';
    cin >>SizeArray;
    //this.SizeArray =SizeArray;



  }
//public: void push(){v.push_start();}
//public: void pop() {}
//public: void show() {}
};
int main(int argc, char const *argv[]) {
  stack obj;
  int option;
  cout << obj.v.capacity() << '\n';
cout << obj.v.max_size() << endl;
while (true) {
cout << "1 \t push";
cout << "2 \t pop";
cout << "3 \t show";
cout << "4 \t Exit";
cin >> option;
switch (option) {
  case 1:
  push_stack(10);
  break;
  case 2:
  break;
  case 3:
  break;
  case 4:
  break;

}

}
  return 0;
}
