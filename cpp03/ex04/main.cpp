#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
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
	std::cout << "//------------------------------------------------" << std::endl;
	ScavTrap scav("Victor");
	ScavTrap pippin("Pippin");
	scav.challengeNewcomer(enemy.getName());
	scav.meleeAttack(pippin.getName());
	scav.rangedAttack(pippin.getName());
	scav.takeDamage(80);
	scav.beRepaired(63);
	scav.takeDamage(42);
	scav.takeDamage(45);
	scav.beRepaired(110);
	std::cout << "//------------------------------------------------" << std::endl;
	ClapTrap clap("Victor");
	ClapTrap  lara("Lara");
	clap.meleeAttack(pippin.getName());
	clap.rangedAttack(pippin.getName());
	clap.takeDamage(80);
	clap.beRepaired(63);
	clap.takeDamage(42);
	clap.takeDamage(45);
	clap.beRepaired(110);

	NinjaTrap ninja("Jack");
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(pippin);
	NinjaTrap sonofninja(ninja.getName());
	ninja = sonofninja;
	ninja.takeDamage(30);
	ninja.meleeAttack("STUL");
	ninja.rangedAttack("TABURETKA");
	ninja.ninjaShoebox(b);
	std::cout << "//------------------------------------------------" << std::endl;
	SuperTrap super("super");
	ClapTrap clup("Bolno");
	super.takeDamage(59);

	SuperTrap muravei("muravei");
	SuperTrap mura("mura");
	muravei.ninjaShoebox(clup);
	muravei.meleeAttack(clup.getName());
	muravei.rangedAttack(clup.getName());
	muravei.ninjaShoebox(clup);
	muravei.vaulthunter_dot_exe(clup.getName());
	muravei.takeDamage(50);
	muravei.rangedAttack(mura.getName());
	std::cout << "//------------------------------------------------" << std::endl;


	return (0);
}
