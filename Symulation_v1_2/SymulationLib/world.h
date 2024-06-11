// SPDX-FileCopyrightText: 2024 Michal Karwacki <email>
// SPDX-License-Identifier: Apache-2.0

#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <memory>

#include "object.h"

using std::vector;
using std::unique_ptr;

class World
{
public:
    vector<unique_ptr<Object>> Objects;
    Vector3d Gravity{0,-9.81,0};

public:
    void AddObject(Object& _object);
    void RemoveObject(unique_ptr<Object> _object);
    void Step(double dt);
};

#endif // WORLD_H
