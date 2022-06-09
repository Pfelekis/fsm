#pragma once
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
