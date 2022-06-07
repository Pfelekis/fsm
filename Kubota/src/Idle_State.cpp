#include "Idle_State.h"
using namespace std;
Idle_State::Idle_State()
{
    //ctor
}

Idle_State::~Idle_State()
{
    //dtor
}
void Idle_State::enter()
{
    cout << "Idle State" << endl;
    update();
}
void Idle_State::update()
{
    current = state1;
}
void Idle_State::leave()
{

}


