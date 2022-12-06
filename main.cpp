#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
using namespace std;

int main() {
  vector<bool> vec(100000000);
  vec.at(1) = true;
  int i;
  int k;
  for(i=1; i<100000000; i++){
    vec.at(i) = false;
  }

  for(i=0; i<10000; i++) {
    if (vec.at(i)==false) {
      k=i+i;
      while(k <= 10000000) {
        vec.at(k) = true;
        k += i;
      }
    }
  }

  for(i=0; i<100000000; i++) {
    if (vec.at(i) == false) {
      cout << i << endl; 
    }
  }
}
