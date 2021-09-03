
/*****************************************************

File name��Quicksort

Author��Zhengqijun    Version:1.0    Date: 2016/11/04

Description: ��������п�������

Funcion List: ʵ�ֿ��������㷨

*****************************************************/

 

#include <stdio.h>

#include <stdlib.h>

 

#define BUF_SIZE 10

 

/**************************************************

 *��������display

 *���ã���ӡ����Ԫ��

 *������array - ��ӡ�����飬maxlen - ����Ԫ�ظ���

 *����ֵ����

 **************************************************/

void display(int array[], int maxlen)

{

    int i;

 

    for(i = 0; i < maxlen; i++)

    {

        printf("%-3d", array[i]);

    }

    printf("\n");

 

    return ;

}

 

/********************************

 *��������swap

 *���ã�������������ֵ

 *������������������

 *����ֵ����

 ********************************/

void swap(int *a, int *b)  

{

    int temp;

 

    temp = *a;

    *a = *b;

    *b = temp;

 

    return ;

}

 

/************************************

 *��������quicksort

 *���ã����������㷨

 *������

 *����ֵ����

 ************************************/

void quicksort(int array[], int maxlen, int begin, int end)

{

    int i, j;

 

    if(begin < end)

    {

        i = begin + 1;  // ��array[begin]��Ϊ��׼������˴�array[begin+1]��ʼ���׼���Ƚϣ�

        j = end;        // array[end]����������һλ

          

        while(i < j)

        {

            if(array[i] > array[begin])  // ����Ƚϵ�����Ԫ�ش��ڻ�׼�����򽻻�λ�á�

            {

                swap(&array[i], &array[j]);  // ����������

                j--;

            }

            else

            {

                i++;  // �����������һλ���������׼���Ƚϡ�

            }

        }

 

        /* ����whileѭ����i = j��

         * ��ʱ���鱻�ָ����������  -->  array[begin+1] ~ array[i-1] < array[begin]

         *                           -->  array[i+1] ~ array[end] > array[begin]

         * ���ʱ������array�ֳ��������֣��ٽ�array[i]��array[begin]���бȽϣ�����array[i]��λ�á�

         * ���array[i]��array[begin]���������������ָ�ֵ������Դ����ƣ�ֱ�����i = j�������������˳���

         */

 

        if(array[i] >= array[begin])  // �������Ҫȡ�ȡ�>=������������Ԫ������ͬ��ֵʱ������ִ���

        {

            i--;

        }

 

        swap(&array[begin], &array[i]);  // ����array[i]��array[begin]

        

        quicksort(array, maxlen, begin, i);

        quicksort(array, maxlen, j, end);

    }

}

 

// ������

int main()

{

    int n;

    int array[BUF_SIZE] = {12,85,25,16,34,23,49,95,17,61};

    int maxlen = BUF_SIZE;

    

    printf("����ǰ������\n");

    display(array, maxlen);

    

    quicksort(array, maxlen, 0, maxlen-1);  // ��������

    

    printf("����������\n");

    display(array, maxlen);

    

    return 0;

}

