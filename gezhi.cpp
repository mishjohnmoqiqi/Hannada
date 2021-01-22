#include <iostream>
#include <cstdlib>
#include <ctime>
#include"gezhi.h"

int wei_num(int num_one_two)
{
    int num_n=0;  //
    int result_num[]={0};

    do
    {
        /* code */
        num_n++;
        //result_num[num_n]=num_one_two%10; 
        num_one_two /=10;
    } while (num_one_two>0);
    
    return num_n;
}

//对整数进行位数分离,指针函数
int * yiwei_num(int m)
{
    int i_num=0;
    //int * p_num;
    static int result_num[]={0};
    // 设置种子
    srand( (unsigned)time( NULL ) );
    while (m)
    {
        /* code */
        if(m<0)
        {
            m=-m;

        }
        result_num[i_num]=m%10;
        m /=10;
        i_num++;
    }

    return result_num;
    
}

