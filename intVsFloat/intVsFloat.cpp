
#include <iostream>

int main() {
	int storeInt = 8;
	float storeFloat = 5.3;

	std::cout << "Integer: " << storeInt << std::endl;
	std::cout << "Float: " << storeFloat << std::endl;

	storeInt = storeFloat;
	std::cout << "Float in Int: " << storeInt << std::endl;

}




