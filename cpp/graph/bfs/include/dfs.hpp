#ifndef dfs_hpp
#define dfs_hpp
#include "node.hpp"
class dfs{
	public:
		dfs();
		virtual~dfs();
		void display();
		int letsexcute();
                node* Insert(node *p,int data);
		node *getNode(int data);                
 		    node *root;		
	

		




};
#endif
