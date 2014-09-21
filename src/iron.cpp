#include <stdio.h>

#include "Hero.h"

int
main(void)
{
	cHero t("The Chosen One", 10.0, 5.0, 5.0);
	
	cItem wep("Axe", item_weapon, 5);
	t.giveItem(wep);
	
	if (t.haveWeapon())
	{
		t.updateStats();
		printf("I have a %s with %lf attack.!\n", t.getWeaponName(), t.getAttack());
	}

	wep.setItem("Bow", item_weapon, 3);
	t.giveItem(wep);
	
	if (t.haveWeapon())
	{
		t.updateStats();
		printf("I have a %s with %lf attack.!\n", t.getWeaponName(), t.getAttack());
	}
	
	printf("%s\n%lf\n%lf\n%lf\n", t.getName(), t.getHealth(), t.getArmor(), t.getAttack());
	return 0;
}

