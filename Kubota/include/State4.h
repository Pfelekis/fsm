/************************* FILE DESCRIPTION *********************************************
*	File: State4.h
*	Description: Class structure of State4.
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#ifndef STATE4_H
#define STATE4_H

#include "State.h"
class State4: public State
{
    public:
        State4();
        virtual ~State4();

        void enter();
        void update();
        void leave();
};

#endif // STATE4_H
