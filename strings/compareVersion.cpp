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

int compareVersion(string a, string b) 
{
    vector<string> va, vb;
    a.push_back('.');
    b.push_back('.');
    string temp="";
    for(char c : a)
    {
        if(c!='.')
            temp.push_back(c);
        else
        {
            va.push_back(temp);
            temp="";
        }
    }
    
    temp="";
    for(char c : b)
    {
        if(c!='.')
            temp.push_back(c);
        else
        {
            vb.push_back(temp);
            temp="";
        }
    }
    // debug2(va,vb);
    int na = va.size();
    int nb = vb.size();
    int diff= abs(na-nb);
    // debug1(diff);
    int n;
    if(na>nb)
    {
        n=na;
        while(diff--)
            vb.push_back("0");
    }
    else if(na<nb)
    {
        n=nb;
        while(diff--)
            va.push_back("0");
    }
    else
        n=na;
    for(int i=0; i<n; i++)
    {
        int sa=va[i].size();
        int sb = vb[i].size();
        int diff= abs(sa-sb);
        int sn=sa;

        if(sa>sb)
        {
            string temp(diff, '0');
            temp+=vb[i];
            vb[i]=temp;
            // debug1(vb);
            // debug2(temp, temp.size());
        }
        else if(sa<sb)
        {

            string temp(diff, '0');
            temp+=vb[i];
            va[i]=temp;
        }
        // debug2(va, vb);
        
        if(va[i]>vb[i])
        return 1;
        
        else if(va[i]<vb[i])
        return -1;
        else
            continue;
        
    }
    
    return 0;
    
}

// int main()
// {
//     cout<<compareVersion("01", "1");
// }
