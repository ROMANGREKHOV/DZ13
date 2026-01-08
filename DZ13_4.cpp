#include <iostream>
#include <fstream>

void delete_two_dim_array(int** arr, int rows, int cols);

int main()
{
	std::ofstream ofile("in4.txt");
	if (ofile.is_open())
	{
		ofile << "2 3" << std::endl;
		ofile << "1 2 3" << std::endl;
		ofile << "4 5 6" << std::endl;
	}
	ofile.close();

	int rows{}, cols{};

	std::ifstream ifile("in4.txt");
	if (ifile.is_open())
	{
		ifile >> rows;
		ifile >> cols;

		int** arr = new int* [rows];

		for (int i = 0; i < rows; ++i)
		{
			arr[i] = new int[cols];
		}
		for (int j = 0; j < rows; ++j)
		{
			for (int k = 0; k < cols; ++k)
			{
				ifile >> arr[j][k];
			}
		}


		for (int l = 0; l < rows; ++l)
		{
			for (int m = cols - 1; m >= 0; --m)
			{
				std::cout << arr[l][m] << ' ';
			}
			std::cout << std::endl;
		}
		delete_two_dim_array(arr, rows, cols);
	}
	ifile.close();

	return EXIT_SUCCESS;
}

void delete_two_dim_array(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
