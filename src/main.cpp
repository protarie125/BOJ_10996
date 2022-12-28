#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto x = int{ 0 };
	for (auto i = 0; i < 2 * n; ++i) {
		for (auto j = 0; j < n; ++j) {
			x = i + j;
			x %= 2;

			if (0 == x) {
				cout << '*';
			}
			else {
				cout << ' ';
			}

			++x;
			x %= 2;
		}
		cout << '\n';
	}

	return 0;
}