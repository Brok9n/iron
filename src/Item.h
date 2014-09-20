#ifndef ITEM_H
#define ITEM_H

#include <string.h>

typedef enum {
	weapon, armor
} item_type_t;

class cItem {
	private:
		char* mName;		
		item_type_t mType;
		
		double mBonus;
	public:
		cItem(){};
		cItem(const char* sName, item_type_t iType, double fBonus);
		~cItem();
};

#endif


