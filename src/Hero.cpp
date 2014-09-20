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

