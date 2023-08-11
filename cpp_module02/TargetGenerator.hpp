
#ifndef TARGETGENERATOR_H
#define TARGETGENERATOR_H

#include <iostream> 
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::vector <ATarget*> targets;
		TargetGenerator(const TargetGenerator &src);
		TargetGenerator &operator = (const TargetGenerator &src);
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(const std::string&);
		ATarget *createTarget(const std::string&);

};

#endif
