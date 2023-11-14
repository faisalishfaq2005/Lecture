#include <iostream>
using namespace std;

string numberToWords(int num) {
    if (num < 1 || num > 99) {
        return "OutofRange";
    }

    string result;
                
    if (num >= 20) {
        int tens = num / 10;
        int ones = num % 10;

        if (tens == 2) result += "Twenty";
        else if (tens == 3) result += "Thirty";
        else if (tens == 4) result += "Forty";
        else if (tens == 5) result += "Fifty";
        else if (tens == 6) result += "Sixty";
        else if (tens == 7) result += "Seventy";
        else if (tens == 8) result += "Eighty";
        else if (tens == 9) result += "Ninety";

        if (ones != 0) {
            if (ones == 1) result += "One";
            else if (ones == 2) result += "Two";
            else if (ones == 3) result += "Three";
            else if (ones == 4) result += "Four";
            else if (ones == 5) result += "Five";
            else if (ones == 6) result += "Six";
            else if (ones == 7) result += "Seven";
            else if (ones == 8) result += "Eight";
            else if (ones == 9) result += "Nine";
        }
    } else {
        if (num == 1) result = "One";
        else if (num == 2) result = "Two";
        else if (num == 3) result = "Three";
        else if (num == 4) result = "Four";
        else if (num == 5) result = "Five";
        else if (num == 6) result = "Six";
        else if (num == 7) result = "Seven";
        else if (num == 8) result = "Eight";
        else if (num == 9) result = "Nine";
        else if (num == 10) result = "Ten";
        else if (num == 11) result = "Eleven";
        else if (num == 12) result = "Twelve";
        else if (num == 13) result = "Thirteen";
        else if (num == 14) result = "Fourteen";
        else if (num == 15) result = "Fifteen";
        else if (num == 16) result = "Sixteen";
        else if (num == 17) result = "Seventeen";
        else if (num == 18) result = "Eighteen";
        else if (num == 19) result = "Nineteen";
    }

    return result;
}

int main() {
    int num;
    cout << "Enter a number (1-99): ";
    cin >> num;

    string text = numberToWords(num);
    cout << text << endl;

    return 0;
}
