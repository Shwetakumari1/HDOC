#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> v{};
        return v;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        vector<int>v{1,2,3,4,5};
        return v;
        // complete this function
    }

    static int get_expected_result() {
        // complete this function
        return 0;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        vector<int>v{1,1,2};
        return v;
        // complete this function
    }

    static int get_expected_result() {
        // complete this function
        return 0;
    }

};
