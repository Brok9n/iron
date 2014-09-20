#ifndef HERO_H
#define HERO_H

#include "Base.h"
#include "Item.h"

class cHero : public cBase {
	using cBase::cBase;
	
	private:
		cItem	mWeapon,
			mArmor;
	public:
		void updateStats();
		
		bool haveWeapon();
		bool haveArmor();
		
		void giveItem(cItem iItem);
};

#endif

