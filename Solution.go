
package main

import "fmt"

func minOperations(input []int) int {
    flip := 0
    minOperations := 0
    for i := range input {
        if (input[i] ^ flip) == 0 {
            minOperations++
            flip = flip ^ 1
        }
    }
    return minOperations
}
