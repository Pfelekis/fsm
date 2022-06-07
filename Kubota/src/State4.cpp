#include "State4.h"
#include <unistd.h>
using namespace std;
State4::State4()
{
    //ctor
}

State4::~State4()
{
    //dtor
}

void State4::enter()
{
    cout << "State4" << endl;
    sprayer_mechanism(true);
    update();
}

void State4::update()
{
    sleep(10);
    current=idle_state;
}

void State4::leave()
{
    cout << "Leaving State4" << endl;
}
