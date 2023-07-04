#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;

#define forz(i, n) for (ll i = 0; i < n; i++)
#define pb push_back
#define MOD 1000000007

ll mod(ll x)
{
    return max(x, -x);
}

void print(vl a)
{
    for (ll i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void print(ll a[], ll n)
{
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

ll mul(ll a, ll b)
{
    return (a * b) % MOD;
}

void solve()
{
    ll n;
    cin>>n;
    string a[n],b[n],c[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }

    for(ll i=0;i<n;i++)
    {
        cin>>c[i];
    }

    ll pa=0,pb=0,pc=0,counter1=0;
    for(ll i=0;i<n;i++)
    {
        counter1=0;
        for(ll j=0;j<n;j++)
        {
            for(ll k=0;k<n;k++)
            {
                if(a[i].compare(b[j])==0 && a[i].compare(c[k])==0)
                {
                    counter1=-1;
                    //cout<<1<<"\n";
                    break;
                    break;
                }
                else if(a[i].compare(b[j])==0 || a[i].compare(c[k])==0)
                {
                   counter1++;
                   //cout<<2<<"\n";
                }
                else
                {
                   //cout<<"3\n";
                }


            }
        }
        if(counter1/n==1)
        pa+=1;
        else if(counter1==0)
        pa+=3;

    }

   

    for(ll i=0;i<n;i++)
    {
        counter1=0;
        for(ll j=0;j<n;j++)
        {
            for(ll k=0;k<n;k++)
            {
                if(b[i].compare(a[j])==0 && b[i].compare(c[k])==0)
                {
                    counter1=-1;
                    //cout<<1<<"\n";
                    j=n;
                    k=n;
                }
                else if(b[i].compare(a[j])==0 || b[i].compare(c[k])==0)
                {
                   counter1++;
                   //cout<<2<<"\n";
                }
                else
                {
                   //cout<<"3\n";
                }


            }
        }
        if(counter1/n==1)
        {cout<<4<<"\n";
        pb+=1;}
        if(counter1==0)
        {
        pb+=3;
        cout<<5<<"\n";}

    }

   
    for(ll i=0;i<n;i++)
    {
        counter1=0;
        for(ll j=0;j<n;j++)
        {
            for(ll k=0;k<n;k++)
            {
                if(c[i].compare(b[j])==0 && c[i].compare(a[k])==0)
                {
                    counter1=-1;
                    //cout<<1<<"\n";
                    break;
                    break;
                }
                else if(c[i].compare(b[j])==0 || c[i].compare(a[k])==0)
                {
                   counter1++;
                   //cout<<2<<"\n";
                }
                else
                {
                   //cout<<"3\n";
                }


            }
        }
        if(counter1/n==1)
        pc+=1;
        else if(counter1==0)
        pc+=3;

    }

    

    cout<<pa<<" "<<pb<<" "<<pc<<"\n";

}

int main(void)
{
    ll test_case;
    cin >> test_case;
    for (ll i = 0; i < test_case; i++)
    {
        solve();
    }
}