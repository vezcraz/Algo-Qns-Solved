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


void solve(vec<vec<string>> &master, vector<string> &v, int n, int row_count )
{
    if(row_count == n)
    {
        master.pb(v);

        return;
    }

    for(int i = 0; i < n; i++)
    {
        if(v[row_count] == string(n, '.'))
            return;
        string temp = v[row_count];
        if(v[row_count][i] != '.')
        {

            v[row_count] = string(n, '.');
            v[row_count][i] = 'Q';
            int num = 0;
            int left = i - 1;
            int right = i + 1;
            // cout << right;
            // debug1(left);
            // debug1(vec<string>(v.begin()+row_count+1, v.end()));

            for(string &x : v)
            {

                if(num > row_count)
                {
                    x[i] = '.';
                    if(left >= 0)
                    {
                        x[left] = '.';
                        left--;
                    }
                    if(right < n)
                    {

                        x[right] = '.';
                        right++;
                    }
                }
                num++;

            }
            // debug2(v, row_count);
            // cout << endl;
            solve(master, v, n, row_count + 1);
            num = 0;
            left = i - 1;
            right = i + 1;
            for(string &x : v)
            {

                if(num > row_count)
                {
                    x[i] = '0';
                    if(left >= 0)
                    {
                        x[left] = '0';
                        left--;
                    }
                    if(right < n)
                    {
                        x[right] = '0';
                        right++;
                    }
                }
                num++;


            }

            v[row_count] = temp;

        }
    }

}
vector<vector<string> > solveNQueens(int n)
{
    vec<string> v(n, string(n, '0'));
    // cout << v;
    vec<vec<string>> master;
    solve(master, v, n, 0);
    return master;

}


int main()
{
    cout << solveNQueens(8);
}