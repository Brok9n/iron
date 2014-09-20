#ifndef ITEM_H
#define ITEM_H

#include <string.h>

typedef enum {
	item_none,
	item_weapon,
	item_armor
} item_type_t;

class cItem {
	private:
		char* mName;		
		item_type_t mType;
		
		double mBonus;
	public:
		cItem(){ mType=item_none; };
		cItem(const char* sName, item_type_t iType, double fBonus);
		
		~cItem();
		
		bool isValid();
		
		char* getName() { return this->mName; };
		item_type_t getType() { return this->mType; };
		double getBonus() { return this->mBonus; };
		
		void setItem(item_type_t iType, char* sName, double fBonus);
};

#endif


