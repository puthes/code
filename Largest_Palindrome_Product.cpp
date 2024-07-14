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
    int n;
    int counter;
    bool check = true;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
    
        bool check = true;
        cin >> n;
      // n = 800000;
        //cout<<n<<endl;
        string digits = to_string(n);
        char digit1 = digits[0];
        char digit2 = digits[1];
        int fullnum;
        int newnum1 = digit1 - '0';
        int newnum2 = digit2 - '0';
        //cout<<digit1;
    for (int i = newnum1; i >0; i--) {
       for (int j = 9; j >=0; j--) {
          for (int k = 9; k >=0; k--) {
        
        fullnum = 100000*i + 10000*j + 1000*k + k*100 + j*10+ i;
        
            for (int m = 10; m<91;m++){
            int y;
            int y1;
            y = 11*m;
            y1 = fullnum/y;
            if (fullnum%y==0&&fullnum<n){
                if (y1<1000){
                counter = fullnum;
             
                check = false;
                break;
                }
            }
        }
        if (!check){
            break;
        }
        
        
    }
         if (!check){
            break;
        } 
        
        
       }
       if (!check){
            break;
        }
       }
     cout<<counter<<endl;
    
    }
    
    return 0;

}
