#include<iostream>
#include<cstdio>
#include<cstdlib>

#include"gezhi.h"

using namespace std;

int main()
{


    // 一个指向整数的指针
    int *p_one_num;
    int* p_two_num;
    int num_one=0,numt_two=0;   //存放输入数 
    int one_wei=0,two_wei=0;
    cout<<"请输入第一个整数（9位）:";
    cin>>num_one;
    cout<<"请输入第二个整数（9位）:";
    cin>>numt_two;

    one_wei=wei_num(num_one);
    two_wei=wei_num(numt_two);

    cout<<"第一个整数"<<one_wei<<"位"<<endl;
    cout<<"第二个整数"<<two_wei<<"位"<<endl;
     
     
    cout<<"分离的数组是："<<endl;
        
    p_one_num=yiwei_num(num_one);
    for ( int i = 0; i < one_wei; i++ )
   {
        int b_one_num[] = { 0 };   //存放数组
       cout << "*(p_one_num + " << i << ") : ";
       cout << *(p_one_num + i) << endl;
       int ii = one_wei;
       b_one_num[ii] = *(p_one_num + i);       
       cout << "倒序数组是：" << b_one_num << ":"<<endl;
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
