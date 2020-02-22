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

vec<vi> lol;
 // void solve(vector<int> &candidates, int index, vector<int> &current, int currentSum, int target, vector<vector<int> > &ans) {
 //        if (currentSum > target) {
 //        return;
 //    }
 //    if (currentSum == target) {
 //        ans.push_back(current);
 //        return;
 //    }
 //    for (int i = index; i < candidates.size(); i++) {
 //        current.push_back(candidates[i]);
 //        currentSum += candidates[i];

 //        doWork(candidates, i, current, currentSum, target, ans);
        
 //        current.pop_back();
 //        currentSum -= candidates[i];
 //    }
    
    // }
vi v;
vi arr;
vec<vi> master;
void solve( int k)
{
    if(sumof(v) >= k)
    {
        // debug1(v);
        if(sumof(v)==k)
        master.pb(v);
        return;
    }
    // if(sumof(v) is 3)
    // {
    //     master.pb(v);
    //     return;
    // }

    lp(i, sz(arr))
    {
        v.pb(arr[i]);
        // debug1(v);
        solve(  k);
        v.pop_back();
        // debug2(i,v);
    }

}
// vector<vector<int> > combinationSum( int k)
// {
//     v[0]=0;
//     int n = arr.size();
    
//     vec<vi> master;
//     solve( k);
//     // lol = master;
// }

int main()
{
    int n,k;
    cin>>n>>k;
    
    lp(i,n) {
        int x;
        cin>>x;
        arr.pb(x);}
    solve(k);
    lp(i,n) 
    {
        if(sumof(master[i])==k)
       cout<<master[i];
}
    // lp(i,sz(lol)) debug1(lol);
}