#include <iostream>
using namespace std;

#define MAX 1000000000

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// ���ܱ��� ���̴� ���� 10���� �� �� ����.
	// ������ ���̴� �ִ� 10���� ���� ������, m >= 1 �̱� ������
	// ���ܱ��� ���̸� 10������ �����ϸ� ������ �߸��� �ʴ´�.
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

		//sum�� ������ ���, mid(���ܱ��� ����)���� �� ���� �ִ��� ã�ƺ���.
		//sum�� �������� ���� ���, mid ���� �� ���� �ִ��� ã�ƺ���.
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
