/************************* FILE DESCRIPTION *********************************************
*	File: State1.h
*	Description: Class structure of State1.
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#ifndef STATE1_H
#define STATE1_H


#include "State.h"

class State1: public State
{
    public:
        State1();
        virtual ~State1();


        void enter();
        void update();
        void leave();

    protected:

    private:
};

#endif // STATE1_H
