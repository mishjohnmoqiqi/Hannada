#include<iostream>
#include<cstdio>
#include<cstdlib>

#include"gezhi.h"

using namespace std;

int main()
{


    // һ��ָ��������ָ��
    int *p_one_num;
    int* p_two_num;
    int num_one=0,numt_two=0;   //��������� 
    int one_wei=0,two_wei=0;
    cout<<"�������һ��������9λ��:";
    cin>>num_one;
    cout<<"������ڶ���������9λ��:";
    cin>>numt_two;

    one_wei=wei_num(num_one);
    two_wei=wei_num(numt_two);

    cout<<"��һ������"<<one_wei<<"λ"<<endl;
    cout<<"�ڶ�������"<<two_wei<<"λ"<<endl;
     
     
    cout<<"����������ǣ�"<<endl;
        
    p_one_num=yiwei_num(num_one);
    for ( int i = 0; i < one_wei; i++ )
   {
        int b_one_num[] = { 0 };   //�������
       cout << "*(p_one_num + " << i << ") : ";
       cout << *(p_one_num + i) << endl;
       int ii = one_wei;
       b_one_num[ii] = *(p_one_num + i);       
       cout << "���������ǣ�" << b_one_num << ":"<<endl;
       ii--;
   }
    p_two_num = yiwei_num(numt_two);
    for (int j = 0; j <two_wei; j++)
    {
        cout << "*(p_two_num + " << j << ") : ";
        cout << *(p_two_num + j) << endl;

    }

    system("pause");

    return 0;

}
