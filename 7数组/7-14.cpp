/*�ϲ���������˳�������*/ 
#include <stdio.h>
int main() {
    int a1[5], a2[5], a3[10];
    int i1, i2, i3;
    printf("Enter elements of a1 in ascending order: ");//��ʾ�����һ���ź�������� 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter elements of a2 in ascending order: ");//��ʾ����ڶ����ź�������� 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a2[i]);
    }
    int i = 0, j = 0, k = 0;//�����±���㿪ʼ 
    while (i < 5 && j < 5) //����������ͬ�±��ӦԪ�رȽ�
    {
        if (a1[i] < a2[j]) 
        {
            a3[k++] = a1[i++];
        }
        else
        {
            a3[k++] = a2[j++];
        }
    } 

    // �������һ�����黹��ʣ��Ԫ�أ���ʣ��Ԫ�ظ��Ƶ��ϲ����������
    while (i < 5)
    {
        a3[k++] = a1[i++];
    }
    while (j < 5)
    {
        a3[k++] = a2[j++];
    }

    int mergedLength = k; // ��¼�ϲ��������ʵ�ʳ���
    printf("Merged array: ");
    for (int c = 0; c < mergedLength; c++)
    {
        printf("%d ", a3[c]);
    }

    return 0;
}

