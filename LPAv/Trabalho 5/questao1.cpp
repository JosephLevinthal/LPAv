#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>

using namespace std;

void bucketSort(int arr[], int n, int baldes, int valorMax)
{
	int i;
	vector<int> b[baldes];
	for (i = 0; i < n; i++)
	{
		int bi = (baldes * arr[i]) / (valorMax + 1);
		b[bi].push_back(arr[i]);
	}
	for (int i = 0; i < baldes; i++)
		sort(b[i].begin(), b[i].end());
	int index = 0;
	for (i = 0; i < baldes; i++)
	{
		cout << i << " ";
		if (b[i].size() == 0)
			cout << "NULL";
		for (int j = 0; j < b[i].size(); j++)
		{
			cout << b[i][j] << " ";
			arr[index++] = b[i][j];
		}
		cout << endl;
	}
}

int main(int argc, char **argv)
{
	int baldes, nElementos, valorMax, i;
	cin >> baldes >> nElementos >> valorMax;
	int arr[nElementos];
	for (i = 0; i < nElementos; i++)
	{
		cin >> arr[i];
	}

	bucketSort(arr, nElementos, baldes, valorMax);
	for (i = 0; i < nElementos; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}