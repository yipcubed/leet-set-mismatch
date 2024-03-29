#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/set-mismatch/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<bool>seen(nums.size() + 1);
        int twice;
        for (auto& val : nums) {
            if (seen[val])
                twice = val;
            else
                seen[val] = true;
        }
        for (int i = 1; i < seen.size(); ++i) {
            if (!seen[i]) {
                return vector<int>{twice, i};
            }
        }
        return vector<int>();
    }
};

void test1() {
    vector<int> v1{1,2,2,4};

    cout << "[2,3] ? " << Solution().findErrorNums(v1) << endl;
}

void test2() {

}

void test3() {

}