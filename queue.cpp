#include "queue.hpp"
#include <iostream>

int main () {
	std::vector<uint16_t> v =  { 7, 10, 16, 232 };
	
	Queue <uint16_t> queue(v);

	std::cout << queue.ReturnValue(false) << std::endl;
}