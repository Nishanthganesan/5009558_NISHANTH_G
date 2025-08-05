#include <bits/stdc++.h>
using namespace std;

int main() {
    int n[5];

    for (int i=0; i<5; i++){
        cin >> n[i];
    }
    long long total=0;
    int min=n[0], max=n[0];
    for (int i=0; i<5; i++){
        total += n[i];
        if (n[i] < min) {
            min = n[i];
        }
        if (n[i] > max) {
            max = n[i];
        }
    }
    long long minsum = total-max;
    long long maxsum = total-min;
    cout << minsum << " " << maxsum << endl;
}
