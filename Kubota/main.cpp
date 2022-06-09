/************************* FILE DESCRIPTION *********************************************
*	File: main.cpp
*	Description: Main function of the fsm. Here we create instances of all states and
*   move from state to state, in an infinite while loop.
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#include <iostream>
#include "State1.h"
#include "State2.h"
#include "State3.h"
#include "State4.h"
#include "Idle_state.h"
using namespace std;


State * State::state1 = new State1();
State * State::state2 = new State2();
State * State::state3 = new State3();
State * State::state4 = new State4();
State * State::idle_state = new Idle_State();


State * State::current =  State::idle_state;
State1 m1;

int main()
{

    cout << "Hello" << endl;
    while(true){
        State::current->enter();
    }
    return 0;
}
