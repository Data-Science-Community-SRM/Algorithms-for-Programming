Problem Statement:-
On his trip to Luxor and Aswan, Sagheer went to a Nubian market to buy some souvenirs for his friends and relatives. The market has some strange rules. It contains n different items numbered from 1 to n. The i-th item has base cost ai Egyptian pounds. If Sagheer buys k items with indices x1, x2, ..., xk, then the cost of item xj is axj + xj·k for 1 ≤ j ≤ k. In other words, the cost of an item is equal to its base cost in addition to its index multiplied by the factor k.

Sagheer wants to buy as many souvenirs as possible without paying more than S Egyptian pounds. Note that he cannot buy a souvenir more than once. If there are many ways to maximize the number of souvenirs, he will choose the way that will minimize the total cost. Can you help him with this task?

Input
The first line contains two integers n and S (1 ≤ n ≤ 105 and 1 ≤ S ≤ 109) — the number of souvenirs in the market and Sagheer's budget.

The second line contains n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 105) — the base costs of the souvenirs.

Output
On a single line, print two integers k, T — the maximum number of souvenirs Sagheer can buy and the minimum total cost to buy these k souvenirs.

Problem Link:https://codeforces.com/problemset/problem/812/C

Solution/Code:
#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int 
#define pb push_back
 
using namespace std;
 
int main()
{
	ll n,d;
	std::vector<ll> v;
	ll A[100000];
	cin>>n>>d;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	ll start=0;
	ll end=n;
	ll mid,sum=0;
	while(start<=end){
		mid=(start+end)/2;
		for(ll i=0;i<n;i++)
			v.pb(A[i]+(i+1)*mid);
		sort(v.begin(),v.end());
		for(ll i=0;i<mid;i++)
		{
			sum+=v[i];
		}
		if(d>=sum){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		v.clear();
		sum=0;
	}
	cout<<end;
	mid=end;
		for(ll i=0;i<n;i++)
			v.pb(A[i]+(i+1)*mid);
		sort(v.begin(),v.end());
		for(ll i=0;i<mid;i++)
		{
			sum+=v[i];
		}
		cout<<" "<<sum;
}
