/************************* FILE DESCRIPTION *********************************************
*	File: State2.h
*	Description: Class structure of State2.
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#ifndef STATE2_H
#define STATE2_H

#include "State.h"
class State2: public State
{
    public:
        State2();
        virtual ~State2();

        void enter();
        void update();
        void leave();
};

#endif // STATE2_H
