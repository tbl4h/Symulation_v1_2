// SPDX-FileCopyrightText: 2024 Michal Karwacki <email>
// SPDX-License-Identifier: Apache-2.0


#ifndef COLLIDER_H
#define COLLIDER_H

#include "collisionpoints.h"
#include "transform.h"

class SphereCollider;
class PlaneCollider;

class Collider
{
public:
    virtual CollisionPoints TestCollision(
        const Transform* transform,
        const Collider* collider,
        const Transform* colliderTransform
    )const = 0;
    virtual CollisionPoints TestCollision(
        const Transform* transform,
        const SphereCollider* sphere,
        const Transform* sphereTransform
    )const = 0;
    virtual CollisionPoints TestCollision(
        const Transform* transform,
        const PlaneCollider* plane,
        const Transform* planeTransform
    )const = 0;
};

#endif // COLLIDER_H
