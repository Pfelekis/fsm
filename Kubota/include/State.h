/************************* FILE DESCRIPTION *********************************************
*	File: State1.h
*	Description: Class structure of State1.
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#ifndef STATE_H
#define STATE_H
#include <iostream>

using namespace std;
enum position{A, Transport, B, C};
class State
{
    public:
        State();


        position Tractor_pos;
        virtual ~State();

        virtual void enter() = 0;
        virtual void update() = 0;
        virtual void leave() = 0;


        static State* current;
        static State* state1, *state2, *state3, *state4, *idle_state;
    protected:

        void boom_mechanism(bool lift);

        void sprayer_mechanism(bool spray);

        void autofollow(bool auto_follow);



};

#endif // STATE_H
