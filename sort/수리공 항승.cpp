#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main()
{
	int N, L;
	cin >> N >> L;
	vector<int>v;
	int loc;
	for (int i = 0; i < N; i++)
	{
		cin >> loc;
		v.push_back(loc);
	}
	sort(v.begin(), v.end());
	int start = v[0], tape = 1;
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] - start > (L - 1))
		{
			tape++;
			start = v[i];
		}
	}
	cout << tape;
	return 0;
}
