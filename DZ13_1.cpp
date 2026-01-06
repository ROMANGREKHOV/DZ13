#include <iostream>
#include <fstream>

int main()
{
	std::ofstream ofile("newFile.txt");
	if (ofile.is_open())
	{

		ofile << "Картошка капуста" << std::endl;
		ofile << "Малина клубника черешня" << std::endl;
		ofile << "Яблоко груша апельсин" << std::endl;
	}
	ofile.close();

	std::ifstream ifile("newFile.txt");
	if (ifile.is_open())
	{
		std::string data{};
		while (ifile >> data)
		{
			std::cout << data << std::endl;
		}
	}
	ifile.close();

	return EXIT_SUCCESS;

}
