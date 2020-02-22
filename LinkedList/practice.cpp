#include <bits/stdc++.h>
using namespace std;

# define int long long
typedef unsigned long long ul ;
typedef long long ll ;
typedef string str ;
typedef pair <int, int >  pii ;
typedef pair <ll, ll>  pll ;
typedef vector <int> vi ;
typedef vector <bool> vb ;
typedef vector <ll> vll ;
typedef vector <pii> vpi ;
typedef vector <pll> vpl ;
#define umap unordered_map

//#define cerr cout
#define MOD 1000000007
#define vec vector
#define nl '\n' << flush
#define is ==
#define all(v) (v).begin() , (v).end()
#define revall(v) (v).rbegin() , (v).rend()
#define sumof(v) accumulate(all(v), 0LL, plus<ll>())
#define maxof(v) max_element(all(v))
#define minof(v) min_element(all(v))
#define rev(v) reverse(all(v))
#define sz(v)  (long long)(v).size()
#define lp(i, n) for ( ll i = 0 ; i < (n) ; i++ )
#define lpd(i, n) for ( ll i = (n)-1 ; i >= 0 ; i-- )
#define lpc(it, c) for ( auto it = (c).begin(); it != (c).end(); it++)
#define lpv(val, c) for ( auto val : c )
#define lpr(i, l, r) for ( ll i = (l) ; i < (r) ; i++ )
#define lpdr(i, l, r) for ( ll i = (r)-1 ; i >= (l) ; i-- )

#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define inf INT_MAX
#define eps 1e-6
#define PI acos(-1)

#define tc(t) ul testcases ; cin >> testcases ; for(int testcase = 1 ; testcase <= testcases ; testcase++)
#define prntc cout << "Case #" << testcase << ": ";
#define prc(c) for (auto it = (c).begin(); it != --((c).end()); it++) cout << *it << " "; cout << *(c.rbegin()) << "\n" << flush;
#define prv(v) cout << v << "\n" << flush;
#define invec(vec_name, vec_size) vll vec_name(vec_size); lp(i,vec_size) cin >> vec_name[i];
#define fast ios::sync_with_stdio(false); cin.tie(0);

#ifndef ONLINE_JUDGE
#define show ; cerr <<
#define sp ; cerr << "\n";
#define debug(ds_name) for ( auto val : ds_name ) cerr<<val<<"\n" ; cerr<<"\n";
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__);
string sep = "-----------------------------\n";
#else
#define show ; {}
#define sp ; {} ;
#define debug(ds_name) {} ;
#define pr(...) {} ;
string sep = "" ;
#endif

