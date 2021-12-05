/**
 * @file robot.hpp
 * @author Dani Lerner (dalerner@umd.edu)
 * @brief Robot struct declaration
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021 TBD
 * 
 */
#pragma once

#include <array>

struct Robot {
    int id;
    std::array<double, 2> pos;
    bool assigned = false;
    Robot(int _id, std::array<double, 2>& _pos) {
        this->id = _id;
        this->pos = _pos;
    }
};