#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define header 44
typedef uint8_t Byte;
typedef uint16_t Bytes;


int buffersound(char *buffer,FILE** input,FILE** output){
  if (input==NULL || output==NULL) {
    exit(-1);
    return 1;
  }else{
    Bytes sample ;
    float factor=atof(buffer);
    int count=0;
    while (fread(&sample,sizeof(Bytes),1,*input)==1) {
         sample*=factor;
        fwrite(&sample,sizeof(Bytes),1,*output);}

  }
  return 0;
}


int copyheader(FILE** input,FILE** output){
    if (input==NULL || output==NULL) {
      exit(-1);
      return 1;
    }else{
    Byte HEADER_FILE[header];
    fread(HEADER_FILE,sizeof(Byte),header,*input);
    fwrite(HEADER_FILE,sizeof(Byte),header,*output);

  }
  return 0;
}


int main (int argc,char *argv[]){
  if(argc!=4){
    printf("Usage ./volume [Input File name ex:input.wav] [Output File name ex:output.wav] [buffer ex:2.0]\n");
  }else{
    FILE *input=fopen(argv[1],"r");
    if (input==NULL) {
      printf("file error\n");
      return 1;}
    FILE *output=fopen(argv[2],"w");
    if (output==NULL) {
      printf("file error\n");
      return 1;}
    copyheader(&input,&output);
    buffersound(argv[3],&input,&output);
    fclose(input);
    fclose(output);
  }
}
