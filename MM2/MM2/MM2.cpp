// MarshmallowMayhem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Engine.h"


using namespace std;

int main()
{
    Engine engine;
    engine.Initialize("Marshmallow Mayhem 1.1");

    while (true)
    {
        engine.Update();
        engine.Render();
    }

    return 0;
}
