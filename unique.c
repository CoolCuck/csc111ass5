#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <malloc.h>

//Maia Grisch V00898397
//Created 04/04/2018
//takes file and

int is_word_character(char c){
    return isalpha(c) || c == '-' || c == '\'' ? 1 : 0;
}
typedef struct {
    char word[99];
} String;

int main() {

    FILE *input_text = fopen("input_text.txt", "r");

    char ch = fgetc(input_text);
    String array [10000];
    char words[99];
    int is_unique = 1;
    int count = 0;
    int num_words = 0;
    int i = 0;
    int n = 0;
    char tempstring[99];
    while (ch != EOF) {
        while (is_word_character(ch) != 0) {
            words[i] = ch;
            ch = fgetc(input_text);
            i++;
            count++;
        }
        words[i+1] = '\0';
        for( i = 0; words[i] != 0 ; i++ ) {
            for (n = 0; n < count; n++) {
                array[n];
                tempstring[i] = array->word[i];
                if (strcmp(tempstring, words) == 0) {
                    is_unique = 0;
                }
            }
        }
        if(is_unique == 1) {
            array[num_words];
            array->word[i] = (char) words[i];
            num_words++;
            ch = fgetc(input_text);
            i = 0;
        }
        is_unique = 1;
        i = 0;
        count = 0;
        ch = fgetc(input_text);
    }
    for (i = 0; i < num_words; i++){
        printf("%s", (array[i].word));
    }
    fclose(input_text);

    return 0;
}