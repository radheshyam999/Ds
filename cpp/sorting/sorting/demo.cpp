#include<iostream>
int main(int argc, char const *argv[]) {
    int small,temp;
    int arr[] = {8,9,54,35,47,99,25};
    for (int i = 0;i < 6;  i++) {
      small = i;

       for (int j = i+1; j < 7;j++) {
              if (arr[j] < arr[small]) {
                  small = j;
              }
       if(i!=small){
              temp = arr[i];
              arr[i] = arr[small];
              arr[small] = temp;

              }
       }
    }
int i = 0;

while (i<7) {
  std::cout << arr[i] << '\t';
  i++;
}
  std::cout << '\n';
  int key=0,j=0;
  for (int i = 1; i < 6;i++) {
        key = arr[i];
        j = i;
        while (j > 0 && arr[j-1] > key) {
          arr[j-1] = arr[j];
          j--;
        }
        arr[j] = key;
  }
   i=6;
  while (i >= 0  ) {
    std::cout << arr[i] << '\t';
    i--;
  }
  return 0;
}
