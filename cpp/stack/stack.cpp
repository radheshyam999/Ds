#include <iostream>

//#include <algorithm>

using namespace std;

class sty {


	public: const static int size =5;
	public:  int top ;
	public:  int Array[size];
   //public: vector<int> v;
  public:sty(){
		top =-1;
	}

  public: void push(){
         int value;
       if (top == size-1){
              cout << "overflow" << '\n';
           }
      else{
           cout <<"Enter  a number to push it in array" << endl;
           cin >> value;
           Array[++top]= value;
          }



      }
public: void pop() {
        if (top == -1) {
             cout << "underflow" << '\n';
               }
        else
               {
                 top--;
               }

     }
public: void show() {
           if (top == -1) {
                 cout << "Emapaty" << '\n';
             }
         else{
                for (int i = 0; i < top; i++) {
                 cout << Array[i] << '\t';
                  }

              }
      }
};
int main(int argc, char const *argv[]) {
        sty obj;
        int option;
  // cout << obj.v.capacity() << '\n';
// cout << obj.v.max_size() << endl;
     while (true) {
          cout << "1 \t push" <<endl;
          cout << "2 \t pop" <<endl;
          cout << "3 \t show" <<endl;
          cout << "4 \t Exit"<<endl;
          cin >> option;
         switch (option) {
            case 1:
               obj.push();
            break;
            case 2:
                obj.pop();
            break;
            case 3:
                obj.show();
            break;
            case 4:
              exit(0);
            break;

          }

       }
           return 0;
}
