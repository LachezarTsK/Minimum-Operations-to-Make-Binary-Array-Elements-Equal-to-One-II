
class Solution {
    fun minOperations(input: IntArray): Int {
        var flip = 0
        var minOperations = 0
        for (i in input.indices) {
            if ((input[i] xor flip) == 0) {
                ++minOperations
                flip = flip xor 1
            }
        }
        return minOperations
    }
}
