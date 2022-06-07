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
