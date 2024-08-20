#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++) {
      for (int j = 0; j < width; j++) {
          float sum=(image[i][j].rgbtRed+image[i][j].rgbtGreen+image[i][j].rgbtBlue)/3.00;
          int av=round(sum);
          image[i][j].rgbtRed=av;
          image[i][j].rgbtGreen=av;
          image[i][j].rgbtBlue=av;
        }
    }
    return ;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++) {
      for (int j = 0; j < width; j++) {
        int  red=round(.393*image[i][j].rgbtRed+.769*image[i][j].rgbtGreen+.189*image[i][j].rgbtBlue);
        int green=round(.349*image[i][j].rgbtRed+.686*image[i][j].rgbtGreen+.168*image[i][j].rgbtBlue);
        int blue=round(.272*image[i][j].rgbtRed+.534*image[i][j].rgbtGreen+.131*image[i][j].rgbtBlue);
        image[i][j].rgbtRed=(red > 255) ? 255 : red;
        image[i][j].rgbtGreen=(green > 255) ? 255 : green;
        image[i][j].rgbtBlue=(blue > 255) ? 255 : blue;
      }

    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++) {
      int pixel=width-1;
      for (int j = 0; j < width/2; j++) {
          int swapred=image[i][j].rgbtRed;
          int swapgreen=image[i][j].rgbtGreen;
          int swapblue=image[i][j].rgbtBlue;

          image[i][j].rgbtRed=image[i][pixel].rgbtRed;
          image[i][j].rgbtGreen=image[i][pixel].rgbtGreen;
          image[i][j].rgbtBlue=image[i][pixel].rgbtBlue;

          image[i][pixel].rgbtRed=swapred;
          image[i][pixel].rgbtGreen=swapgreen;
          image[i][pixel].rgbtBlue=swapblue;

          pixel--;
      }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
     
    for(int i=0;i<height;i++){
      for(int j=0;j<width;j++){
        int sumBlue=0;
        int sumRed=0;
        int sumGreen=0;
        float counter=0;
        for(int k=-1;k<2;k++){
         for(int h=-1;h<2;h++){
          if(i+k<0 || i+k > height-1 || j+h<0 || j+h>width-1){
            continue;}
            
            
          sumBlue+=image[i+k][j+h].rgbtBlue;
          sumRed+=image[i+k][j+h].rgbtRed;
          sumGreen+=image[i+k][j+h].rgbtGreen;
          counter++;
        }
      }
      
      temp[i][j].rgbtBlue=round(sumBlue/counter);
      temp[i][j].rgbtRed=round(sumRed/counter);
      temp[i][j].rgbtGreen=round(sumGreen/counter);
      
    }
  }
   for(int i=0;i<height;i++)
      for(int j=0;j<width;j++){
       image[i][j].rgbtBlue=temp[i][j].rgbtBlue;
       image[i][j].rgbtRed=temp[i][j].rgbtRed;
       image[i][j].rgbtGreen=temp[i][j].rgbtGreen;
      }
    return;
}
