#include <iostream>
#include <algorithm>

using namespace std;
int narr[11];
bool visit[11] = { false, };
int n, m;
void nm_sort(int cnt);


int main() {

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> narr[i];
	}

	sort(narr, narr, n);

	nm_sort(0);
	system("pause");
	return 0;
}

void nm_sort(int cnt, int narr[11]) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", narr[cnt]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++) {
		if (visit[i] == false) {
			visit[i] = true;
			narr[i] = i;
			nm_sort(cnt+1);
			visit[i] = false;
		}
	}

}