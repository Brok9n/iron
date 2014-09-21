#include "Hero.h"

void cHero::updateStats()
{
	if (mWeapon.isValid())
	{
		this->setAttack(this->getAttack() + mWeapon.getBonus());
	}
	else if (mArmor.isValid())
	{
		this->setArmor(this->getArmor() + mArmor.getBonus());
	}
}

bool cHero::haveWeapon()
{
	if (mWeapon.getType() == item_weapon)
		return true;
	
	return false;
}

bool cHero::haveArmor()
{
	if (mArmor.getType() == item_armor)
		return true;
	
	return false;
}

void cHero::giveItem(cItem iItem)
{
	if (iItem.getType() == item_weapon && mWeapon.getType() != item_armor)
	{
		mWeapon.setItem(iItem.getName(), iItem.getType(), iItem.getBonus());
	}
	else if (iItem.getType() == item_armor && mArmor.getType() != item_weapon)
	{
		mArmor.setItem(iItem.getName(), iItem.getType(), iItem.getBonus());
	}
}

