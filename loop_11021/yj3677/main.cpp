#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int T, A, B;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i << ": " << A + B << "\n";
	}
}