
#include <vector>
using namespace std;

class Solution {

public:
    int minOperations(vector<int>& input) const {
        int flip = 0;
        int minOperations = 0;
        for (size_t i = 0; i < input.size(); ++i) {
            if ((input[i] ^ flip) == 0) {
                ++minOperations;
                flip ^= 1;
            }
        }
        return minOperations;
    }
};
