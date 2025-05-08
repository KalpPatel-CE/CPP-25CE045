#include <iostream>
#include <string>
using namespace std;

int superDigit(int num) {
    if (num < 10) {
        return num;
    }

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return superDigit(sum);
}

int main() {
    string n;
    int k;
    
    cin >> n;
    cin >> k;

    int initialSum = 0;
    for (char digit : n) {
        initialSum += digit - '0';
    }

    int totalSum = initialSum * k;

    int result = superDigit(totalSum);
    cout << result << endl;
    cout<<"24CE045_Kalp";
    return 0;
}
