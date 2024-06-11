// SPDX-FileCopyrightText: 2024 Michal Karwacki <email>
// SPDX-License-Identifier: Apache-2.0

#ifndef COLLISIONPOINTS_H
#define COLLISIONPOINTS_H

#include <Eigen/Dense>

using Eigen::Vector3d;

class CollisionPoints
{
public:
    Vector3d A;
    Vector3d B;
    double Depth;
    bool HasCollision;
};

#endif // COLLISIONPOINTS_H
