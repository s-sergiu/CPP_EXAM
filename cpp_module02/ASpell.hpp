
#ifndef ASPELL_H
#define ASPELL_H

#include <iostream> 

class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(const std::string&, const std::string&);
		ASpell(const ASpell &src);
		ASpell &operator = (const ASpell &src);
		virtual ~ASpell();
		const std::string &getName(void) const;
		const std::string &getEffects(void) const;
		virtual ASpell *clone(void) const = 0;
		void launch(const ATarget&) const;
};

#endif
