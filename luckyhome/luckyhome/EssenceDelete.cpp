#include"../luckyhome/EssenceDelete.h"
using namespace std;
void EssenceDelete(vector<Essence*>* essence, vector<Essence*>* Have_delete) {
	size_t length = (*essence).size();
	//����������
	for (size_t i = 0; i < length; i++) {
		if ((*essence)[i]->Dodelete()) {
			//������ɾ��
			(*Have_delete).push_back((*essence)[i]);//���뵽ɾ���˵ĵ�������
			(*essence).erase((*essence).begin() + i);  // ɾ��
			length = (*essence).size();//���¼��㳤��
		}
	}
}
//#include <algorithm>  // ���� std::remove_if �� std::remove
//#include"../luckyhome/EssenceDelete.h"
// 
//void EssenceDelete(vector<Essence*>* essence, vector<Essence*>* Have_delete) {
//	// ʹ�ò���-ɾ�����÷�ɾ��Ԫ�ز������ƶ��� Have_delete ��
//	auto new_end = std::remove_if((*essence).begin(), (*essence).end(), [&](Essence* ess) {
//		if (ess->Dodelete()) {
//			(*Have_delete).push_back(ess);
//			return true;  // ��ʾӦɾ��Ԫ��
//		}
//		return false;  // ��ʾ��Ӧɾ��Ԫ��
//		});
//
//	// �� essence �в�����ɾ����Ԫ��
//	(*essence).erase(new_end, (*essence).end());
//}
