#include "PlaygroundEngine.h"

#include <iostream>

#include "World.h"

namespace PlaygroundEngine
{
    Engine::Engine()
    {
        std::cout<<"Creating engine"<< '\n';
        
        _currentWorld = std::make_unique<World>();
    }

    World* Engine::GetWorld() const
    {
        return _currentWorld.get();
    }

    void Engine::Run()
    {
        std::cout<<"Running Engine"<< '\n';
        _currentWorld->Run();
    }
}
