#include "TransformComponent.h"

#include <iostream>

void PlaygroundEngine::TransformComponent::Update()
{
    std::cout<<"Updating Transform with position: "<< Position << '\n';
}