template <class T> ostream &operator <<(ostream &os, const vector<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T> ostream &operator <<(ostream &os, const unordered_set<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T> ostream &operator <<(ostream &os, const set<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T> ostream &operator <<(ostream &os, const multiset<T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class S, class T> ostream &operator <<(ostream &os, const pair<S, T> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}
template <class S, class T> ostream &operator <<(ostream &os, const unordered_map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class S, class T> ostream &operator <<(ostream &os, const map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p) os << it << " ";
    return os << "]";
}
template <class T> void dbs(string str, T t)
{
    cerr << str << " : " << t << "\n";
}
template <class T, class... S> void dbs(string str, T t, S... s)
{
    int idx = str.find(',');
    cerr << str.substr(0, idx) << " : " << t << ", ";
    dbs(str.substr(idx + 1), s...);
}
template <class T> T mx(T t)
{
    return t;
}
template <class T, class... S> T mx(T t, S... s)
{
    T tt = mx(s...);
    return (t) > (tt) ? (t) : (tt);
}
template <class T> T mn(T t)
{
    return t;
}
template <class T, class... S> T mn(T t, S... s)
{
    T tt = mn(s...);
    return (t) < (tt) ? (t) : (tt);
}
template <class T, class Op> T acc(Op op, T t)
{
    return t;
}
template <class T, class Op, class... S> T acc(Op op, T t, S... s)
{
    return op(t, acc(op, s...));
}
template <class D1, class D2> auto lambdamax()
{
    return [](D1 a, D2 b)
    {
        return (a) > (b) ? (a) : (b) ;
    } ;
}
template <class D1, class D2> auto lambdamin()
{
    return [](D1 a, D2 b)
    {
        return (a) < (b) ? (a) : (b) ;
    } ;
}

ll modExp(ll x, ll y, ll mod)
{
    x %= mod, y %= (mod - 1) ;
    ll res = 1;
    while (y)
    {
        if (y & 1) res = (res * x) % mod;
        y /= 2, x = (x * x) % mod;
    }
    return res % mod;
}

struct node
{
    node *next;
    int data;
};

node *insertAtEnd(node *head, int data)
{
    node *x = new node();
    x->data = data;
    x->next = NULL;
    if(head == NULL)
    {
        head = x;
        return head;
    }
    node *temp = head;
    while(temp->next!= NULL)
    {
        // cerr<<temp->data;
        temp = temp->next;
    }
    temp->next = x;

    return head;
}
node *insertAtEn(node *head, int data)
{
    node *x = new node();
    x->data = data;
    x->next = NULL;
    if(head == NULL)
    {
        head = x;
        return head;
    }
    node *temp = head;
    while(temp!= NULL)
    {
        cerr<<temp->data<<endl;
        temp = temp->next;
    }
    temp->next = x;

    return head;
}
node *insertAtBeg(node *head, int data)
{
    node *x = new node();
    x->data = data;
    x->next = head;
    head = x;
    return head;
}

node *insertAtPos(node *head, int data, int pos)
{
    if(pos == 0)
        head = insertAtBeg(head, data);
    else
    {
        node *x = new node();
        x->data = data;
        x-> next = NULL;
        int count = 0;
        node *temp = head;

        while(count != pos)
        {
            temp = temp->next;
            count++;
        }
        x->next = temp->next;
        temp->next = x;

    }
    return head;
}
node *deleteAtPos(node *head, int pos)
{
    if(pos == 0)
    {
        node *temp = head;
        head = head -> next;
        delete temp;
    }
    else
    {
        node *temp = head;
        int count = 0;
        while(count != pos - 1)
        {
            temp = temp->next;
            count++;

        }
        node *t = temp->next;
        temp->next = temp->next->next;
        delete t;


    }
    return head;

}
void display(node *head)
{
    node *temp = head;
    if(head == NULL)
        cout << "no node";
    else
    {
        while(temp != NULL)
        {
            pr(temp->data);
            temp = temp->next;
        }
    }


}
node *reverse(node *head)
{
    if(head == NULL)
        return head;
    if(head->next == NULL)
        return head;
    node *temp;
    temp = reverse(head->next);
    node *newHead = temp;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = head;
    temp->next->next = NULL;
    return newHead;
}
node *revKseg(node *head, int k)
{
    if(head == NULL)
        return head;

    node *temp = head;
    node *tempHead = head;
    int count = 1;
    while(count < k )
    {
        if(temp->next == NULL)
            break;
        temp = temp->next;
        count++;
    }
    head = temp->next;
    temp->next = NULL;
    temp = reverse(tempHead);
    head = revKseg(head, k);
    node *newHead = temp;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = head;
    return newHead;

}
bool isPerm(node *head)
{
    node *temp = head;
    int count = 0;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    // cout<<count<<sep;
    int c = 1;
    temp = head;
    while(c <= count / 2)
    {
        temp = temp->next;
        c++;
    }

    (count%2!=0)?temp=temp->next:temp=temp;
    temp=reverse(temp);
    pr(sep);
    display(temp);
    node *newtemp = head;
    while(temp!=NULL)
    {

    	if(newtemp->data!=temp->data)
    		return false;
   		newtemp=newtemp->next;
   		temp= temp->next;
    }
    return true;
}
int32_t main()
{
    int n = 5;
    node *head = NULL;

    lp(i, n){
    head = insertAtEnd(head, i);
    // head = insertAtBeg(head, i);
}

    head = insertAtBeg(head, 70);
    // head = insertAtPos(head, 80, 1);
    // head = deleteAtPos(head, 4);
    // head = reverse(head);

    // head = revKseg(head, 4);
    display(head);
    cout << isPerm(head);


}