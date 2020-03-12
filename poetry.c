
#include<stdio.h>
#include <string.h>

/*
 * Program Name: poetry.c
 * Author(s): Harir Al-Rubaye
 * Purpose: Count words and lines in the poem and the number of words in each line
 */
int main(int argc, char const *argv[]) {
    int i = 0;
    int num_words = 0;
    int j = 0;
    int num_lines = 0;
    char c;
    char poem[100] = "";
    char string[100] = "";
    int state = 1;
    printf("Enter the poem: \n");
    while (string[0] !='.'){  /* keep accepting strings until the user enters a single period '.' */
        fgets(string,100,stdin);

        if (string[0] != '.' && string[0] != '\n'){
            num_lines++;
            strcat(poem,string);  /*Append the string to the poem */
        }
    }

    int words_per_line[lines];
    for (j = 0; j < lines; j++) {
        words_per_line[j] = 0;
    }
    int current_line = 0;
    while (poem[i] != '\0' && poem[i] != '.' ) {
            c = poem[i];
            if(c == ' ' || c == '\t'|| c =='\n'){    /*If we encounter a separator character, set state to 1 */
                state = 1;

                if ( c == '\n'){  /*If the separator is a newline, increment the line we're looking at */
                    current_line++;
                }
         }

         else if (state == 1) {   /*Else, if we encounter a non-separator value while state == 1 */
             state = 0;
             num_words++;
             words_per_line[current_line]++;
         }
            i++;

        }

    printf("%d words on %d lines\n", num_words, num_lines);
    int k;
    for ( k = 0; k < num_lines; k++) {
         printf("%d ", words_per_line[k]);
    }

    getchar();
    return 0;
}
