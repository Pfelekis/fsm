/************************* FILE DESCRIPTION *********************************************
*	State2.cpp
*	Description: A simple implementation of State2 class. This file contains enter, update and leave method implematations.
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#include "State2.h"
using namespace std;
State2::State2()
{
    //ctor
}

State2::~State2()
{
    //dtor
}

void State2::enter()
{
    cout << "*************State2*************" << endl;
    autofollow(true);
    update();
}

void State2::update()
{
    char ans;
    while(true)
    {
        cout <<"1. Move to position B"<<endl
             <<"2. ErgoDrive Off"<<endl;

        cin >> ans;
        switch(ans)
        {
            case '1':
                current=state3;
                return;
            case '2':
                current=idle_state;
                return;


        }

    }
}

void State2::leave()
{
     cout << "Leaving state2" << endl;
    //probably can be used to free some space
}
