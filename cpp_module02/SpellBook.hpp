
#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <iostream> 
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
	private:
		std::vector <ASpell*> book;
		SpellBook(const SpellBook &src);
		SpellBook &operator = (const SpellBook &src);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(const std::string&);
		ASpell *createSpell(const std::string&);

};

#endif
