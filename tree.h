/**********************************************
 * Tree.h
 * Written by Prabhleen Pawar
 **********************************************/

#include <string>

#define TREE_MAX 1024
#define TREE_ERR -1


#include "Node.h"

class tree
{
    friend class node;
public:
    tree();                                     // Constructor
    ~tree();                                    // Destructor
    bool insert(string);                       // Insert into tree
    void show(string, ostream& out);            // Display in order
    bool find(int data);
private:
    string* root;
    string* map;
};