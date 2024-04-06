#include "../luckyhome/Rain.h"

Rain::Rain() {
    setPrice(2);
    setName("rain");
    setDescribe("��ֵ1ö��ң������Χ�л���ÿ�仨����2ö���");
}

int Rain::calculateMoney(std::vector<Thing*>& category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "flower" && isNear(i, position)) {
            price += 2;
        }
    }
    return price;
}

Rain* Rain::createNewItem() {
    return new Rain();
}

void Rain::setPosition(int newPosition) {
    position = newPosition;
}

bool Rain::isNear(int index, int position) {
    /*int row = position.getRow();
    int column = position.getColumn();
    int indexRow = index / 5;
    int indexColumn = index % 5;
    return (std::abs(row - indexRow) <= 1 && std::abs(column - indexColumn) <= 1);*/
    return false;
}