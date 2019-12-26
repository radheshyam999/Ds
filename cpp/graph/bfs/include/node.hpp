#ifndef node_hpp
#define node_hpp
class node{
	public :
		int data;
		node *right;
		node *left;
		node(int data);
		virtual~node();
    };
#endif
