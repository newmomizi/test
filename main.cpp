#include<iostream> // cout, endl, cin
#include<vector> // vector
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
      while(k <= 100000000) {
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
