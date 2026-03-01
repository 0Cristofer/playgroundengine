#pragma once

#include <memory>

namespace PlaygroundEngine
{
    class World;

    class Engine
    {
    public:
        Engine();
        
        World* GetWorld();
        void Run();
        
    private:
        std::unique_ptr<World> _currentWorld;
    };   
}
