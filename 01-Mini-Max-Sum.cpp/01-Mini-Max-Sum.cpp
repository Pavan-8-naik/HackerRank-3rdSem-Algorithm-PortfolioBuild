#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long long total = 0;
    int minimum = arr[0];
    int maximum = arr[0];

    for (int i = 0; i < 5; i++) {
        total += arr[i];

        if (arr[i] < minimum)
            minimum = arr[i];

        if (arr[i] > maximum)
            maximum = arr[i];
    }

    long long minSum = total - maximum;
    long long maxSum = total - minimum;

    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}