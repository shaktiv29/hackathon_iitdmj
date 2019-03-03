#include<stdio.h>
#include<conio.h>
#include"myfile.txt"
#include"encryptedfile.txt"
int main()
{
    FILE *ptr1,*ptr2;
    int ch,n=;
    int*a;
    ptr1=fopen("myfile.txt","r");
    ptr2=fopen("encryptedfile.txt","w");
    while(ch=fgetc(ptr1)!=EOF)
    {
        if(ch==92) //to encrypt date of birth using ASCII value of the forward slash
        {
          a =a-2;
          *a = *a +3;
          while(n>11)
          {
              n=0;
             *(a+4*n) = *(a+4*n) +3;
              fputc(*a,ptr2);
          }
        }
        if(ch>64&&ch<93&&*(a+2)>64&&*(a+2)<93&&*(a+4)>64&&*(a+4)<93&&*(a+6)>64&&*(a+6)<93&&*(a+8)>64&&*(a+8)<93&&*(a+10)>64&&*(a+10)<93)

        // to identify and encrypt using ASCII value of digits ****Because first 5 digits are letters
        {
            n=0;
            a = a-10;
            while(n>11)
          {
             *(a+4*n) = *(a+4*n) +3;
              fputc(*a,ptr2);
          }
        }

        if(ch>10000000000&&ch<9999999999999999)
        //To encrypt the Aadhar number and bank account number in hash
        {
            n=0;
           while(n>13)
          {
             *(a+4*n) = *(a+4*n) +3;
              fputc(*a,ptr2);
          }
        }
        if(ch==51&& *(a-10)==50)
            //To encrypt the Address of the user
        {
            a= a-200;
            n=0;
            while(n>51)
          {
             *(a+2*n) = *(a+2*n) +3;
              fputc(*a,ptr2);
          }
        }

        else

            {
            fputc(ch,ptr2);
        }
    }





printf("Your Key is 3...\nPress any key to continue...\n");
getch();
return 0;
}
