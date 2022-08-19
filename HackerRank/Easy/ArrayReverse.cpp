#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  int N=0;
  cin>>N;
  int arr[N] = {1,4,3,2};
  for(int i = 0; i<=N; i++)
  cin>>arr[i];
  for(int i=1; i<=N; i++)
  {
      cout<<arr[N-i]<<" ";
  }
    
     
    return 0;
}
