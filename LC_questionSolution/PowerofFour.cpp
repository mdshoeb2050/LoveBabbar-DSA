#include <iostream>

bool isPowerOfFour(int n) {
    if (n <= 0) {
        return false;
    }
    
    // Check if n is a power of two
    if ((n & (n - 1)) == 0) {
        // Count the number of trailing zeros
        int count = 0;
        while (n > 1) {
            n >>= 1;
            count++;
        }
        
        // Check if the count of trailing zeros is odd
        return count % 2 == 0 ? false : true;
    }
    
    return false;
}

int main() {
    int num1 = 16;
    int num2 = 5;
    
    std::cout << "Is " << num1 << " a power of four? " << (isPowerOfFour(num1) ? "true" : "false") << std::endl;
    std::cout << "Is " << num2 << " a power of four? " << (isPowerOfFour(num2) ? "true" : "false") << std::endl;
    
    return 0;
}


//  It checks if the input `n` is positive and a power of two. If both conditions are met, it then counts the number of trailing zeros in the binary representation of `n` and checks if the count is odd. The program then outputs whether the number is a power of four or not.