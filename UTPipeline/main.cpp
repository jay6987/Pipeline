#include <iostream>

#include "PipeTest.h"

int main()
{
	std::cout << "We will rock you!" << std::endl;

	if (TestPipeBase())
		return 1;

	return 0;
}