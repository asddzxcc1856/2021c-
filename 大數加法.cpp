#include <iostream> //�j�ƥ[�k 
using namespace std;

int main ()
{
   
   string a,b;
   
   int c[2000];
   
   cin >> a >> b;
   
   int alen = a.length();
   int blen = b.length();
   
   
   if(alen>=blen) //�p�Ga�Ʀr���פj��b�Ʀr���� 
   {
      //��a��i�}�C�A��b��i�}�C 
      for (int i=0;i<alen;i++)
      {
         c[i] = (a[i]-48);
      }
      for (int i=0;i<blen;i++)
      {
         c[i] += (b[i]-48);
      }
      //�B�z�i�� 
      for (int i=alen-1;i>=0;i--)
      {
         if(c[i]>=10)
         {
            c[i-1] = c[i] / 10;
            c[i]%=10; 
         }
      }
      //��X 
      for (int i=0;i<alen;i++)
      {
         cout << c[i];
      }
   }
   else if(blen>alen) //�p�Gb�Ʀr���פj��a�Ʀr���� 
   {
      //��b��i�}�C�A��a��i�}�C
      for (int i=0;i<blen;i++)
      {
         c[i] = (b[i]-48);
      }
      for (int i=0;i<alen;i++)
      {
         c[i] += (a[i]-48);
      }
      //�B�z�i�� 
      for (int i=blen-1;i>=0;i--)
      {
         if(c[i]>=10)
         {
            c[i-1] = c[i] / 10;
            c[i]%=10; 
         }
      }
      //��X 
      for (int i=0;i<blen;i++)
      {
         cout << c[i];
      }
   }
   
   
   
}
