/************************* FILE DESCRIPTION *********************************************
*	State4.cpp
*	Description: A simple implementation of State4 class. This file contains enter, update and leave method implematations.
*	
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#include "State4.h"
#include <unistd.h>
using namespace std;
State4::State4()
{
    //ctor
}

State4::~State4()
{
    //dtor
}

void State4::enter()
{
    cout << "State4" << endl;
    sprayer_mechanism(true);
    update();
}

void State4::update()
{
    sleep(10);
    current=idle_state;
}

void State4::leave()
{
    cout << "Leaving State4" << endl;
}
