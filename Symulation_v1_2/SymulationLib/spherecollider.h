// SPDX-FileCopyrightText: 2024 Michal Karwacki <email>
// SPDX-License-Identifier: Apache-2.0

#ifndef SPHERECOLLIDER_H
#define SPHERECOLLIDER_H

#include <Eigen/Dense>

#include "collider.h"

using Eigen::Vector3cd;

class SphereCollider :  Collider
{
public:
    Vector3cd Center;
    double Radious;

    virtual CollisionPoints TestCollision(
        const Transform* transform,
        const Collider* collider,
        const Transform* colliderTransform
    )const override;
    virtual CollisionPoints TestCollision(
        const Transform* transform,
        const SphereCollider* sphere,
        const Transform* sphereTransform
    )const override;
    virtual CollisionPoints TestCollision(
        const Transform* transform,
        const PlaneCollider* plane,
        const Transform* planeTransform
    )const override;
};

#endif // SPHERECOLLIDER_H
