#include <iostream>
class BuboleSort{
public : void AccendingOrder(int arr[]) {
  int temp;
  int size = (int)sizeof(arr);
  std::cout << size << '\n';
        for (int i = 0; i < 9;  i++) {
            for (int j =0; j < 9-i; j++ ) {

                   if (arr[j+1] < arr[j] ) {
                        temp = arr[j+1];
                        arr[j+1] = arr[j];
                        arr[j] = temp;

                   }
            }
        }
        int i = 0;
        while(i <=5){
          std::cout << arr[i] << "\t";
          i++;
        }
}
public : void desindingOrder(int arr[]){
  int temp;
        for (int i = 0; i <9;  i++) {
            for (int j =0; j<9-i; j++ ) {

                   if (arr[j] < arr[j+1] ) {
                        temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;

                   }
            }
        }
        int i = 0;
        while(i<=5){
          std::cout << arr[i] << "\t";
          i++;
        }

}




};
int main(int argc, char const *argv[]) {
  int option;
  BuboleSort obj;
  while (1) {
      std::cout << "1 acendind" << '\n';
      std::cout <<"2 decnding order"  << '\n';
      std::cout << "3 exit" << '\n';
      std::cin >> option;
      int arr[]={100,2000,89,147,58,10000,897,-1,1000,1};
      switch (option) {
        case 1:
            obj.AccendingOrder(arr);
        break;
        case 2:
          obj.desindingOrder(arr);
        break;
        case 3:
        exit(0);
        break;
      }
   }
  return 0;
}
