#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter any string: ");
    scanf("%s", str);

    printf("Frequency of each letter:\n");

    for(i = 0; i < strlen(str); i++) {
        
        if(str[i] == '*') continue;  // skip already counted

        count = 1;

        for(j = i + 1; j < strlen(str); j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '*'; // mark
            }
        }

        printf("%c => %d\n", str[i], count);
    }

}

/*
Enter any string: development
Frequency of each letter:
d => 1
e => 3
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/




