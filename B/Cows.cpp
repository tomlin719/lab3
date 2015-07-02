#include "Cows.h"

void Cows::insertion_sort(vector<int> &v){
	int insert,moveItem;
	for(int next=1;next<v.size();++next){
		insert=v.at(next);
		moveItem=next;
		while( (moveItem > 0) && (v.at(moveItem-1)>insert) ){
			v.at(moveItem)=v.at(moveItem-1);
			--moveItem;
		}
		v.at(moveItem)=insert;
	}
}

