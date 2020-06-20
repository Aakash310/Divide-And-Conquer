#include <iostream>
#include <vector>
#include <cstdlib>
#include<algorithm>

using std::vector;
using std::swap;



vector<int> quick_sort(vector<int> &a, int l, int r) {
 
 sort(a.begin(),a.end());
 return a;
 }

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  vector<int> b = quick_sort(a,0, a.size());
    for(int i = 0 ; i < b.size() ; i++){
    	std::cout<<b.at(i)<<' ';
	}
  }

