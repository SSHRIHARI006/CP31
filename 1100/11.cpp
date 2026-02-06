#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>A(n);
        for(int i=0;i<n;i++)cin>>A[i];

        sort(A.begin(),A.end());
        int i=0,j=n-1;
        int sum = accumulate(A.begin(),A.end(),0);
        while(k-- && (i<(n-1)) && (j>0)){
            int a = A[i]+A[i+1];
            int b = A[j];
            if(a>b){
                sum -= b;
                j--;
            }
            else {sum -=a;i+=2;}
        }
        cout << sum << endl;
    }
    return 0;
}
