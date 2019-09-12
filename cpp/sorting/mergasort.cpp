#include<iostream>

int merge(int Arr[], int start, int mid, int end);
int mergesort(int Arr[], int start, int end);
int main(int argc, const char** argv) {
    int arr[] = {5, 7, 1, 34, 0, 89, 4};
    int len = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,len);

    return 0;
}

int mergesort(int Arr[],int start,int end){
int mid;  
   if (start < end)
   {
       mid = (start+end)/2;
       mergesort(Arr,start,mid);
       mergesort(Arr,mid+1,end);
       merge(Arr,start,mid,end);

   }
   


}
int merge(int Arr[],int start,int mid,int end)
   {
   
   
   
   
   
   }