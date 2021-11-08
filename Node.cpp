/**********************************************
 * Node.cpp
 * Written by Prabhleen Pawar
 **********************************************/


#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

#include "Node.h"

#define NODE_MAX 1024
#define NODE_ERR -1
/*******************************
 * Constructor
 *******************************/
node::node(string arg1)
{
    value = arg1;
    //Intialize to zero
    left = right = NULL;
}

/**********************************************
 * Destructor
 **********************************************/
node::~node()
{
    //Clean up
    if (left != NULL)
        delete left;
    if (right != NULL)
        delete right;
}

 /****************************
  * lmr()
  ****************************/
void node::lmr(ostream& out)
{
    //Automatically checks if it is null or not
    if (left != NULL)
    {
        //Recursive Call
        left->lmr(out);
    }
    if (right != NULL)
    {
        //Reucursive Call
        //Pass out for parameters
        right->lmr(out);
    }
}

/****************************
 * put()
 ****************************/
void node::put(ostream& out)
{
    cout << value; 
}