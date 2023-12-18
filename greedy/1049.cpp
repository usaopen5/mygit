#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/*
	case 1 : single로만 전부 사는 경우
	case 2 : package로만 전부 사는 경우
	case 3 : package로 사고 6으로 나누어떨어지지 않으면 나머지는 single로 구매	
	*/
	int N, M;
	int package;
	int minpackage = 1000;
	int single;
	int minsingle = 1000;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> package >> single;
		minpackage = min(minpackage, package);
		minsingle = min(minsingle, single);
	}
	cout << min(min(minpackage * (N / 6) + minsingle * (N % 6), N * minsingle), (N/6 + 1) * minpackage);

	
	return 0;
}
