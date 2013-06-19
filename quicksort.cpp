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
vector <int> par(vector <int> array) {
    if (array.size() < 1)
        return vector <int> ();
    int pivot = array[0];
    vector <int> left;
    vector <int> right;
    for (int i = 0; i < array.size(); i++) {
        if (i != 0) {
            if (array[i] <= pivot)
                left.push_back(array[i]);
            else
                right.push_back(array[i]);
        }
    }
    left = par (left);
    right = par (right);
    left.insert (left.end(), pivot);
    left.insert (left.end(), right.begin(), right.end());
    if (left.size () == 1)
        return left;
    for (int j = 0; j < left.size(); j++)
        cout << left[j] << " ";
    cout << endl;
    return left;
}
void quickSort(vector <int>  ar, int ar_size) {
    par (ar);
}

int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    quickSort(_ar, _ar_size);
             
    return 0;
}                                   
