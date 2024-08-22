#include <iostream>
using namespace std;

int main()
{
	cout << "-------------------------------------------------1-----------------------------------------------------------\n";
	int num[5][5] = {};
	srand(time(0));
	int cem = 0;
	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)

	{
		for (int j = 0; j < sizeof(num[0]) / sizeof(num[0][0]); j++)
		{

			num[i][j] = rand() % 20;


			cout << num[i][j] << ' ';
			cem += num[i][j];
		}
		cout << endl;

	}
	cout << cem;

	cout << "\n----------------------------------------------2--------------------------------------------------------------\n";


	int main(); {
		const int size = 5;
		int massiv[size][size];
		int cəmi = 0;

		srand(time(0));

		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				massiv[i][j] = rand() % 21;
			}
		}

		cout << "massiv:" << endl;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				cout << massiv[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < size; ++i) {
			cəmi += massiv[i][i];
		}

		cout << "əsas eks diaqonalın cəmi: " << cəmi << endl;

		return 0;
	}

	cout << "\n----------------------------------------------4--------------------------------------------------------------\n";

	int min = -5;
	int max = 5;
	int array_1[5][5] = {};
	for (int l = 0; l < 5; l++)
	{
		for (int k = 0; k < 5; k++)
		{
			array_1[l][k] = rand() % (max - min + 1) + min;
			cout << array_1[l][k] << ",";
		}
		cout << endl;
	}
	for (int l = 0; l < 5; l++)
	{
		int sifr = 0;
		int musbet = 0;
		int menfi = 0;

		for (int k = 0; k < 5; k++)
		{
			if (array_1[l][k] == 0)
				sifr += 1;
			else if (array_1[l][k] > 0)
				musbet += 1;
			else if (array_1[l][k] < 0)
				menfi += 1;
		}
		cout << endl;
		cout << "sifrlarin sayi-->" << sifr << "\n";
		cout << "musbetlerin sayi-->" << musbet << "\n";
		cout << "menfilerin sayi-->" << menfi << "\n";

	}

	cout << "\n----------------------------------------------5--------------------------------------------------------------\n";
	int arr[5][5] = {};
	srand(time(0));
	for (int x = 0; x < 5; x++)
	{
		int kod = 0;
		for (int c = 0; c < 5; c++)
		{
			arr[x][c] = rand() % 21;
			kod += arr[x][c];
		}
		cout << "setr" << x + 1 << " cemi-->" << kod << endl;
	}
	cout << "\n----------------------------------------------6--------------------------------------------------------------\n";


	int main(); {
		const int rows = 5;
		const int cols = 5;
		int massiv[rows][cols];

		srand(time(0));

		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				massiv[i][j] = rand() % 21;
			}
		}

		cout << "massiv:" << endl;
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				cout << massiv[i][j] << " ";
			}
			cout << endl;
		}

		cout << "sütunların cəmləri:" << endl;
		for (int j = 0; j < cols; ++j) {
			int sütun_cəmi = 0;
			for (int i = 0; i < rows; ++i) {
				sütun_cəmi += massiv[i][j];
			}
			cout << "sütun " << j + 1 << ": " << sütun_cəmi << endl;
		}

		return 0;
	}

	cout << "\n----------------------------------------------10--------------------------------------------------------------\n";

	int main(); {
		const int size = 6;
		int massiv[size][size];

		srand(time(0));

		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				massiv[i][j] = rand() % 21;
			}
		}

		cout << "deyismmemis hali:" << endl;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				cout << massiv[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < size - 1; i += 2) {
			for (int j = 0; j < size; ++j) {
				swap(massiv[i][j], massiv[i + 1][j]);
			}
		}

		cout << "Qonşu sətirlərin yerini dəyisdirdim muellim:" << endl;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				cout << massiv[i][j] << " ";
			}
			cout << endl;
		}

		return 0;
	}
}
