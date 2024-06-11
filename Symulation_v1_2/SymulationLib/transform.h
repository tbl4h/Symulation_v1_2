// SPDX-FileCopyrightText: 2024 Michal Karwacki <email>
// SPDX-License-Identifier: Apache-2.0

#ifndef TRANSFORM_H
#define TRANSFORM_H

#include <Eigen/Dense>

using Eigen::Vector3d;

class Transform
{
public:
    Vector3d Possition;
    Vector3d Scale;
    Vector3d Rotation;
};

#endif // TRANSFORM_H
