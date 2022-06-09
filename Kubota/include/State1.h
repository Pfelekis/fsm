#pragma once
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
