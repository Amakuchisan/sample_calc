#include <stdio.h>
#include <stdlib.h>

int add(int a, int b); // 足し算
int subtract(int a, int b); // 引き算
int multiply(int a, int b); // かけ算
int divide(int a, int b); // わり算
void error(char message[]); // エラーメッセージを出力し、プログラムを終了する

int main(void) {
    int a, b, ans;
    char operand;

    printf(
           "入力された2値の計算ができます。a + b のように入力してください。\n"
           "[足し算: +], [引き算: -], [かけ算: *], [わり算: /]\n"
           "入力してください: ");

    if(scanf("%d %c %d", &a, &operand, &b) != 3) {
        error("数 記号 数の順に入力してください。");
    }

    switch(operand) { // 入力された記号の場合分け
        case '+': // 記号が+の時addを呼び出す
            ans = add(a, b);
            break;
        case '-': // 記号が-の時subtractを呼び出す
            ans = subtract(a, b);
            break;
        case '*': // 記号が*の時multiplyを呼び出す
            ans = multiply(a, b);
            break;
        case '/': // 記号が/の時divideを呼び出す
            ans = divide(a, b);
            break;
        default:
            error("入力された記号が間違っています。\n"
                  "使える記号は、[足し算: +], [引き算: -], [かけ算: *], [わり算: /]です。");
    }

    printf("答えは %d です。\n", ans); // 計算結果を出力

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return 0;
}

int divide(int a, int b) {
    return a / b;
}

void error(char message[]) {
    fprintf(stderr, "[Error!] %s\n", message);
    exit(1);
}
