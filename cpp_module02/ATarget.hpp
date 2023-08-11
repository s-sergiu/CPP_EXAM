
#ifndef ATARGET_H
#define ATARGET_H

#include <iostream> 
class ASpell;

class ATarget
{
	private:
		std::string type;
	public:
		ATarget();
		ATarget(const std::string&);
		ATarget(const ATarget &src);
		ATarget &operator = (const ATarget &src);
		virtual ~ATarget();
		const std::string &getType(void) const;
		virtual ATarget *clone(void) const = 0;
		void getHitBySpell(const ASpell&) const;
};

#endif
