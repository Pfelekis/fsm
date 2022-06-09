#pragma once
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
