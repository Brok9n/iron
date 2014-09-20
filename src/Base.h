#ifndef BASE_H
#define BASE_h

#include <stdio.h>
#include <string.h>

#include "Item.h"

class cBase {
	private:
		char* mName;
		
		double mHealth;
		double mArmor;
		double mAttack;
	protected:
		void setName(const char* sName);
		void setHealth(double fHealth);
		void setArmor(double fArmor);
		void setAttack(double fAttack);
	public:
		cBase(){};
		cBase(const char* sName, double fHealth, double fArmor, double fAttack);
		~cBase();
		
		char* getName(void) { return this->mName; };
		
		double getHealth(void) { return this->mHealth; };
		double getArmor(void) { return this->mArmor; };
		double getAttack(void) { return this->mAttack; };
};

#endif

