#include "../luckyhome/thingTraversal.h"

void thingTraversal(vector<Thing*>* initalizeItem, vector<Thing*>* punchboardItem, vector<Props*>* playerScene,  vector<Thing*>* playerItem, int dailyMoney)
{
	size_t length = (*playerItem).size();

	while (length >= 20)
	{
		(*playerItem).push_back((*initalizeItem)[7]);
	}
	srand(time(0));
	int n = (*playerItem).size();
	int m = 20;
	for (int i = 0; i < m; ++i)
	{
		int randomIndex = rand() % n;
		Thing* randomElement = (*playerItem)[randomIndex];
		if (find((*punchboardItem).begin(), (*punchboardItem).end(), (*punchboardItem)) == (*punchboardItem).end()) 
		{
			(*punchboardItem).push_back(randomElement);
		}
		else
		{
			m++;
		}
	}
	for (int i = 1; i <= 4; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			dailyMoney += ((*punchboardItem)[j] -> calculateMoney((*punchboardItem)));
			((*punchboardItem)[j]->calculateMoney((*punchboardItem)));
			dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem));
			((*punchboardItem)[j]->calculateMoney(punchboardItem));
			dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem));
			(*punchboardItem)[j]->calculateMoney(punchboardItem, playerItem);
			dailyMoney += ((*punchboardItem)[j]->calculateMoney(punchboardItem,playerScene,playerItem));
		}
	}
}