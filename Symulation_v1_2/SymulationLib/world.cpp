// SPDX-FileCopyrightText: 2024 Michal Karwacki <email>
// SPDX-License-Identifier: Apache-2.0

#include "world.h"


void World::AddObject(Object& _object)
{
    Objects.push_back(std::make_unique<Object>(_object));
}

void World::RemoveObject(unique_ptr<Object> _object)
{
    Objects.erase(
    std::remove_if(Objects.begin(), Objects.end(),
            [&_object](const unique_ptr<Object>& obj) {
                        return obj.get() == _object.get();
                    }),
    Objects.end());
}

void World::Step(double dt)
{
    for(auto& obj : Objects){
        obj->Force += obj->Mass * Gravity;
        obj->Velocity += obj->Force / obj->Mass * dt;
        obj->Position += obj->Velocity * dt;

        obj->Force = Vector3d::Zero();
    }
}
