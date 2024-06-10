#include <iostream>
#include <algorithm>
using namespace std;

bool check(int arr[]) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    cout<<count << endl;
    return count >= 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        int draws = 0;
        while (!check(arr)) {
            sort(arr, arr + 3);
            arr[1]--;
            arr[2]--;
            draws++;
        }
        if ((arr[0] + arr[1] + arr[2]) % 2 != 0) {
            cout << -1 << endl;
        } else {
            cout << draws << endl;
        }
    }
    return 0;
}
