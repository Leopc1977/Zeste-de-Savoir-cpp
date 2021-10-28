#include <iostream>
#include <string>

int main() {
	std::string mot{ "kayak" };
	std::string motReverse{};

	for (auto it{ std::rbegin(mot) }; it != std::rend(mot); it++) {
		motReverse += *it;
	}
	if (mot == motReverse){
		std::cout << "Le mot : \"" << mot << "\" est un palindrome" << std::endl;
	}
	else {
		std::cout << "Le mot : \"" << mot << "\" n\'est pas un palindrome" << std::endl;
	}
	return 0;
}
