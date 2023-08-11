
#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}

void TargetGenerator::learnTargetType(ATarget *target)
{
	targets.push_back(target);
}

void TargetGenerator::forgetTargetType(const std::string &type)
{
	for (int i = 0; i < (int)targets.size(); i++)	
		if (targets[i]->getType() == type)
			targets.erase(targets.begin() + i);
}

ATarget *TargetGenerator::createTarget(const std::string &type)
{
	for (int i = 0; i < (int)targets.size(); i++)	
	{
		if (targets[i]->getType() == type)
			return (targets[i]->clone());
	}
	return (NULL);

}
