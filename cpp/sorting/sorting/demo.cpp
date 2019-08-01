#include "iostream"
 int main(int argc, char const *argv[]) {
          int arr[]={10, -1, 200,2,89,5,0,100};
           int key,j;
           /**
           * insert
           *
           **/
          for (int i = 1; i < 8; i++) {
                key = arr[i];
                j = i;
                while (j > 0 && key < arr[j-1]) {
                        //arr[j] = key ;
                        arr[j] = arr[j-1];
                        j--;
                       }
                       if (j!=i) {

                         arr[j] = key ;
                       }

                         }
                         int i=0;
                         while (i <= 8) {
                           std::cout << arr[i] << '\n';
                          i++;
                         }



  return 0;
}
