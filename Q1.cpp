/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
     
    ll t;

    cin >> t;

    while (t--) {

        ll n, k;

        cin >> n >> k;

        unordered_map<ll, ll> mp;

        for (ll i = 0; i < n; i++) {

            ll x;

            cin >> x;

            mp[x]++;

        }

        priority_queue<ll> pq;

        for (auto x : mp) {

            pq.push(x.first * x.second);

        }

        ll count = 0;

        while(k != 0 && !pq.empty()) {

            ll gg = pq.top();

            pq.pop();

            if ((count + gg) <= count) continue;

            count += gg;

            k--;

        }

        cout << count << endl;

    }
    
}
