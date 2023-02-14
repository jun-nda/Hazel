#pragma once

#include "Entity.h"

namespace Hazel {
class ScriptableEntity {
public:
    template <typename T>
    T& GetComponent() {
        return m_Entity.GetComponent<T>();
    }

    virtual ~ScriptableEntity() {}

protected:
    virtual void OnCreate() {}
    virtual void OnDestroy() {}
    virtual void OnUpdate(Timestep ts) {}

private:
    Entity m_Entity; // Whe not inherit
    friend class Scene;
};
} // namespace Hazel