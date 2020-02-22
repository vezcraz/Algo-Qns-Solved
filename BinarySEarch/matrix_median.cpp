#include <bits/stdc++.h>
using namespace std;

// #define int long long

typedef unsigned long long ul ;
typedef long long ll ;
typedef string str ;
typedef pair < int, int >  pii ;
typedef pair < ll, ll>  pll ;
typedef vector < int > vi ;
typedef vector < ll > vll ;

//#define cerr cout
#define MOD 1000000007
#define vec vector
#define nl '\n'
#define is ==
#define all(v) (v).begin() , (v).end()
#define sumof(v) accumulate ( all(v) , 0LL )
#define maxof(v) max_element( all(v) )
#define minof(v) min_element( all(v) )
#define rev(v) reverse(all(v))
#define sz(v)  (long long)(v).size()
#define lp(i , n ) for ( ll i = 0 ; i < (n) ; i++ )
#define lpp(i , l , r ) for ( ll i = (l) ; i < (r) ; i++ )
#define umap unordered_map

#define F first
#define S second
#define pb push_back
#define eb emplace_back

#define tc(t) ul testcases ; cin>>testcases ; for ( int t = 1 ; t <= testcases ; t++ )
#define prntc cout<<"Case "<<testcases<<" : " ;
#define inarr(size) vll v ( size , 0 ) ; lp ( i , size ) cin>>v[i]
#define invec( vec_name ) lp ( i , sz(vec_name) ) cin>>vec_name[i]
#define debug( ds_name ) for ( auto &val : ds_name ) cerr<<val<<"_" ; cerr<<nl
#define debug1(x) cerr<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";
#define fast ios::sync_with_stdio(false); cin.tie(0);

template <class S, class T>ostream &operator <<(ostream &os, const pair<S, T> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}
template <class T>ostream &operator <<(ostream &os, const vector<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T>ostream &operator <<(ostream &os, const unordered_set<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class S, class T>ostream &operator <<(ostream &os, const unordered_map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T>ostream &operator <<(ostream &os, const set<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T>ostream &operator <<(ostream &os, const multiset<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class S, class T>ostream &operator <<(ostream &os, const map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
#define PI 3.1415926

bool p(int midx, int midy,  vec<vi> v, int element)
{
    if(v[midx][midy] > element)
        return true;
    return false;
}

pair<int, int> next(int midx, int midy, int n, int m)
{
    pii p;
    if(midx == n - 1)
    {
        p.first = midx;
        p.second = midy + 1;
        return p;
    }
    if(midy == m - 1)
    {
        p.first = midx + 1;
        p.second = 0;
        return p;
    }
    else
    {
        p.first = midx; 
        p.second = midy+1;
    }
    return p;
}
int searchMatrix(vector<vector<int> > &v, int element)
{
    int n = v.size();
    int m = v[0].size();
    int hix = n - 1, hiy = m - 1;
    int lox = 0, loy = 0;
    int midx, midy;
    if(v[hix][hiy] == element)
        return 1;
    if(v[hix][hiy]<element or v[0][0]<element)
        return 0;
    int lo, hi;
    while(1)
    {
        lo = (lox)*m + loy;
        hi = (hix)*m + hiy;
        int mid = (lo + hi)/2;
        midx = mid/m;
        midy = mid%m;

        debug2(midx, midy);
        debug2(lox, loy);
        debug2(hix, hiy);

        if(lox == hix and loy == hiy)
            break;

        if(!p(midx, midy, v, element) and p(next(midx, midy, n, m).first, next(midx, midy, n, m).second, v, element))
            break;
        if(p(midx, midy, v, element))
        {
            hix = midx;
            hiy = midy;
        }
        else
        {
            lox = midx;
            loy = midy;
        }

    }
    if(v[midx][midy] == element)
        return 1;
    else
        return 0;
}

int main()
{
    vec<vi> v;
    int n, m;
    cin>>n>>m;
    v.resize(n);
    for(vi x: v)
        x.resize(m);
    for(int i=0; i<n; i++)
    {
        for(int j= 0; j< m ; j++)
        {
            int x;
            cin>>x;
            v[i].pb(x);
        }
    }
    int b;
    cin>>b;
    cout << searchMatrix(v, b);

}
