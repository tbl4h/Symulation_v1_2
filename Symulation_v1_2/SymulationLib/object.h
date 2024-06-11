// SPDX-FileCopyrightText: 2024 Michal Karwacki <email>
// SPDX-License-Identifier: Apache-2.0

#ifndef OBJECT_H
#define OBJECT_H

#include <Eigen/Dense>

using Eigen::Vector3d;

class Object
{
public:
    Vector3d Position;
    Vector3d Velocity;
    Vector3d Force;
    double Mass;
public:
    Object();
    Object(const Object& other);
    ~Object();
    Object& operator=(const Object& other);
    bool operator==(const Object& other) const;
    bool operator!=(const Object& other) const;

    Object(Vector3d _Position, Vector3d _Velocity, Vector3d _Force, double Mass);

};

#endif // OBJECT_H
