#include <iostream>
#include <string>


int vowel_count(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

void testing(std::string input, int expected_output) {
    int result = vowel_count(input);
    if (result == expected_output) {
        std::cout << "Test passed for input: " << input << std::endl;
    } else {
        std::cout << "Test failed for input: " << input << std::endl;
        std::cout << "Expected output: " << expected_output << ", Actual output: " << result << std::endl;
    }
}

int main() {
    // Test cases
    testing("Hello World", 3); // expected 3 vowels (e, o, o)
    testing("Programming", 3); // expected 3 vowels (o, a, i)
    testing("C++ is awesome", 6); // expected 6 vowels (i, i, a, e, o, e)

    return 0;
}