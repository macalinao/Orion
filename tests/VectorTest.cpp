#include <stdlib.h>
#include <iostream>

#include <vector/Vector2.hpp>

int main(int argc, char** argv)
{
	//Start tests
	std::cout << "%SUITE_STARTING% VectorTest" << std::endl;
	std::cout << "%SUITE_STARTED%" << std::endl;

	std::cout << "%TEST_STARTED% Addition (vectorAddition)" << std::endl;

	Vector2 vec (1.9999999f, 3.25679f);

	std::cout << "[" << vec.getX() << ", " << vec.getY() << "]" << std::endl;
	std::cout << "[" << vec.getFloorX() << ", " << vec.getFloorY() << "]" << std::endl;


	std::cout << "%TEST_FINISHED% time=0 Addition (vectorAddition)" << std::endl;

	//End tests
	std::cout << "%SUITE_FINISHED% time=0" << std::endl;

	return (EXIT_SUCCESS);
}

