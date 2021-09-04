
#include<bits/stdc++.h>
using namespace std;


void findTriplets(vector<int>&vt)
{
    int n=vt.size();
	sort(vt.begin(), vt.end());
    bool flag = false;
    
	for (int i=0; i<n-1; i++)
	{
		
		int l = i + 1, r = n - 1, x = vt[i];
		while (l < r)
		{
			if (x + vt[l] + vt[r] == 0)
			{
			    flag = true;
			    
				cout<<x<<" "<<vt[l]<<" "<<vt[r]<<endl;
				
				l++;r--;
				
				break;
			}
			else if (x + vt[l] + vt[r] < 0)
				l++;
			else
				r--;
		}
	}

	if (flag == false)
		cout << "Sorry  No Required Triplets Found"<< endl;
}


int main()
{
	cout<<" enter the no of values (n) followerd by the numbers"<<endl;
	int n; 
	cin>>n;
	vector<int>vt(n);
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    vt.push_back(x);
	}
	
	findTriplets(vt);
	return 0;
}
