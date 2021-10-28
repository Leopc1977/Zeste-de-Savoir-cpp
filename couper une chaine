#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string texte{ "Voici une phrase que je vais couper." };
	char const delimiteur{ ' ' };
	std::vector<std::string> parties{};

	auto debut{std::begin(texte)};
	auto fin{ std::end(texte) };
	auto curseur{ std::find(debut,fin,delimiteur) };

	while (curseur != fin) {
		std::string mot { debut, debut + std::distance(debut,curseur) };
		parties.push_back(mot);
		debut = curseur + 1;
		curseur =std::find(debut,fin,delimiteur);
	}

	std::string mot{ debut, fin };
	parties.push_back(mot);

	for (auto mot : parties) {
		std::cout << mot << std::endl;
	}

	return 0;
}
