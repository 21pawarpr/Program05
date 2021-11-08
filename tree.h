/**********************************************
 * Tree.h
 * Written by Prabhleen Pawar
 **********************************************/

#include <string>

#define TREE_MAX 1024
#define TREE_ERR -1

inline int left(int pos) { return pos * 2 + 1; }
inline int right(int pos) { return pos * 2 + 2; }
#include "Node.h"

class tree
{
    friend class node;
public:
    tree();                                         // Constructor
    ~tree();                                       // Destructor
    tree(const tree&);                            // Copy Constructor
    bool insert(string);                         // Insert string into tree
    void show(string, ostream& out);            // Display in order
    bool find(int data);
private:
    string* root;

};