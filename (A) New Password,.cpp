#include <iostream>

using namespace std;

int main()
{
int n, k;
	cin >> n >> k;
	string s;
	for (int i = 0; i < n; i++) {
		char c = char('a' + (i % k));
		s += c;
	}
	cout << s;

    return 0;
}
