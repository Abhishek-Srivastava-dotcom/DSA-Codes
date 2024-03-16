#include <iostream>
using namespace std;

void convertToLower(char ch) {
    if(ch >= 'A' && ch <= 'Z'){
        char diff = 'a' + (ch - 'A');
        // char res =  'a' + diff;
        cout<<diff;
    }
    else
        cout << ch;
}

int main() 
{
    string str = "NoNE@124";
    
    // cin>>str;
    // getline(cin, str);
    
    for (int i=0; i<str.size(); i++) {
        char ch = str[i];
        convertToLower(ch);
    }
    
  return 0;
}