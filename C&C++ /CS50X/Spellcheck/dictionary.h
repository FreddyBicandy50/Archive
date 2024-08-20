#ifndef dictionnary_H
#include <iostream> 
using namespace std; 
typedef struct pointer{
    string word;
    struct pointer *next;
}node;
const int LEN=26;
node *table[LEN][LEN]; 
void unload(){
    for (int i = 0; i < LEN; i++){
        node *temp;
        for (int j = 0; j < LEN; j++)
            while (table[i][j] != NULL){
                temp=table[i][j];
                table[i][j]=table[i][j]->next;
                free(temp);
            }
    }
    
}
bool search(int x,int y,string word){
    if((x<0 || x>25) || (y<0 || y>25)) return false;
    node *list_head = table[x][y];        
    while (list_head != NULL) {
        if (word == list_head->word) return true; 
        list_head=list_head->next;
    }
    return false;
}

void spell_check(FILE *text_file){ 

    cout<<"MISSPELED WORDS:\n"; 
    char getwords[255];
    int filewords = 0,misspeled_words=0;

    while (fscanf(text_file, "%s",&getwords) != EOF) { 

        string tolower = getwords;
        bool special=false,flag=false;
        if (!isalpha(tolower[0]) || tolower.length()<=1) continue;
        transform(tolower.begin(), tolower.end(), tolower.begin(), ::tolower);
        if (search(tolower[0] - 'a', tolower[1] - 'a', tolower)==false) {
            cout<< getwords<<endl;
            misspeled_words++;
        }
        filewords++;
    }
    printf("\n\n\n\n\nMISPELED WORDS TOTAL\t%d\n", misspeled_words);
    printf("TEXT FILE WORDS\t%d\n", filewords);
}

void store(int index1,int index2,char getword[255]){
    node *temp=(node *) malloc(sizeof(node));
    temp->word=getword;
    temp->next=table[index1][index2];
    table[index1][index2]=temp;
    return;
}


void load(FILE *dictionary_file){
    char getwords[255]; 
    int counter = 0; 
    while(fscanf(dictionary_file, "%s",&getwords)!=EOF){
        if(getwords[1]-97>=0) store(getwords[0]-97,getwords[1]-97,getwords);
        else store(getwords[0]-97, 0, getwords);
        counter++;
    }
    printf("WORDS IN DICITIONNARY:\t%d\n", counter);
    return ;
}
#endif // !dictionnary_H
