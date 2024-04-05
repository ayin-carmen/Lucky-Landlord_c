#pragma once
#ifndef STEELSAFE_H
#define STEELSAFE_H
#include <iostream>
#include <string>
#include "../luckyhome/Thing.h"
#include <vector>

class Steelsafe : public Thing {
public:
    Steelsafe();
    int calculateMoney(vector<Thing*>& category);
    Steelsafe* createNewItem();


};

#endif // !STEELSAFE_H