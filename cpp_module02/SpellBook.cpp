
#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{

}

void SpellBook::learnSpell(ASpell *spell)
{
	book.push_back(spell);	
}

void SpellBook::forgetSpell(const std::string &name)
{
	for (int i = 0; i < (int)book.size(); i++)	
		if (book[i]->getName() == name)
			book.erase(book.begin() + i);
}

ASpell *SpellBook::createSpell(const std::string &name)
{
	for (int i = 0; i < (int)book.size(); i++)	
	{
		if (book[i]->getName() == name)
			return (book[i]->clone());
	}
	return (NULL);
}
