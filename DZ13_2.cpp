#include <iostream>
#include <fstream>

int main()
{
	std::ofstream ofile("in2.txt");
	if (ofile.is_open())
	{
		ofile << "7" << std::endl;
		ofile << "6 5 3 8 2 5 8" << std::endl;
	}
	ofile.close();

	std::ifstream ifile("in2.txt");
	if (ifile.is_open())
	{
		int size{};
		ifile >> size;
		int* arr = new int[size]();
		for (int i = 0; i < size; ++i)
		{
			ifile >> arr[i];
		}
		for (int i = size-1; i >= 0; --i)
		{
			std::cout << arr[i] << ' ';
		}
	}
	ifile.close();

	
	return EXIT_SUCCESS;

}
