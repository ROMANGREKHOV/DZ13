#include <iostream>
#include <fstream>

int main()
{
	int size{};
	int* arr = new int[size]();
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	for (int i = 0; i < size; ++i)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];
	}
	std::ofstream ofile("out.txt");
	if (ofile.is_open())
	{
		ofile << size << std::endl;
		for (int i = size - 1; i >= 0; --i)
		{
			ofile << arr[i] << ' ';
		}
	}
	ofile.close();

	return EXIT_SUCCESS;

}
