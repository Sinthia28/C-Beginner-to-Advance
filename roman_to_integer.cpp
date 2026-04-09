#include <iostream>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        int values[91]; 
        values['I'] = 1;   values['V'] = 5;   values['X'] = 10; 
        values['L'] = 50;  values['C'] = 100; values['D'] = 500; 
        values['M'] = 1000;

        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && values[s[i]] < values[s[i+1]]) {
                total -= values[s[i]];
            } else {
                total += values[s[i]];
            }
        }
        return total;
    }
};

// --- ADD THIS PART BELOW TO RUN ON YOUR COMPUTER ---
int main() {
    Solution sol;
    std::string test = "MCMXCIV"; // You can change this to any Roman numeral
    
    int result = sol.romanToInt(test);
    
    std::cout << "The Roman numeral " << test << " is: " << result << std::endl;
    
    return 0;
}