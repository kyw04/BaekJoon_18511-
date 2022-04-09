#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
int result;
vector<int> v;

void configuration(int temp, int ten)
{
	if (temp > n)
		return;
	for (int i = 0; i < v.size(); i++)
	{
		configuration(temp + v[i] * ten, ten * 10);
		result = max(result, temp);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	configuration(0, 1);
	cout << result;
	return 0;
}