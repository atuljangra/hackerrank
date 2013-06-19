#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */
void insertionSort(vector <int>  ar) {
    int unsorted = ar.back();
    int current, count = 0;
    for (int j = 1; j < ar.size(); j++){
        unsorted = ar[j];
        for (int i = j; i >= 0; i--){
            (i == 0)? current = -1 : current = ar[i-1];
            ar[i] = current;
            if (unsorted >= current)
                ar[i]  = unsorted;

            if (unsorted >= current)
                break;
            count ++;
        }
   //for (int j = 0;j < ar.size(); j++)
     //           cout << ar[j] << " ";  
     //       cout << endl;   
    }
    cout << count << endl;
}
/* Tail starts here */
int main(void) {
       vector <int>  _ar;
          int _ar_size;
          cin >> _ar_size;
          for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
                 int _ar_tmp;
                    cin >> _ar_tmp;
                       _ar.push_back(_ar_tmp); 
          }

          insertionSort(_ar);
          return 0;
}
