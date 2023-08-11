
#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream> 
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
class Warlock
{
	private:
		std::string name;
		std::string title;
		std::vector <ASpell*> spells;
		Warlock();
		Warlock(const Warlock &src);
		Warlock &operator = (const Warlock &src);
	public:
		Warlock(const std::string&, const std::string&);
		~Warlock();
		const std::string &getName(void) const;
		const std::string &getTitle(void) const;
		void setTitle(const std::string&);
		void introduce(void) const;
		void learnSpell(ASpell*);
		void forgetSpell(const std::string);
		void launchSpell(const std::string, const ATarget&);

};

#endif
