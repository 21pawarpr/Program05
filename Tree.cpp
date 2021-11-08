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
    delete root;
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
    while (q != p)
    {
        //Check Left Side
        if (p->value <= q->value)
        {
            if (q->left == NULL)
            {
                q->left = p;
               
            }
            q = q->left;
        }
        //Check Right side
        else
        {
            if (q->right == NULL)
            {
                q->right = p; 
                
            }
            q = q->right;
        }
    }

    //Clean up
    delete q;
}


/****************************
 * find()
 ****************************/
bool tree::find(string value)
{
    
    //Pointer declarations
    node* q;

    //Check root
    if (root == NULL)
    {
        return false;
    }

    //Set q as root
    q = root;

    while (q->value != value)
    {
        //Values equal
        if (value == q->value)
        {
            return true;
        }
        //Less than situation
        else if (value <= q->value)
        {
            //If not found
            if (q->left == NULL)
            {
                return false;
            }
            q = q->left;
        }
        //More than
        else
        {
            //If not found
            if (q->right == NULL)
            {
                return false;
            }
            q = q->right;
        }
    }
}