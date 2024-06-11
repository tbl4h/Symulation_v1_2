// SPDX-FileCopyrightText: 2024 Michal Karwacki <email>
// SPDX-License-Identifier: Apache-2.0

#include "object.h"

Object::Object()
{
    Position = Eigen::Vector3d::Zero();
    Velocity = Eigen::Vector3d::Zero();
    Force = Eigen::Vector3d::Zero();
    Mass = 0.0;

}

Object::Object(const Object& other)
{
    Position = other.Position;
    Velocity = other.Velocity;
    Force = other.Force;
    Mass = other.Mass;
}

Object::~Object()
{

}

Object& Object::operator=(const Object& other)
{
    Position = other.Position;
    Velocity = other.Velocity;
    Force = other.Force;
    Mass = other.Mass;
    return *this;
}

bool Object::operator==(const Object& other) const
{
    if(Position == other.Position && Velocity == other.Velocity &&
       Force == other.Force && Mass == other.Mass
    )
        return true;
    return false;
}

bool Object::operator!=(const Object& other) const
{
    if(*this == other)
        return false;
    return true;
}

Object::Object(Vector3d _Position, Vector3d _Velocity, Vector3d _Force, double _Mass){
    Position = _Position;
    Velocity = _Velocity;
    Force = _Force;
    Mass = _Mass;
}
