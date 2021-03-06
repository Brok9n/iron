#include "Item.h"

cItem::cItem(const char* sName, item_type_t iType, double fBonus)
{
	this->mName = new char[strlen(sName) + 1];
	strncpy(this->mName, sName, strlen(sName) + 1);
	
	this->mType 	= iType;
	this->mBonus	= fBonus;
}

cItem::~cItem()
{
	/*if (mName){
		delete[] mName;
	}*/
}

bool cItem::isValid()
{
	if (this->mType == item_weapon || this->mType == item_armor)
		return true;
	
	return false;
}

void cItem::setItem(const char* sName, item_type_t iType, double fBonus)
{
	if (iType != item_none)
	{
		if (mName){
			delete[] mName;
		}
		
		mName = new char[strlen(sName) + 1];
		strncpy(mName, sName, strlen(sName) + 1);
		
		mType	= iType;
		mBonus	= fBonus;
	}
}

