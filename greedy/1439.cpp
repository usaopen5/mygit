#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/*
	00 11 0000 ... 0으로 이루어진 영역 2개 / 1으로 이루어진 영역 1개 = 더 적은 영역을 가진 수를 바꾸면 됨
	0 1 0 1 000 11 00 ... 	0 4 / 1 3 = 1영역을 0으로 바꾸면 됨
	0000000 ... 0 1 / 1 0 = min(zero,one) = 0
	*/
	string s;
	int zero = 0; // 0의 영역
	int one = 0; // 1의 영역
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[i + 1])
		{
			if (s[i] == '0')
			{
				zero++;
			}
			else {
				one++;
			}
		}		
	}
	cout << min(zero, one);

	return 0;
}
