// 1120306-07_ITSA NO-08.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//題目8. 質數判別

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int in = 0, out = 0;
    bool flag = false;
    while (cin >> in)
    {
        in == 1 ? flag = true : flag = false;
        out = sqrt(in);
        for (int i = out; i > 1; i--)
        {
            in% i == 0 ? flag = true : flag = false;
            if (flag == true)break;
        }
        flag == true ? cout << "NO"<<endl : cout << "YES" <<endl;

    }

    return 0;
}
