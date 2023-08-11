
#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell()
{

}

ASpell::~ASpell()
{

}

ASpell::ASpell(const std::string &_name, const std::string &_effects)
	: name(_name), effects(_effects)
{

}

ASpell::ASpell(const ASpell &src)
{
	this->name = src.name;
	this->effects = src.effects;
}

ASpell &ASpell::operator = (const ASpell &src)
{
	this->name = src.name;
	this->effects = src.effects;
	return (*this);
}

const std::string &ASpell::getName(void) const
{
	return (this->name);
}

const std::string &ASpell::getEffects(void) const
{
	return (this->effects);
}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);	
}
