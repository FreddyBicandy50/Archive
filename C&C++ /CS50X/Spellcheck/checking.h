#ifndef checking_H
#include <iostream> 
#include <bits/stdc++.h>  
#define filename "dictionary.txt"
using namespace std;

//checking arguments for initial program
void argument_check(int argc){
    if(argc<2){
        cout << "Usage ~ ./Speller [foldername/filename]"<<endl;
        exit(-1);
    }else if(argc >=3){
        cout << "Too few arguments!"<<endl;
        exit(-1);
    }else return;
}

//check and open files 
FILE *checkfile(bool dictionary_file,char argument[]){
    FILE *file;
    if (dictionary_file==false) {
        file=fopen(argument, "r"); 
        if(file==NULL){
            cout<<argument<<" Not Found!"<<endl;
            exit(-1);
        }
        return file;
    }else {
        file = fopen(filename, "r");
        if(file==NULL){
            cout<<"dictionary.txt Not Found!"<<endl;
            exit(-1);
        }
        return file;
    }
} 
//TODOO SPELLE CHECK
#endif // !RETURN_H