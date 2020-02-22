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

bool p(int mid, vi v)
{
    return (( v[0] - v[mid]) > 0) ;
}

int search(const vector<int> &v, int target)
{
    int n = v.end() - v.begin();

    int hi = n - 1;
    int lo = 0;
    int mid;
    if(v[hi] > v[lo] )
        if(binary_search(all(v), target))
            return (lower_bound(all(v), target) - v.begin());
    while(1)
    {
        mid = lo + (hi - lo) / 2;
        if(lo == hi)
            break;
        if(!p(mid, v) and p(mid + 1, v))
            break;
        if(p(mid, v))
            hi = mid;
        else
            lo = mid;
    }

    int pivot = mid;

    if(binary_search(v.begin(), v.begin() + mid + 1, target))
        return lower_bound(v.begin(), v.begin() + mid + 1, target) - v.begin();
    else if(binary_search(v.begin() + 1 + mid, v.end(), target))
        return lower_bound(v.begin() + 1 + mid, v.end(), target) - v.begin();


}

int main()
{
    vi v;
    int target;
    cin >> target;


}