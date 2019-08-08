#include "iostream"
class SelctionSort{
  public: void  asc(int arr[],int size){

       int small,temp;
       for (int i = 0; i < size-1; i++)
        {small = i;
              for (int j = i+1; j < size; j++){
                     if (arr[j] < arr[small]){
                          small = j;
                        }
                   }
          if (i != small) {
              temp = arr[i];
              arr[i] =arr[small];
              arr[small]= temp;
            }
          }
          int i = 0;
          while(i <size){
            std::cout << arr[i] << "\t";
            i++;
          }
     }
  public: void  dsc(int arr[],int size){
    int bigger,temp;
    for (int i=0; i<size-1; i++) {
       bigger =i;
       for (int j = i+1; j<size; j++) {
             if (arr[j] > arr[bigger]) {
               bigger = j;
             }

       }
       if (i != bigger) {
         temp = arr[i];
         arr[i] = arr[bigger];
         arr[bigger] = temp;
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
  SelctionSort obj;
  while (1) {
      std::cout << "1 acendind" << '\n';
      std::cout <<"2 decnding order"  << '\n';
      std::cout << "3 exit" << '\n';
      std::cin >> option;
      int arr[]={100,2000,89,147,58,10000,897,-1,1000,1};
      switch (option) {
        case 1:
            obj.asc(arr,size);
        break;
        case 2:
          obj.dsc(arr,size);
        break;
        case 3:
        exit(0);
        break;
      }
   }
  return 0;
}
