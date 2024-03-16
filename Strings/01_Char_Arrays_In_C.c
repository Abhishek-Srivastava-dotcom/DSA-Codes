#include <stdio.h>

int main()
{
    printf("Hello World\n");
    
 // method 1.
    char word[] = {'a', 'b', 'c', 'x', 'y', 'z', '\0'};
    printf("%s\n", word);
    
    int i=0; 
    while(word[i] != '\0'){
        printf("%c ", word[i]);
        i++;
    }
    printf("\n");
 // method 2.
    char str[] = "aman";
    printf("%s", str);
    
 return 0;
}
