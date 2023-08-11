
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
