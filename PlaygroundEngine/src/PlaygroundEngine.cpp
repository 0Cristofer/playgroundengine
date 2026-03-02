#include "PlaygroundEngine.h"

#include "Log.h"
#include "World.h"

namespace PlaygroundEngine
{
    Engine::Engine()
    {
        Log::Init();
        LOG_INFO("Creating engine");
        
        _currentWorld = std::make_unique<World>();
    }

    World* Engine::GetWorld() const
    {
        return _currentWorld.get();
    }

    void Engine::Run()
    {
        LOG_INFO("Running Engine");
        _currentWorld->Run();
    }
}
