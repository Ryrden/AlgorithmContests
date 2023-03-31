#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, h, w;
    cin >> n >> h >> w;

    for(int i = 0; i < n; i++){
        string homeWork;
        string workHome;
        cin >> homeWork >> workHome;

        //caminho casa trabalho
        if (homeWork == "Y"){
            h--;
            w++;
            cout << "Y ";
        }else if (w == 0){
            h--;
            w++;
            cout << "Y ";
        }else {
            cout << "N ";
        }

        //caminho trabalho casa
        if (workHome == "Y"){
            w--;
            h++;
            cout << "Y";
        }else if (h == 0){
            w--;
            h++;
            cout << "Y";
        }else {
            cout << "N";
        }
        cout << endl;
    }

    return 0;
}