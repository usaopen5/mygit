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
		int isPrime = 0; // 0이면 소수
		if (i == 1) // 1은 소수가 아님
		{
			isPrime++;
			continue; // 하던거 마저 하쇼
		}
		for (int j = 2; j <=sqrt(i); j++) 
		{
			if (i % j == 0) // 약수가 있으면
			{
				isPrime++;
				break; // 하나라도 약수가 있는 순간 소수 조건 탈락
			}
		}
		if (isPrime == 0) // 소수는 벡터에 저장
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
