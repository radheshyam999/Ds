       #include<iostream>
       using namespace std;
       int main(){
       	int size,search,index;
            cin>>size ;
            int arr[size];
            cin >>search;
            for(int i=0; i<size;i++){
				 cin>>arr[i];
               
               }
            for(int j = 0; j<size;  j++){
				 if(search==arr[j]){
					 index = j;
					  }

               }
             cout<<index;

       }


