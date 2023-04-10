#pragma once

#include "entt.hpp"

#include "Hazel/Core/Timestep.h"

namespace Hazel {

class Entity;

class Scene {
public:
    Scene();
    ~Scene();

    Entity CreateEntity(const std::string& name = std::string());
    void   DestroyEntity(Entity entity);

    void OnUpdate(Timestep ts);
    void OnViewportResize(uint32_t width, uint32_t height);

private:
    template <typename T>
    void OnComponentAdded(Entity entity, T& component);

private:
    entt::registry m_Registry;
    uint32_t       m_ViewportWidth = 0, m_ViewportHeight = 0;

    friend class Entity;
    friend class SceneHierarchyPanel; // 这里Scene咋知道 SceneHierarchyPanel的？ 链接的时候才会检查嘛
};

} // namespace Hazel