// Tutorial 5 string functions
// Pat Chambers (z5264081), 11/10/23

#include <stdio.h>

int count_lowercase(char *string);
void make_vowels_uppercase(char *string);
void delete_following_words(char *string);

int is_lowercase(char c);
int is_uppercase(char c);
int is_letter(char c);
char to_lowercase(char c);
char to_uppercase(char c);
int is_vowel(char c);

int main(void) {
  char count_lowercase_string[] = "Some LETTERS";
  printf("'%s' has %d lowercase letters\n", count_lowercase_string,
         count_lowercase(count_lowercase_string));

  char vowels_uppercase_string[] = "capitalise me";
  printf("'%s' with uppercase vowels is: ", vowels_uppercase_string);
  make_vowels_uppercase(vowels_uppercase_string);
  printf("'%s'\n", vowels_uppercase_string);

  char delete_following_words_string[] = "Delete these words";
  printf("'%s' without following words is: ", delete_following_words_string);
  delete_following_words(delete_following_words_string);
  printf("'%s'\n", delete_following_words_string);
  return 0;
}

//////////////////////////////////////////////////////////////////////////////
/////////////////////////  FUNCTIONS TO IMPLEMENT  ///////////////////////////
//////////////////////////////////////////////////////////////////////////////


// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char *string) {
    int count = 0;
    int i = 0;
    while (string[i] != '\0') {
        if (is_lowercase(string[i])) {
            count++;
        }
        i++;
    }
  return count;
}

// 2.
// modifies `char *string` by converting all its vowels to uppercase

void make_vowels_uppercase(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        if (is_vowel(string[i])) {
            string[i] = to_uppercase(string[i]);
        }
        i++;
    }
}

// 3.
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
//
// (hint. what defines when a string ends?)
void delete_following_words(char *string) {
    int i = 0;
    while (string[i] != ' ' && string[i] != '\0') {
        i++;
    }
    string[i] = '\0';
}

//////////////////////////////////////////////////////////////////////////////
////////////////////////  PROVIDED CHAR FUNCTIONS  ///////////////////////////
//////////////////////////////////////////////////////////////////////////////

// You may want to use some of these in your functions!

// Returns : 1 if `c` is a lowercase letter
//         : 0 otherwise.
int is_lowercase(char c) { return 'a' <= c && c <= 'z'; }

// Returns : 1 if `c` is an uppercase letter
//         : 0 otherwise.
int is_uppercase(char c) { return 'A' <= c && c <= 'Z'; }

// Returns : 1 if `c` is a letter
//         : 0 otherwise.
int is_letter(char c) { return is_lowercase(c) || is_uppercase(c); }

// Returns : `c` converted to lowercase, if it was an uppercase letter
//         : `c` unmodified, otherwise
char to_lowercase(char c) {
  if (is_uppercase(c)) {
    return c - 'A' + 'a';
  }

  return c;
}

// Returns : `c` converted to uppercase, if it was a lowercase letter
//         : `c` unmodified, otherwise
char to_uppercase(char c) {
  if (is_lowercase(c)) {
    return c - 'a' + 'A';
  }

  return c;
}

// Returns : 1 if `c` is an uppercase or lowercase vowel
//         : 0 otherwise.
int is_vowel(char c) {
  char lower_c = to_lowercase(c);

  return lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' ||
         lower_c == 'u';
}
