#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
   //�ŧi�S�ƧǪ�c�}�C 
   int c[5] = {5,3,4,2,1,36,4};
   
   //�ƧǨ禡sort(array address,array address + ����); 
   sort(c,c+5);
   
   //��X 
   cout << "�Ƨǫᵲ�G : "
   for (int i=0;i<5;i++)
   {
      cout << c[i] << " ";
   }
   
}
