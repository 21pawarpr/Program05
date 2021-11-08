/**********************************************
 * Node.h
 * Written by Prabhleen Pawar
 **********************************************/

#include <string>

#define NODE_MAX 1024
#define NODE_ERR -1

class tree;
inline int left(int pos) { return pos * 2 + 1; }
inline int right(int pos) { return pos * 2 + 2; }
class node
{
	friend class tree;
public:
	node(int arg = 0);
	~node();
	void put();
	void lmr(int pos);

private:
	node* left, * right;
	int val;
	node* current;
	string* map;
};