#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	
	int* arr = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	long long int low = 1;
	long long int high = arr[N - 1];
	while (low <= high) {
		long long int mid = (low + high) / 2;

		long long int sum = 0;
		for (int i = 0; i < N; i++) {
			if (arr[i] > mid) sum += arr[i] - mid;
		}

		if (sum >= M) low = mid + 1;
		else high = mid - 1;
	}
	
	printf("%lld\n", high);
}
