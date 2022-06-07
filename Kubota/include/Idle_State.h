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
