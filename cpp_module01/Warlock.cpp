
#include "Warlock.hpp"

Warlock::Warlock(const std::string &_name, const std::string &_title)
	: name(_name), title(_title)
{
	std::cout<<name<<": This looks like another boring day."<<std::endl;
}

Warlock::~Warlock()
{
	std::cout<<name<<": My job here is done!"<<std::endl;
}

const std::string &Warlock::getName(void) const
{
	return (this->name);
}

const std::string &Warlock::getTitle(void) const
{
	return (this->title);
}

void Warlock::setTitle(const std::string &string)
{
	title = string;
}

void Warlock::introduce(void) const
{
	std::cout<<name<<": I am "<<name<<", "<<title<<"!"<<std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	spells.push_back(spell);	
}

void Warlock::forgetSpell(const std::string name)
{
	for (int i = 0; i < (int)spells.size(); i++)	
		if (spells[i]->getName() == name)
			spells.erase(spells.begin() + i);
}

void Warlock::launchSpell(const std::string name, const ATarget &target)
{
	for (int i = 0; i < (int)spells.size(); i++)	
		if (spells[i]->getName() == name)
			spells[i]->launch(target);
}
