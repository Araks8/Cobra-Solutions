#include <iostream>
#include <string>
#include<fstream>

std::string validity_checker();
void print_letter(std::string file_name);


int main() {
	std::string letter;
	letter = validity_checker();
	std::string file_name;
	file_name = letter + ".txt";
	print_letter(file_name);
	return 0;
}

void print_letter(std::string file_name)
{
	std::ifstream file(file_name);
	std::string line;
	while (!file.eof())
	{
		getline(file, line);
		std::cout << line << std::endl;
	}
}
std::string validity_checker()
{
	std::string letter;
	do
	{
		std::cout << "Enter one letter: ";
		std::cin >> letter;

	} while ((letter.size() != 1) || (letter[0] < 65 || letter[0]>90) && (letter[0] < 97 || letter[0]>122));

	std::cout << std::endl;
	return letter;
}