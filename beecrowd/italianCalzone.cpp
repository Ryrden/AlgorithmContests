#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>
#define print(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< ' '; cout << endl
#define printArray(arr) for(auto x : arr) cout << x << ' '; cout << endl;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int r,c;
    cin >> r >> c;

    int ans = 0;

    int cnt = 1;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            int dish;
            cin >> dish;
            if (dish != cnt)
                ++ans;
            ++cnt;
        }
    }
    cout << ans << endl;

    return 0;
}