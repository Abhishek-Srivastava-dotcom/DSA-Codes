#include <iostream>
using namespace std;

void convertToUpper(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        int diff = ch - 'a';
        char res = 'A' + diff;
        cout<<res;
    }
    else
        cout << ch;
}

int main()
{
    string str("noNe@sAmPlE");
    int n = str.size();

    for(int i=0; i<n; i++) {
        char ch = str[i];
        convertToUpper(ch);
    }


 return 0;
}

// T.C: O(n)
