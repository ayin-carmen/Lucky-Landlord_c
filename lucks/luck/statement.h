#ifndef STATEMENT_H
#define STATEMENT_H

	extern int rent = 0;//房租,即每一次要交的钱

	extern int playMoney = 0;//玩家所持有的钱

	extern vector<int>commonItems;//游戏内所有普通物品

	extern vector<int>specialItems;//游戏内所有道具

	extern vector<int>primeItems;//游戏内所有的精华

	extern vector<int>gamblingMachinesItems;//老虎机上的20个物品

	extern vector<int>playCommonItems;//玩家目前持有的物品

	extern vector<int>playSpecialItem;//玩家目前持有的道具

	extern vector<int>playPrimeItem;//玩家目前持有的精华

	extern int deleteItem = 0;//可删除的次数

	extern int refreshItem = 0;//可刷新的次数

	extern int countDay = 0;//记录天数

#endif
