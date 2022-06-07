#include "State2.h"
using namespace std;
State2::State2()
{
    //ctor
}

State2::~State2()
{
    //dtor
}

void State2::enter()
{
    cout << "State2" << endl;
    autofollow(true);
    update();
}

void State2::update()
{
    current=state3;
}

void State2::leave()
{
     cout << "Leaving state2" << endl;
    //probably can be used to free some space
}
