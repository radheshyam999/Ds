#include<iostream>
#include "include/dfs.hpp"
#include "include/node.hpp"
using namespace std;
/*class node{
   	public:
		dfs *right;
		dfs *left;
        	int data;
 
		node(int data){
			this->data = data;
		}
};*/


   


	node* dfs::getNode(int data){
		dfs::root =new node(data);               
	        return root;
	
        	}
        

	node* dfs::Insert(node* ob,int data){
	       dfs object;  
	      	if(ob==NULL){ 
		       	               ob = object.getNode(data);	   
		       }
		  else if(ob->data >data){
		       ob = Insert(ob->left,data);
		      }
		  else{
		      ob = Insert(ob->right,data);
		  }
	       	
		
		
		
		return ob;
		}


int dfs::letsexcute(){
	dfs object;
	node *ob =NULL;
   ob = object.Insert(ob,10);
   ob = object.Insert(ob,1);
   ob = object.Insert(ob,11);
   ob = object.Insert(ob,671);
   ob = object.Insert(ob,2);



return 0;
}
 void dfs::display(){
  cout <<" hello i am display" << endl;

}


dfs::~dfs(){
 cout<< "I am distrucuter"<<endl;


}
