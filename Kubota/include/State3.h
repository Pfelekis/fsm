/************************* FILE DESCRIPTION *********************************************
*	File: State3.h
*	Description: Class structure of State3.
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#ifndef STATE3_H
#define STATE3_H

#include "State.h"
class State3: public State
{
    public:
        State3();
        virtual ~State3();

        void enter();
        void update();
        void leave();
};

#endif // STATE3_H
