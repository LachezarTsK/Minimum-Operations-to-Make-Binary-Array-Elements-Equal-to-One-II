
using System;

public class Solution
{
    public int MinOperations(int[] input)
    {
        int flip = 0;
        int minOperations = 0;
        for (int i = 0; i < input.Length; ++i)
        {
            if ((input[i] ^ flip) == 0)
            {
                ++minOperations;
                flip ^= 1;
            }
        }
        return minOperations;
    }
}
