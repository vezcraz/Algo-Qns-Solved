// CPP program to find if x is a  
// perfect square. 
#include <bits/stdc++.h> 
using namespace std; 
  
bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 
  
int main() {
int c=0; 
  for(int i=1; i<=100; i++) 
  {
    int x= pow(i,3)+5*pow(i,2);
    if (isPerfectSquare(x)) {
      cout<<x<<endl;
      c++;
    }
  }
  cout<<c; 
  return 0; 
}