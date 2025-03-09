#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i % 2 == 0 || (j == 0 && i % 4 == 3) || (j == m - 1 && i % 4 != 3)) {
        cout << "#";
      } else {
        cout << ".";
      }
    }
    cout << endl;
  }

  return 0;
}