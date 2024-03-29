#include <stdio.h>
#include<string.h>

char dictionary[1000000];
char article[100000];

void spellCheck(char[], char[]);
int isLetter(char c);
void removePunc(char article[]);
void toLower( char article[]);
void lowerDictionary( char dictionary[]);
int artLength( char article[]);
void nextArticleWord(char article[], char articleWord[],  int artLength, char dictionary[]);

int main(void) {
    FILE* dict_file;
    FILE* article_file;
    int bytes_read;
    char* p;

    dict_file = fopen("american-english.txt", "r");
    if (dict_file == 0) {
        printf("unable to open dictionary file \"american-english.txt\"\n");
        return -1;
    }

    article_file = fopen("article.txt", "r");
    if (article_file == 0) {
        printf("unable to open file \"article.txt\"\n");
        return -1;
    }

    /* read dictionary */
    p = dictionary;
    p = fgets(p, 100, dict_file);
    while (p != 0) {
        while (*p != '\0') {
            p += 1;
        }
        p = fgets(p, 100, dict_file);
    }

    /* read article */
    p = article;
    bytes_read = fread(p, 1, 1000, article_file);
    p += bytes_read;
    while (bytes_read != 0) {
        bytes_read = fread(p, 1, 1000, article_file);
        p += bytes_read;
    }
    *p = 0;

    spellCheck(article, dictionary);
}



int articlePosition =0;
int dictionaryPosition = 0;




void spellCheck(char article[], char dictionary[]) {
    char articleWord[50];
    char dictionaryWord[50];
    int articleLength = artLength(article);
    removePunc(article);
    toLower(article);
    lowerDictionary(dictionary);
    nextArticleWord(article, articleWord, articleLength, dictionary);

}

void nextDictionaryWord(char dictionary[], char dictionaryWord[]){
    int i;
    for(i =0; dictionary[dictionaryPosition] != '\n'; i++){
        dictionaryWord[i] = dictionary[dictionaryPosition];
        dictionaryPosition++;
    }
}
int isLetter(char c){
    if ( (c>='a'&&c<='z') || (c>='A'&&c<='Z'))
        return 1;
    return 0;
}

void removePunc(char article[]){
    int i, j=0;
    for ( i =0; article[i] != 0; i++){
        if (isLetter(article[i])){
            article[j] = article[i];
            j++;
        }
        else if (!isLetter(article[i])){
            article[j] = ' ';
            j++;
        }
    }
}

void toLower( char article[]){
    int i=0;
    for( i; article[i] != 0; i++){
        if ( article[i] >= 'A' && article[i] <='Z')
            article[i] = article[i] + 32;
    }
}

void lowerDictionary( char dictionary[]){
    int i=0;
    for(i; dictionary[i] != 0; i++){
        if (dictionary[i] >= 'A' && dictionary[i] <= 'Z'){
            dictionary[i] = dictionary[i] + 32;
        }
    }
}


int articleLength( char article[] ){
    int count=0;
    while (article[count] != 0)
        count++;
    return count;
}

void nextArticleWord(char article[], char articleWord[],  int articleLength, char dictionaryWord[], char dictionary[]){
    int j, i;
check:
    while(!isLetter(article[articlePosition])){
        if (article[articlePosition] == 0){
            return;
        }
        articlePosition++;
    }
    for(j=0; article[articlePosition] != ' ' || articlePosition == articleLength; j++){
        articleWord[j] = article[articlePosition];
        articlePosition++;
    }

    if (strlen(articleWord)<2){
        goto check;
    }
    articleWord[j+1] = 0;
    //dictionary search
        while (!strncmp(articleWord, dictionaryWord,strlen(articleWord))){
            nextDictionaryWord(dictionary, dictionaryWord);
        }
        if(strncmp(articleWord, dictionaryWord,strlen(articleWord)))
            return;
        printf(articleWord);
}
