#include <stdio.h>

void printSpaces(int num) {
    for (int i = 0; i < num; i++) {
        printf(" ");
    }
}

void drawChristmasTree(int rows) {
    // 畫出聖誕樹的上半部分
    for (int i = 1; i < rows; i++) {
        printSpaces(rows - i); // 輸出前面的空格
        printf("*");

        if (i == 1)
        {
            printf("\n"); // 如果是第一行，直接換行
        }
        else
        {
            // 输出星號後面的空格
            for (int j = 0; j < 2*(i-1)-1; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    for(int i=0;i < rows*2-1;i++){
        printf("*");
    }
    printf("\n");

    // 畫出聖誕樹的樹幹
    for (int i = 0; i < rows ; i++) {
        printSpaces(rows - 1);
        printf("*\n");
    }
}

int main() {
    int rows;


    scanf("%d", &rows);

    drawChristmasTree(rows);

    return 0;
}
