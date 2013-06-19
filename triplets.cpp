#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>                                      

using namespace std;

int main() {
    int N;
    cin >> N;

    vector <int> input_array;
    int temp = 0;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        input_array.push_back (temp);
    }

    sort (input_array.begin(), input_array.end());
    // removing the duplicates
    set <int> s;
    unsigned size = input_array.size();
    for (unsigned i = 0; i < size; i++)
        s.insert( input_array[i]);

    input_array.assign (s.begin(), s.end());

    int unique_numbers = input_array.size();
    if (unique_numbers < 3) {
        cout << 0;
        return 0;
    }
    if (unique_numbers == 3) {
        cout << 1;   
        return 0;
    }
    int result = unique_numbers * (unique_numbers - 1) * (unique_numbers - 2)/6;
    cout << result;
    return 0;



}
