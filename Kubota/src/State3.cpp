#include "State3.h"
using namespace std;
State3::State3()
{
    //ctor
}

State3::~State3()
{
    //dtor
}

void State3::enter()
{
    cout << "State3" << endl;
    autofollow(false);
    boom_mechanism(false);
    update();
}

void State3::update()
{
    current=state4;
}

void State3::leave()
{
     cout << "Leaving state3" << endl;
    //probably can be used to free some space
}
