
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
  int t;
    cin >> t;
    vector <int> factors;
    long long int n;
    long long int value;
    long long int i=2;
    long long int answer=1;
    long long int max1;
    
    for(int a0 = 0; a0 < t; a0++){
       
        cin>>n;
        i=2;
         
    while (i<n){    
        if (n%i==0){
        value = n/i;
        n = value;
        factors.push_back(i);
        i=i+1;
        
        }
        
        if (n%i!=0){
        i=i+1;
        }
       
    }
    factors.push_back(n);
    max1=*max_element(factors.begin(),factors.end());
    cout<<max1<<endl;
        
   
    max1 = 0;
    n=0;
    factors.clear();             //clears the vector

    }
    return 0; 
  
}
