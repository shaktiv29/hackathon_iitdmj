#include<stdio.h>
#include<conio.h>
#include"ecpfile.txt"
#include"dcpfile.txt"
int main()
{
    FILE *ptr1,*ptr2;
    int ch,key,n=0;
    printf("Enter the key...");
    scanf("%d",&key);
    int*a;
    ptr1=fopen("ecpfile.txt","r");
    ptr2=fopen("dcpfile.txt","w");
    while(ch=fgetc(ptr1)!=EOF)
    {
        if(ch==95) //to encrypt date of birth using ASCII value of the forward slash
        {
          a =a-2;
          *a = *a +3;
          while(n>11)
          {
              n=0;
             *(a+4n) = *(a+4n) -3;
              fputc(*a,ptr2);
          }
        }
        if(ch>67&&ch<96&&*(a+2)>67&&*(a+2)<96&&*(a+4)>67&&*(a+4)<96&&*(a+6)>67&&*(a+6)<96&&*(a+8)>67&&*(a+8)<96&&*(a+10)>67&&*(a+10)<96)

        // to identify and encrypt using ASCII value of digits ****Because first 5 digits are letters
        {
            n=0;
            a = a-10;
            while(n>11)
          {
             *(a+4n) = *(a+4n) -3;
              fputc(*a,ptr2);
          }
        }

        if(ch>10000000003&&ch<100000000000002)
        //To encrypt the Aadhar number and bank account number in hash
        {
            n=0;
           while(n>13)
          {
             *(a+4n) = *(a+4n) -3;
              fputc(*a,ptr2);
          }
        }
        if(ch==54&& *(a-10)==53)
            //To encrypt the Address of the user
        {
            a= a-200;
            n=0;
            while(n>51)
          {
             *(a+2n) = *(a+2n) -3;
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
