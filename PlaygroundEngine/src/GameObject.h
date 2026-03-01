#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "Component/ComponentBase.h"

namespace PlaygroundEngine
{
    class GameObject
    {
    public:
        void Update();
        
        template <typename T, typename... Args>
        requires(std::is_base_of_v<ComponentBase, T>)
        T* AddComponent(Args&&... args)
        {
            auto component = std::make_unique<T>(std::forward<Args>(args)...);
            auto componentPtr = component.get();
            _components.push_back(std::move(component));
            
            std::cout<<"Component added, total Components: "<< _components.size() << '\n';
            
            return componentPtr;
        }
        
    private:
        std::vector<std::unique_ptr<ComponentBase>> _components;
    };   
}
