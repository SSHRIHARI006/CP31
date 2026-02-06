#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++) cin>>A[i];

        map<int,int>mp;
        for(int i=0;i<n;i++)mp[A[i]]++;

        if(mp.size()>=3) cout << "NO" << endl;

        else if (mp.size()==1) cout << "YES" << endl;

        else{
            int f1 = mp.begin()->second;
            int f2 = mp.rbegin()->second;

            if(abs(f1-f2)>1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}
