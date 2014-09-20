#include <stdio.h>

#include "Hero.h"

int
main(void)
{
	cHero t("The Chosen One", 10.0, 5.0, 5.0);
	
	printf("%s\n%lf\n%lf\n%lf\n", t.getName(), t.getHealth(), t.getArmor(), t.getAttack());
	return 0;
}

