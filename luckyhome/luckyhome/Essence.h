#pragma once
#ifndef _ESSENCE_H_
#define _ESSENCE_H_
#include<map>
#include<string>
#include<iostream>
#include"../luckyhome/Thing.h"
#include<vector>
using namespace std;
//���ھ�������
class Essence {
protected:
	string name;
	int number;
	int price;
	string describe;
	int counter;
	int Accumulator;

public:
	//virtual void funct() = 0;//�麯������Ϊÿһ�����ߵĹ��ܲ�һ����ϣ�����������¶��塣�������಻����Ҳ���ᱨ�����Ҽ�const��
	Essence();
	Essence(string name, int number, int price, string describe, int counter, int Accumulator);

	string getName();
	void setName(string name);

	int getNumber();
	void setNumber(int number);

	int getPrice();
	void setPrice(int price);

	string getDescribe();
	void setDescribe(string describe);

	int getCounter();
	void setCounter(int counter);

	int getAccumulator();
	void setAccumulator(int Accumulator);

	bool Dodelete();//�����жϵ�ǰ�����Ƿ�Ӧ�ñ�ɾ��

	virtual int calculateMoney(int count);
	// ��Ʒ�ĳ�Ա����ʵ��
	virtual int calculateMoney(vector<Thing*>category);

	virtual Essence* createNewItem();
};

#endif
