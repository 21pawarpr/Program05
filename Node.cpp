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
node::node(int arg1)
{
    val = arg1;
    left = right = NULL;
}

/**********************************************
 * Destructor
 **********************************************/
node::~node()
{
    if (left != NULL)
        delete left;
    if (right != NULL)
        delete right;
}

 /****************************
  * lmr()
  ****************************/
void node::lmr(int pos)
{
    if (pos >= NODE_MAX || map[pos] == "")
    {
        return;
    }

    lmr(left(pos));
    //Display map
    cout << map[pos] << endl;
    lmr(right(pos));
}