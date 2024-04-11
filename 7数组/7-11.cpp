/*求字符串中0-9每个字符出现的次数*/
#include <stdio.h>

int main() {
    char str[100]; // 假设字符串长度不超过100个字符
    int count[10] = {0}; // 用于存储数字0到9出现的次数，初始化为0
    int length = 0; // 用于存储字符串长度

    printf("请输入一个字符串: ");
    scanf("%s", str); // 从用户输入读取字符串

    // 计算字符串长度
    while (str[length] != '\0') {
        length++;
    }

    // 遍历字符串，统计每个数字字符出现的次数
    for (int i = 0; i < length; i++) {
        if (str[i] >= '0' && str[i] <= '9') { // 判断字符是否为数字字符
            int digit = str[i] - '0'; // 将字符转换为对应的数字
            count[digit]++; // 增加该数字出现的次数
        }
    }

    // 输出每个数字字符出现的次数
    printf("每个数字字符出现的次数:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d 出现了 %d 次\n", i, count[i]);
    }

    return 0;
}

