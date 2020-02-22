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

void solve(vector<string> &master,string s, string &v, int i)
{
    if(i==sz(s))
    {
        master.pb(v);
        return;
    }
    else if(s[i]=='0')
    {
        v.pb('0');
        solve(master,s,v,i+1);
        v.pop_back();
    }
    else if(s[i]=='1')
    {
        v.pb('1');
        solve(master,s,v,i+1);
        v.pop_back();
    }
    else if(s[i]=='2')
    {
        v.pb('a');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('b');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('c');
        solve(master,s,v,i+1);
        v.pop_back();
        
        
    }
    else if(s[i]=='3')
    {
        v.pb('d');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('e');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('f');
        solve(master,s,v,i+1);
        v.pop_back();
        
        
    }
    else if(s[i]=='4')
    {
        v.pb('g');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('h');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('i');
        solve(master,s,v,i+1);
        v.pop_back();
        
        
    }
    else if(s[i]=='5')
    {
        v.pb('j');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('k');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('l');
        solve(master,s,v,i+1);
        v.pop_back();
        
        
    }
    else if(s[i]=='6')
    {
        v.pb('m');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('n');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('o');
        solve(master,s,v,i+1);
        v.pop_back();
        
        
    }
    else if(s[i]=='7')
    {
        v.pb('p');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('q');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('r');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('s');
        solve(master,s,v,i+1);
        v.pop_back();
        
        
    }
    else if(s[i]=='8')
    {
        v.pb('t');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('u');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('v');
        solve(master,s,v,i+1);
        v.pop_back();
        
        
    }
     else if(s[i]=='9')
    {
        v.pb('w');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('x');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('y');
        solve(master,s,v,i+1);
        v.pop_back();
        v.pb('z');
        solve(master,s,v,i+1);
        v.pop_back();
        
        
    }
}
vector<string> Solution::letterCombinations(string s) 
{
    string v;
    vector<string> master;
    solve(master,s,v,0);
    return master;
}

int main()
{
    vector<string> final = letterCombinations("23");
    cout<<final;
}