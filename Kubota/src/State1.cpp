/************************* FILE DESCRIPTION *********************************************
*	State1.cpp
*	Description: A simple implementation of State1 class. This file contains enter, update and leave method implematations
*   according to requirments.
*	
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#include "State1.h"
using namespace std;
State1::State1()
{
    //ctor
}

State1::~State1()
{
    //dtor
}

void State1::enter()
{
    cout << "State1" << endl;
    sprayer_mechanism(false);
    boom_mechanism(true);
    update();
}

void State1::update()
{
    current=state2;
}

void State1::leave()
{
    cout << "Leaving state1" << endl;
    //probably can be used to free some space
}
