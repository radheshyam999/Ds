#include <iostream>
class InsertionSort{
public: void Asc(int arr[],int size){
        int j,kt,temp;
        for (int i = 1; i < size; i++) {
          j = i;
          kt = arr[i];
           while (j > 0 && kt < arr[j-1]){

             arr[j] = arr[j-1];
             j--;

           }
       arr[j] = kt;
        }
        int i = 0;
        while(i <size){
          std::cout << arr[i] << "\t";
          i++;
        }
}
public: void Dsc(int arr[],int size){
  int j,kt,temp;
  for (int i = 1; i < size; i++) {
    j = i-1;
    kt = arr[i];
     while (j > 0 && kt > arr[j]){

       arr[j+1] = arr[j]  ;
       arr[j] = kt;
       j--;
     }
  }
  int i = 0;
  while(i <size){
    std::cout << arr[i] << "\t";
    i++;
  }

}
};

int main(int argc, char const *argv[]) {
  int option ,size=10;
  InsertionSort obj;
  while (1) {
      std::cout << "1 acendind" << '\n';
      std::cout <<"2 decnding order"  << '\n';
      std::cout << "3 exit" << '\n';
      std::cin >> option;
      int arr[]={100,2000,89,147,58,10000,897,-1,1000,1};
      switch (option) {
        case 1:
            obj.Asc(arr,size);
        break;
        case 2:
          obj.Dsc(arr,size);
        break;
        case 3:
        exit(0);
        break;
      }
   }
  return 0;
}
