#pragma once
#ifndef BLACKPEPPER_K_H
#define BLACKPEPPER_K_H

#include "../luckyhome/Essence.h"

class BlackPepper_k : public Essence {
public:
    BlackPepper_k();
    int calculateMoney(int count);
    bool Dodelete();//�����жϵ�ǰ�����Ƿ�Ӧ�ñ�ɾ��
    BlackPepper_k* createNewItem();
};

#endif // BLACKPEPPER_K_H
