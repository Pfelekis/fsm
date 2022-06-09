/************************* FILE DESCRIPTION *********************************************
*	File: idle_state.cpp
*	Description: A simple implementation of idle state ErgoDrive. This state is active when ErgoDrive is OFF.
*   We exit this state when ErgoDrive is ON
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#include "Idle_State.h"
using namespace std;
Idle_State::Idle_State()
{
    //ctor
}

Idle_State::~Idle_State()
{
    //dtor
}
void Idle_State::enter()
{
    cout << "Idle State" << endl;
    update();
}
void Idle_State::update()
{
    char ans;
    while(true)
    {
        cout <<"1. ErgoDrive ON" <<endl;

        cin >> ans;
        switch(ans)
        {
            case '1':
                current=state1;
                return;
            case '2':
                current=idle_state;


        }

    }
}
void Idle_State::leave()
{

}


