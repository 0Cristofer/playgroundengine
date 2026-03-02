#include "TransformComponent.h"

#include "Log.h"

void PlaygroundEngine::TransformComponent::Update()
{
    LOG_TRACE("Updating Transform with position: {0}", Position);
}
