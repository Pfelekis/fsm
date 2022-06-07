#include "State.h"
using namespace std;

State::State()
{
    //ctor
}

State::~State()
{
    //dtor
}

void State::autofollow(bool auto_follow)
{
    if(auto_follow)
        cout << "Auto-follow is ON" << endl;
    else
        cout << "Auto-follow  is OFF" << endl;

    return;
}


void State::boom_mechanism(bool lift)
{
    if(lift)
        cout << "Boom Mechanism is lifted" << endl;
    else
        cout << "Boom Mechanism is lowered" << endl;
}

void State::sprayer_mechanism(bool spray)
{
    if(spray)
        cout << "The sprayer is ON" << endl;
    else
        cout << "The sprayer is OFF" << endl;
}
