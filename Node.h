/**********************************************
 * Node.h
 * Written by Prabhleen Pawar
 **********************************************/

#include <string>

#define NODE_MAX 1024
#define NODE_ERR -1

class tree;

class node
{
	friend class tree;
public:
	node(string arg);            //Constructor
	~node();                     //Deooncstructor
	void put(ostream& out);      //Put function
	void lmr(ostream& out);      //LMR function

private:
	node* left, * right;
	string value;
	node* current;
	string* map;
};