#include <iostream>
#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
//int main()
//{
//	std::cout << "Hello, World!" << std::endl;
//	return 0;
//}
int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	delete bob;
	delete jim;
	return 0;
}

//Tactical Marine ready for battle!$
//		* teleports from space *$
//		For the holy PLOT!$
//		* attacks with a bolter *$
//* attacks with a chainsword *$
//		This code is unclean. PURIFY IT!$
//		* does nothing *$
//* attacks with chainfists *$
//Aaargh...$
//I'll be back...$