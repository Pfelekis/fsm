/************************* FILE DESCRIPTION *********************************************
*	idle_state.cpp
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
    current = state1;
}
void Idle_State::leave()
{

}


