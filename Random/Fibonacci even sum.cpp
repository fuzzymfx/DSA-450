//
#include <stdio.h>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
	vector<long long> v;
	v.push_back(1);
	v.push_back(2);
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (v[i] + v[i - 1] < 4000000)
		{
			v.push_back(v[i] + v[i - 1]);
			if ((v[i] + v[i - 1]) % 2 == 0)
				sum += v[i] + v[i - 1];
		}
		else
			break;
	}
	cout << endl;
	cout << sum;
	return 0;
}