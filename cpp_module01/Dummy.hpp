
#ifndef DUMMY_H
#define DUMMY_H

#include <iostream> 
#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();
		ATarget *clone(void) const;
};

#endif
