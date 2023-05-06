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

vector<int> leftRigthDifference(vector<int>& nums) {
    if (nums.size() <= 1){
        return {0};
    }
    
    int n = nums.size();
    
    vector<int> ans(n,0);
    
    vector<int> leftSum(n,0);
    vector<int> rightSum(n,0);
    
    leftSum[0] = 0;
    rightSum[n-1] = 0;
    
    for (int i = 1; i < n; i++){
        leftSum[i] = leftSum[i-1] + nums[i-1];
        rightSum[n-i-1] = rightSum[n-i] + nums[n-i]; 
    }

    for(int i = 0; i < n; i++){
        ans[i] = abs(leftSum[i] - rightSum[i]);
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> arr = {1};

    vector<int> ans = leftRigthDifference(arr);
    
    print(ans,0,ans.size());

    return 0;
}