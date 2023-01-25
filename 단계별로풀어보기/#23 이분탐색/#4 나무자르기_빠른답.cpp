#include <iostream>
using namespace std;

#define MAX 1000000000

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// 절단기의 높이는 절대 10억이 될 수 없다.
	// 나무의 높이는 최대 10억의 값을 가지며, m >= 1 이기 때문에
	// 절단기의 높이를 10억으로 설정하면 나무는 잘리지 않는다.
	int low = 0, high = MAX, mid;
	int n, m, ans = 0;
	long long int sum;
	
	cin >> n >> m;
	int* height = new int[n];
	for (int i = 0; i < n; i++) { cin >> height[i]; }


	while ((low+1) < high) {
		mid = (low + high) / 2;
		sum = 0;

		for (int i = 0; i < n; i++) {
			if (height[i] > mid) sum += (height[i] - mid);
		}

		//sum을 충족할 경우, mid(절단기의 높이)값을 더 높여 최댓값을 찾아본다.
		//sum을 충족하지 못할 경우, mid 값을 더 낮춰 최댓값을 찾아본다.
		if (sum >= m) {
			ans = mid;
			low = mid;
		}
		else { high = mid; }
	}
	delete[] height;
	
	cout << ans;
	return 0;
}
