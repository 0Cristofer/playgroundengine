#include "PlaygroundEngine.h"
#include "World.h"
#include "Component/TransformComponent.h"

int main(int argc, char* argv[])
{
    PlaygroundEngine::Engine engine;

    const auto world = engine.GetWorld();

    const auto gO1 = world->AddGameObject();
    auto transformComponent = gO1->AddComponent<PlaygroundEngine::TransformComponent>();
    transformComponent->Position = 2;
    
    engine.Run();
    
    return 0;
}
