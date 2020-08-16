// MM2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Engine.h"
#include "Sprite.h"

using namespace std;

int main()
{
    Engine engine;
    engine.initialize("Marshmallow Mayhem 1.1");
    
    Sprite testSprite = Sprite("../Assets/greenBackground.png", 0, 0);

    while (true)
    {
        engine.update();
        testSprite.update();
        engine.beginRender();
        testSprite.render();
        engine.endRender();
    }

    return 0;
}
