/************************* FILE DESCRIPTION *********************************************
*	File: State3.cpp
*	Description: A simple implementation of State3 class. This file contains enter, update and leave method implematations.
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#include "State3.h"
using namespace std;
State3::State3()
{
    //ctor
}

State3::~State3()
{
    //dtor
}

void State3::enter()
{
    cout << "*************State3*************" << endl;
    autofollow(false);
    boom_mechanism(false);
    update();
}

void State3::update()
{
    char ans;
    while(true)
    {
        cout <<"1. Move to position C"<<endl
             <<"2. ErgoDrive Off"<<endl;

        cin >> ans;
        switch(ans)
        {
            case '1':
                current=state4;
                return;
            case '2':
                current=idle_state;
                return;


        }

    }
}

void State3::leave()
{
     cout << "Leaving state3" << endl;
    //probably can be used to free some space
}
