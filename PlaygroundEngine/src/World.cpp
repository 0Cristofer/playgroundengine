#include "World.h"

#include <iostream>

PlaygroundEngine::World::World()
{
    std::cout<<"Creating World"<< '\n';
}

PlaygroundEngine::GameObject* PlaygroundEngine::World::AddGameObject()
{
    _gameObjects.push_back(std::make_unique<GameObject>());
    
    std::cout<<"GO added, total GOs: "<< _gameObjects.size() << '\n';
    
    return _gameObjects.back().get();
}

void PlaygroundEngine::World::Run()
{
    std::cout<<"Running World with GOs: "<< _gameObjects.size() << '\n';
    
    for (auto& gameObject : _gameObjects)
    {
        gameObject->Update();
    }
}
