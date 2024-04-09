#include "../luckyhome/Monkey.h"

Monkey::Monkey() {
    setPrice(3);
    setName("monkey");
    setDescribe("价值2枚金币,如果老虎机面板上有空格,可以消除相邻的椰子（生成半个椰子）和半个椰子");
}

int Monkey::calculateMoney(std::vector<Thing*>* category, std::vector<Thing*>* playerScene, std::vector<Thing*>* playerItem) {//计算价值
    int value = 2;
    for (int i = 0; i < 20; i++) {
        if (isNear(i, this->getPosition())) {
            if ((*category)[i]->getName() == "coconut") {
                value += 10;
                (*category)[i] = new Halfcoconut();
                (*playerItem).push_back(new Halfcoconut());
            }
            else if ((*category)[i]->getName() == "halfcoconut") {
                value += 4;
                (*category)[i] = new Empty();
            }
        }
    }
    for (int i = 0; i < (*playerScene).size(); i++) {
        if ((*playerScene)[i]->getName() == "猴子奥利凡德") {
            value *= 2;
        }
    }

    return value;
}

Monkey* Monkey::createNewItem() {
    return new Monkey();
}

//void Monkey::setPosition(int newPosition) {
//    position = newPosition;
//}

bool Monkey::isNear(int position1, int position2) {
    if (abs(position1 - position2) == 6 || abs(position1 - position2) == 5 || abs(position1 - position2) == 4 || abs(position1 - position2) == 1)
        return true;
    return false;
}