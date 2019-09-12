#include<iostream>
#include"Union.hpp"
int main(int argc, const char** argv) {
    std::cout <<"i am main"<<std::endl;
     Union object;
       int i = 0,j=0;
       int size=0,size2=0;
       std::cout<<"Size of First Arr"<<std::endl;
       std::cin >>size;
       std::cout << "Size of second Arr" << std::endl;
       char A[size];
        char B[size2];
       while (true)
       {
           if(i<size){
               std::cin>>A[i];
               i++;
           }
           if (j<size2)
           {
               std::cin >>B[j];
               j++;
           }
           
       }
       
     object.LetFindUnion(A,B);
    //object.display();
        
    
    return 0;
}