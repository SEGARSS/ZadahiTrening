#include<iostream>
#include<ctime>

using namespace std;


//-------------------------------------------------------------------------
void Massiv(int **arr, const int ROW, const int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
//--------------------------------------------------------------------------
void PechMassiv(int** arr, const int ROW, const int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
//--------------------------------------------------------------------------
int main()
{
	srand(time(NULL));

	const int ROW = 4;
	const int COL = 4;

	int** arr = new int* [ROW];
	for (int i = 0; i < ROW; i++) 
	{
		arr[i] = new int[COL];
	}

	Massiv(arr, ROW, COL);
	PechMassiv(arr, ROW, COL);

	delete[] arr;

	return 0;
}
