#include <iostream>
using namespace std;
//n is the sizeof all strings and arrays
int n=100;
int main (void){
  //declaration
  int a=0,i,j,k,String_to_int[n],calc=0,cal2=0,temp,OverX;
  string Credit_Number;
  char c[2]={'0'};
  //prompt input for user
  do{  
    a=0;
    Credit_Number;
    printf("Number:");
    cin>>Credit_Number;
    n=Credit_Number.length();
    for (i = 0; i < n; i++)
      if (Credit_Number[i]>='0' && Credit_Number[i]<='9')
        continue;
      else
        a=1;

    if (n<13 || n>16 || a==1)
        printf("Not Valid \nNumber:");

  } while (a!=0 || n<13 || n>16);


  //converting string to int
  for (i = 0; i <n; i++) {
    c[0]=Credit_Number[i];
    String_to_int[i]=atoi(c);
  }

   //calculate checksum
 if (n==15) {
  for (i = n-1; i >=0; i--)
    if (i%2!=0) {
      temp=String_to_int[i]*2;
      if (temp>=10) {
        OverX=temp/10;
        calc+=OverX;
        temp%=10;
        calc+=temp;}
      else
        calc+=temp;
    }
    else
      calc+=String_to_int[i];

}else if (n==16 && String_to_int[0]!=4) {
  for (i = n-1; i >=0; i--)
    if (i%2==0) {
      temp=String_to_int[i]*2;
      if (temp>=10) {
        OverX=temp/10;
        calc+=OverX;
        temp%=10;
        calc+=temp;}
      else
        calc+=temp;}
    else
      calc+=String_to_int[i];

}else if (String_to_int[0]==4) {
  if (n==16) {
    for (i = n-1; i >=0; i--)
      if (i%2==0) {
        temp=String_to_int[i]*2;
        if (temp>=10) {
          OverX=temp/10;
          calc+=OverX;
          temp%=10;
          calc+=temp;}
      else
        calc+=temp;
    }
    else
      calc+=String_to_int[i];
  }else if(n==13)
  {
    for (i = n-1; i >=0; i--)
      if (i%2!=0) {
        temp=String_to_int[i]*2;
        if (temp>=10) {
          OverX=temp/10;
          calc+=OverX;
          temp%=10;
          calc+=temp;}
      else
        calc+=temp;
    }
    else
      calc+=String_to_int[i];
  }
}


  //check first tow digits if match
  char first_digits[1];
  for (i = 0; i <2; i++)
    first_digits[i]=Credit_Number[i];

int first_digits_to_int=atoi(first_digits);
int its_american=0,its_master=0,its_visa=0;

  if (n==15){
    if (first_digits_to_int==34 || first_digits_to_int==37)
      its_american=1;
  }else if (n==16 && String_to_int[0]!=4){
    if (first_digits_to_int==51 || first_digits_to_int==52 ||first_digits_to_int==53 ||first_digits_to_int==54 ||first_digits_to_int==55)
      its_master=1;
  }else if((n==16 || n==13) &&(String_to_int[0]==4))
  {
    its_visa=1;
  }



  //printing Card name
  if (calc%2==0 && calc%5==0) {
    if (its_american==1) {
      printf("America Express\n");
    }
    if (its_master==1) {
      printf("Master Card\n");
    }
    if (its_visa==1)
    {
      printf("Visa\n");
    }
  }else{
    printf("INVALID\n");
  }
}
