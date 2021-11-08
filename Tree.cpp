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
    int i;
    map = new string[TREE_MAX];
    for (i = 0; i < TREE_MAX; i++)
        map[i] = "";
}

/****************************
 * Copy Constructor
 ****************************/
tree::tree(const tree& t)
{
    int i;
    map = new string[TREE_MAX];

    for (i = 0; i < TREE_MAX; i++)
    {
        map[i] = t.map[i];
    }
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
bool tree::insert(string s)
{
    //Declare pointers
    node* p = new node(val);
    node* q;

    //If root is nothing
    if (root == NULL)
    {
        
        root = p;
        delete p;
        return;
    }

    q = root;

    //Do while loop
    do
    {
        if (p->val <= q->val)
        {
            if (q->left == NULL)
            {
                q->left = p;
            }

            q->left = q;
        }
        else
        {
            if (q->right == NULL)
            {
                q->right = p;
            }

        }
    }

    while (p != q);

    //Clean up
    delete p;
    delete q;
}


/****************************
 * find()
 ****************************/
bool tree::find(int data)
{
    

}