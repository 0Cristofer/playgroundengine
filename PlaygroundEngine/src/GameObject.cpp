#include "GameObject.h"

#include <iostream>

void PlaygroundEngine::GameObject::Update()
{
    std::cout<<"Running GO with Components: "<< _components.size() << '\n';

    for (auto& component : _components)
    {
        component->Update();
    }
}
