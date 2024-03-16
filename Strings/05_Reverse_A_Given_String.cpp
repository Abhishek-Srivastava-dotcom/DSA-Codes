#include <iostream>
using namespace std;

void reverseString(string &str) {
    int low = 0;
    int high = str.size() - 1;

    while(low <= high) {
        swap(str[low++], str[high--]);
    }
}

int main()
{
    // string str = "0abcd_dcba1";
    string str = "abcd";
    cout << "original: "<<str<<endl;
    reverseString(str);
    cout << "reversed: "<<str;

 return 0;
}

// T.C: O(n/2)
