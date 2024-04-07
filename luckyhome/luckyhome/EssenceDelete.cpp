#include"../luckyhome/EssenceDelete.h"
using namespace std;
void EssenceDelete(vector<Essence*>* essence, vector<Essence*>* Have_delete) {
	size_t length = (*essence).size();
	//遍历道具组
	for (size_t i = 0; i < length; i++) {
		if ((*essence)[i]->Dodelete()) {
			//代表能删除
			(*Have_delete).push_back((*essence)[i]);//加入到删除了的道具组里
			(*essence).erase((*essence).begin() + i);  // 删除
			length = (*essence).size();//重新计算长度
		}
	}
}
//#include <algorithm>  // 用于 std::remove_if 和 std::remove
//#include"../luckyhome/EssenceDelete.h"
// 
//void EssenceDelete(vector<Essence*>* essence, vector<Essence*>* Have_delete) {
//	// 使用擦除-删除惯用法删除元素并将其移动到 Have_delete 中
//	auto new_end = std::remove_if((*essence).begin(), (*essence).end(), [&](Essence* ess) {
//		if (ess->Dodelete()) {
//			(*Have_delete).push_back(ess);
//			return true;  // 表示应删除元素
//		}
//		return false;  // 表示不应删除元素
//		});
//
//	// 从 essence 中擦除已删除的元素
//	(*essence).erase(new_end, (*essence).end());
//}
