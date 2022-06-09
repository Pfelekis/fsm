/************************* FILE DESCRIPTION *********************************************
*	File: idle.h
*	Description: Class structure of idle state.
*
*	@author Felekis Panagiotis
*	@version 1.0  Tues 4/9/2022
*/
#ifndef IDLE_STATE_H
#define IDLE_STATE_H

#include "State.h"
class Idle_State: public State
{
    public:
        Idle_State();
        virtual ~Idle_State();

        void enter();
        void update();
        void leave() ;

    protected:

    private:
};

#endif // IDLE_STATE_H
