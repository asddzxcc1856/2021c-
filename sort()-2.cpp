#include <iostream>  // �ܽd �Q�αƧǥi�H�����ܤƸ�ƫ��A �q�� => �h��ȱƧ� 
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
   return a.second > b.second;
}

bool cmp2(pair<int,int> a,pair<int,int> b)
{
   return a.second < b.second;
}

int main ()
{
   //�ŧi�S�ƧǪ�p�}�C 
   pair<int,int> p[5]={{1,30},{2,40},{3,20},{4,90},{5,80}};//�Ĥ@�� : �ǥͽs�� . �ĤG�� : �ǥͤ��� 
   
   
   //============================================================================================================
   
   
   //�ƧǨ禡sort(array address , array address + ����); 
   sort(p,p+5); 
   
   
   //��X 
   cout << "�Ƨǫᵲ�G : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].first << " " << p[i].second << "\n";
   }
   
   
   //============================================================================================================
   
   
   //�ƧǨ禡sort(array address , array address + ���� , ����禡); 
   sort(p,p+5,cmp);//�Ѱ�����C�� 
   
   
   //��X 
   cout << "�Ƨǫᵲ�G : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].first << " " << p[i].second << "\n";
   }
   
   
   //============================================================================================================
   
   
   //�ƧǨ禡sort(array address , array address + ���� , ����禡); 
   sort(p,p+5,cmp2);//�ѧC���찪�� 
   
   
   //��X 
   cout << "�Ƨǫᵲ�G : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].first << " " << p[i].second << "\n";
   }

}
