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
	if (iItem.getType() == item_weapon)
	{
		if (mWeapon.getType() == item_none)
		{
		}
		else if (mWeapon.getType() == item_weapon)
		{
		}
	}
	else if (iItem.getType() == item_armor)
	{
		if (mArmor.getType() == item_none)
		{
		}
		else if (mArmor.getType() == item_armor)
		{
		}
	}
}

