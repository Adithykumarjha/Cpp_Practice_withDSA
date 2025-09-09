#include <iostream>
#include <string>
#include <iomanip> // For std::setw and std::setfill

using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        return toBinary(year, 12) + "-" + toBinary(month, 4) + "-" + toBinary(day, 5);
    }

private:
    string toBinary(int num, int width) {
        string binary = "";
        while (num > 0) {
            binary = to_string(num % 2) + binary;
            num /= 2;
        }
        // Pad with leading zeros to ensure fixed width
        while (binary.length() < width) {
            binary = "0" + binary;
        }
        return binary;
    }
};

int main() {
    Solution sol;
    string date = "2023-10-05";
    string binaryDate = sol.convertDateToBinary(date);
    cout << "Binary Date: " << binaryDate << endl;
    return 0;
}
