#include "../luckyhome/Monkey.h"

Monkey::Monkey() {
    setPrice(3);
    setName("monkey");
    setDescribe("��ֵ2ö���,����ϻ���������пո�,�����������ڵ�Ҭ�ӣ����ɰ��Ҭ�ӣ��Ͱ��Ҭ��");
}

int Monkey::calculateMoney(std::vector<Thing*>& category, std::vector<Thing*>& playerScene) {//�����ֵ
    int value = 2;
    for (int i = 0; i < 20; i++) {
        if (isNear(i, position)) {
            if (category[i]->getName() == "coconut") {
                value += 10;
                category[i] = new Halfcoconut();
            }
            else if (category[i]->getName() == "halfcoconut") {
                value += 4;
                category[i] = new Empty();
            }
        }
    }
    for (int i = 0; i < playerScene.size(); i++) {
        if (playerScene[i]->getName() == "���Ӱ�������") {
            value *= 2;
        }
    }

    return value;
}

Monkey* Monkey::createNewItem() {
    return new Monkey();
}

void Monkey::setPosition(int newPosition) {
    position = newPosition;
}

bool Monkey::isNear(int index, int position) {
    /*int row = position.getRow();
    int column = position.getColumn();
    int indexRow = index / 5;
    int indexColumn = index % 5;
    return (std::abs(row - indexRow) <= 1 && std::abs(column - indexColumn) <= 1);*/
    return false;
}