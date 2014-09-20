#ifndef BASE_H
#define BASE_h

#include <stdio.h>

class cBase {
	private:
		char* mName;
		
		double mHealth;
		double mArmor;
		double mAttack;
	protected:
		void set_Name(const char* sName);
		void set_Health(double fHealth);
		void set_Armor(double fArmor);
		void set_Attack(double fAttack);
	public:
		cBase(){};
		cBase(const char* mName, double fHealth, double fArmor, double fAttack)
		{
			printf("%s\n%lf\n%lf\n%lf\n", mName, fHealth, fArmor, fAttack);
		}
		~cBase(){};
		
		char* get_Name(void) { return this->mName; };
		
		double get_Health(void) { return this->mHealth; };
		double get_Armor(void) { return this->mArmor; };
		double get_Attack(void) { return this->mAttack; };
};

#endif

