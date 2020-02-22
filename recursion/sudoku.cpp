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

bool rowCheck(vec<char> v, char c)
{
    for(char m : v)
        if(c == m)
            return 0;

    return 1;
}

bool colCheck(vec<vec<char>> v, char c, int col_no)
{
    for(vec<char> x : v)
    {
        if(x[col_no] == c)
            return 0;
    }
    return 1;
}
bool boxCheck(vec<vec<char>> v, char c, int row_no, int col_no)
{
    int a = (row_no % 9) / 3;
    int b = (col_no % 9) / 3;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if((i % 9) / 3 == a and (j % 9) / 3 == b)
                if(v[i][j] == c)
                    return 0;
        }
    }
    return 1;
}



void solve(vec<vec<char>> &grid,  int  &dot_count)
{
    if(dot_count == 0)
    {
        return;
    }


    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            char c;

            if(grid[i][j] == '.')
            {
                for( c = '1'; c <= '9'; c++)
                {
                    if(rowCheck(grid[i], c) and colCheck(grid, c, j) and boxCheck(grid, c, i, j) )
                    {
                        grid[i][j] = c;
                        dot_count--;
                        // debug1(dot_count);
                        // debug1(grid);
                        solve(grid,  dot_count );
                        if(dot_count==0)
                            break;
                        grid[i][j] = '.';
                        dot_count++;
                        
                    }

                }
                if(c=='9'+1)
                    return;
            }
        }
        
    }



}




void solveSudoku(vector<vector<char> > &grid)
{
    int dot_count = 0;
    //counting total dots
    for(vec<char> v : grid)
    {
        for(char c : v)
            if(c == '.')
                dot_count++;
    }
    debug1(dot_count);
    solve(grid, dot_count);

}

// int main()
// {
//     vector<vector<char>> grid(9);
//     char c;
//     int count = 0;

//     //taking input
//     for(int i = 0; i < 9; i++)
//     {
//         for(int j = 0; j < 9; )
//         {
//             cin >> c;
//             if(c != '[' and c != ']' and c != ',' and c != ' ')
//             {
//                 grid[i].push_back(c);
//                 j++;
//                 count++;
//             }
//         }
//     }

//     //solving
//     solveSudoku(grid);
//     cout << grid;
// }