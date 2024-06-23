
function minOperations(input: number[]): number {
    let flip = 0;
    let minOperations = 0;
    for (let i = 0; i < input.length; ++i) {
        if ((input[i] ^ flip) === 0) {
            ++minOperations;
            flip ^= 1;
        }
    }
    return minOperations;
};
