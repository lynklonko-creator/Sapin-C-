#include <ctime>
#include <iostream>

int main() 
{
	std::srand(time(nullptr));

	int reponse = std::rand() % 10 + 1;
	int guess = 0;
	int tries = 5;

	
	

	for (int i = 0; i <= tries; i++) 
	{
		std::cout << "Essayez de deviner le nombre compris entre 1 et 10" << std::endl;
		std::cin >> guess;
		if (guess == reponse) 
		{
			std::cout << "Bravo, vous avez trouve le nombre!" << std::endl;
			std::cout << "Vous avez trouve le numero en " << i + 1 << " essais" << std::endl;
			break;
		}
		else 
		{
			std::cout << "Mauvaise reponse, essayez encore" << std::endl;
				if (guess < reponse) 
				{
					std::cout << "Votre chiffre est trop petit" << std::endl;
				}
				else
				{
					std::cout << "Votre chiffre est trop grand" << std::endl;
				}
		}

		if (i == tries)
		{
			std::cout << "Vous avez perdu" << std::endl;
		}

	}
	
	return 0;
}
