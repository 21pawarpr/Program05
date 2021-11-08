/**********************************************
 * Tree Public
 * Written by Prabhleen Pawar
 **********************************************/

#define TREE_MAX 1024
#define TREE_ERR -1
#include <string>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

#include "tree.h"
#include "Node.h"


/****************************
 * tree()
 ****************************/
tree::tree()
{
    root = 0;
}

/****************************
 * Destructor
 ****************************/
tree::~tree()
{
    map = NULL;
    delete map;
}

/****************************
 * show()
 ****************************/
void tree::show(string order, ostream& out)
{
 
    //Check if root is anything
    if (root == NULL)
    {
        //Get out
        return;
    }
    if (order == "LMR")
    {
        root->lmr(out);
    }
   

}

/****************************
 * insert()
 ****************************/
bool tree::insert(string value)
{
    //Declare pointers
    node* q;
    node* p = new node(value);

    //If root is nothing
    if (root == NULL)
    {
        
        root = p;
        return;
    }
    //Walk through tree
    q = root;

    //While loop
    while (q != value)
    {
        //Check Left Side
        if (p->value <= q->value)
        {
            if (q->left == NULL)
            {
                q->left = p;
                q = q->left;
            }
        }
        //Check Right side
        else
        {
            if (q->right == NULL)
            {
                q->right = p; 
                q = q->right;
            }
        }
    }

    //Clean up
    delete q;
}


/****************************
 * find()
 ****************************/
bool tree::find(int data)
{
    

}