# include <stdio.h>

// 声明
int add(int, int);

// 入口
int main() {
    printf("hello world\n");
    int a = 1;
    int b = 2;
    int c = add(a,b);
    printf("c = %d\n", c);
    return 0;
}

// 两整数相加
int add(int a, int b) {
    return a + b;
}


// 是否是水仙花
int is_water_flower(int a, int b, int c) {
    return a * 100  + b * 10 + c == a * a * a + b * b * b + c * c * c;
}


