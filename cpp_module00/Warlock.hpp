
#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream> 
class Warlock
{
	private:
		std::string name;
		std::string title;
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

};

#endif
