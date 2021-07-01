#include <iostream>
#include "FragTrap.h"
int main()
{
	FragTrap hero("Villi");
	FragTrap enemy("Billi");
	srand(time(0));
	hero.vaulthunter_dot_exe(enemy.getName());
	hero.meleeAttack(enemy.getName());
	hero.rangedAttack(enemy.getName());
	hero.takeDamage(80);
	hero.beRepaired(63);
	hero.takeDamage(42);
	hero.takeDamage(45);
	hero.beRepaired(110);
	FragTrap b("Bob");
	FragTrap c("Kristof");
	b = c;
	b.takeDamage(10);
	c.takeDamage(15);
	hero.vaulthunter_dot_exe(enemy.getName());
	hero.vaulthunter_dot_exe(enemy.getName());
	hero.vaulthunter_dot_exe(enemy.getName());
	hero.vaulthunter_dot_exe(enemy.getName());
	return (0);

}
