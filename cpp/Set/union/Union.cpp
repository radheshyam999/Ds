#include<iostream>
#include"Union.hpp"
using namespace std;
Union::Union(){
    cout<<"hello i am conctrucuter" << endl;

}

char* Union::LetFindUnion(char A[], char B[]){
       Union object;
       int i =0;
       int j = 0;
       int temp =0;
       char unio[(int)(sizeof(A)/sizeof(*A)+(sizeof(B)/sizeof(*B)))];
       while (i<sizeof(B)/sizeof(*B))
       {    
           temp  = B[i];
           
           if(!object.isElementAvl(A, temp)){
                unio[i] = temp;
           }
        }
       object.display(unio);
       return unio;
    } 
bool Union::isElementAvl(char arr[], char Element)
{
    int i = 0;
    while (i < (int)(sizeof(arr) / sizeof(*arr)))
    {
        if (Element == arr[i])
        {
            return true;
        }
    }
    return false;
      }




int Union::display( char A[]){
      for (int i = 0; i < (int)(sizeof(A)/sizeof(*A)); i++)
       {
           cout << A[i];   
       }
       cout << endl;
      
 
return 0;
}




Union::~Union(){
    cout << "hello i am dctrucuter" << endl;
}