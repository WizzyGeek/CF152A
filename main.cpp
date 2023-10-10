#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<string> v(n);
	vector<int> mx(m, 0); // store max score for each subject

	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < m; j++) {
			mx[j] = max(tmp[j] - '0', mx[j]);
		}
		v[i] = tmp;
	}

	int summ = 0;
	for (string &s : v) {
		for (int j = 0; j < m; j++) {
			if (s[j] - '0' == mx[j]) {
				summ++;
				break;
			}
		}
	}

	cout << summ;	
}
