/*合并两个已有顺序的数组*/ 
#include <stdio.h>
int main() {
    int a1[5], a2[5], a3[10];
    int i1, i2, i3;
    printf("Enter elements of a1 in ascending order: ");//提示输入第一个排好序的数组 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter elements of a2 in ascending order: ");//提示输入第二个排好序的数组 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a2[i]);
    }
    int i = 0, j = 0, k = 0;//数组下标从零开始 
    while (i < 5 && j < 5) //两个数组相同下标对应元素比较
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

    // 如果其中一个数组还有剩余元素，将剩余元素复制到合并后的数组中
    while (i < 5)
    {
        a3[k++] = a1[i++];
    }
    while (j < 5)
    {
        a3[k++] = a2[j++];
    }

    int mergedLength = k; // 记录合并后数组的实际长度
    printf("Merged array: ");
    for (int c = 0; c < mergedLength; c++)
    {
        printf("%d ", a3[c]);
    }

    return 0;
}

