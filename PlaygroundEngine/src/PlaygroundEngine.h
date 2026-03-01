#pragma once

#include <memory>

namespace PlaygroundEngine
{
    class World;

    class Engine
    {
    public:
        Engine();

        [[nodiscard]] World* GetWorld() const;
        void Run();
        
    private:
        std::unique_ptr<World> _currentWorld;
    };   
}
