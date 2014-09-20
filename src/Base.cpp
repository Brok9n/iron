#include "Base.h"

cBase::cBase(const char* sName, double fHealth, double fArmor, double fAttack)
{
	this->mName = new char[strlen(sName) + 1];
	strncpy(this->mName, sName, strlen(sName) + 1);
	
	this->mHealth	= fHealth;
	this->mArmor	= fArmor;
	this->mAttack	= fAttack;
}

cBase::~cBase()
{
	if (this->mName)
		delete[] this->mName;
}
