#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include "animal.hpp"
#include "mouth.hpp"

class Cat : public animal
{
public:
	Cat();

	mouth m;
};
#endif