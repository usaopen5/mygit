#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string board;
	string result;
	cin >> board;
	int cnt = 0;

	for (int i = 0; i < board.size(); i++)
	{		
		if (board[i] == 'X')
		{
			cnt++;
		}
		if (board[i] == '.')
		{
			result += '.';
			if (cnt % 2 != 0)
			{
				break;
			}
			cnt = 0;
		}
		if (cnt == 2 && board[i + 1] != 'X')
		{
			result += "BB";
			cnt = 0;
		}
		if (cnt == 4)
		{
			result += "AAAA";
			cnt = 0;
		}
	}
	if (cnt % 2 != 0)
	{
		cout << -1;
	}
	else
	{
		cout << result;
	}

	
	return 0;
}
