#include <iostream>  // �ܽd �Q�αƧǥi�H�����ܤƸ�ƫ��A �q�� => �h��ȱƧ� + �ۭq�q��Ƶ��c 
#include <algorithm>
using namespace std;

struct s{
   int num;
   int score;
};

bool cmp(s a,s b)//�Ѥj��p  �ⶵ�ⶵ����������a>b
{
   return a.score > b.score;
}

bool cmp2(s a,s b)//�Ѥp��j  �ⶵ�ⶵ����������a<b
{
   return a.score < b.score;
}

int main ()
{
   s p[5]={{1,80},{2,60},{3,40},{4,90},{5,85}};
   
   //============================================================================================================
/*   
   //�ۭq�q��Ƶ��cstruct �L�k�����ϥΤ��رƧǨ禡 �����w�q�ƧǨ禡!! 
   
   //�ƧǨ禡sort(array address , array address + ����); 

   sort(p,p+5);
   
   
   //��X 
   cout << "�Ƨǫᵲ�G : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].num << " " << p[i].score << "\n";
   }
   
*/ 
   //============================================================================================================
   
   
   //�ƧǨ禡sort(array address , array address + ���� , ����禡); 
   sort(p,p+5,cmp);//�Ѱ�����C�� 
   
   
   //��X 
   cout << "�Ƨǫᵲ�G : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].num << " " << p[i].score << "\n";
   }
   
   
   //============================================================================================================
   
   
   //�ƧǨ禡sort(array address , array address + ���� , ����禡); 
   sort(p,p+5,cmp2);//�ѧC���찪�� 
   
   
   //��X 
   cout << "�Ƨǫᵲ�G : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].num << " " << p[i].score << "\n";
   }
}
