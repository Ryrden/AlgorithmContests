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

int maxNumOfMarkedIndices(vector<int>& nums) {
    sort(nums.begin(),nums.end());

    // 2 nums[i] <= nums[j];

    int cnt = 0;
    int end = nums.size() - 1;
    int start = end - 1;
        if (2*nums[i] <= nums[j])
            cnt++;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> arr = {9,2,5,4};

    cout << maxNumOfMarkedIndices(arr) << endl;

    return 0;
}