#include <iostream>
#include <ctype.h>
#include <string.h>
#include<stdio.h>
int main ()
{using namespace std;
    string ch1,ch2;
    cin>>ch1>>ch2;
    int len = ch1.len();
    int flag =0;
    for(int i=0;i<len;i++)
    {
        if (isupper(ch1[i])==0)
            tolower(ch1[i]);
            if (isupper(ch2[i])==0)
            tolower(ch2[i]);


    }
   for (int i=0;i<len;i++)
   {
       if(ch1[i]<ch2[i])
      {

       cout<<"-1";
         flag == 1;
       break;}
       if (ch1[i]>ch2[i])
       {

        cout <<"1";
       flag == 1;
       break;}
   }
   if (flag ==0)
    cout<<"0";

    return 0;
}

