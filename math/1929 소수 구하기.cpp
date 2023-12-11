#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	cin >> M >> N;
	vector <int>v;

	for (int i = M; i <= N; i++)
	{
		int isPrime = 0;
		if (i == 1)
		{
			isPrime++;
			continue;
		}
		for (int j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0)
			{
				isPrime++;
				break;
			}
		}
		if (isPrime == 0)
		{
			v.push_back(i);
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}


	return 0;
}
