#include "State1.h"
using namespace std;
State1::State1()
{
    //ctor
}

State1::~State1()
{
    //dtor
}

void State1::enter()
{
    cout << "State1" << endl;
    sprayer_mechanism(false);
    boom_mechanism(true);
    update();
}

void State1::update()
{
    current=state2;
}

void State1::leave()
{
    cout << "Leaving state1" << endl;
    //probably can be used to free some space
}
