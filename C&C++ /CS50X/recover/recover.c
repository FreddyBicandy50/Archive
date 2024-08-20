#include <stdio.h>
#include <stdint.h>
#define blocksize 512
#define n 8
int main (int argc,char *argv[]){
    if (argc != 2)
    {
        printf("Usage\n./recover [filename EX:card.raw]\n");
        return 1;
    }

    FILE *input_file=fopen(argv[1],"r");
    if (input_file==NULL)
    {
        printf("file error");
        return 1;
    }

    FILE *output = fopen(argv[1], "r");
    int counter=0,foundjpg=0;
    uint8_t buffer[blocksize];
    char filename[n];
    while (fread(&buffer,blocksize,sizeof(uint8_t),input_file)==1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            foundjpg=1;
            fclose(output);
            sprintf(filename,"%02i.jpg",counter);
            output = fopen(filename, "w");
            fwrite(&buffer, blocksize, sizeof(uint8_t), output);
            counter++;
        }
        else if (foundjpg == 1)
        {
            fwrite(&buffer, blocksize, sizeof(uint8_t), output);
        }
    }
    fclose(input_file);
    fclose(output);
    return 0;
}