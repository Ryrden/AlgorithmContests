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
#define printStack(s) while(!s.empty()){cout << s.top() << ' '; s.pop();} cout << endl;
#define printQueue(q) while(!q.empty()){cout << q.front() << ' '; q.pop();} cout << endl;
#define printMap(m) for(auto x : m) cout << x.first << ' ' << x.second << endl;
#define _ << ' ' <<
#define endl '\n'

using namespace std;

//Não foi resolvido, era com DP mas eu n sei resolver nada com DP AINDA

ll _solve(int *arr, int s, int e, int k, ll dp[1001][1001]) {
    if(dp[s][e] != -1) return dp[s][e];
    if (k == 0){
        ll sum=0;
        for(int i=s;i<e;i++) sum+=arr[i];
        return sum;
    }

    ll sum1 = _solve(arr,s+2,e,k-1,dp);
    ll sum2 = _solve(arr,s,e-1,k-1,dp);

    dp[s][e] = max(sum1,sum2);
    return dp[s][e];
}

void solve() {
    ll dp[1001][1001];
    memset(dp,-1,sizeof(dp));
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll ans = _solve(arr,0,n,k,dp);
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}