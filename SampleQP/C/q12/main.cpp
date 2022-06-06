#include <iostream>
using namespace std;

const int MAX = 100;

bool isSymmetric(int mat[][MAX], int N)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (mat[i][j] != mat[j][i])
				return false;
	return true;
}

int main()
{
	int mat[][MAX] = {{1, 3, 5},
										{3, 2, 4},
										{5, 4, 1}};

	if (isSymmetric(mat, 3))
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
