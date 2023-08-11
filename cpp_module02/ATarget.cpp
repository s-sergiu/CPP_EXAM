
#include "ASpell.hpp"
#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::~ATarget()
{

}

ATarget::ATarget(const std::string &_type)
	: type(_type)
{

}

ATarget::ATarget(const ATarget &src)
{
	this->type = src.type;
}

ATarget &ATarget::operator = (const ATarget &src)
{
	this->type = src.type;
	return (*this);
}

const std::string &ATarget::getType(void) const
{
	return (this->type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout<<type<<" has been "<<spell.getEffects()<<"!"<<std::endl;
}
