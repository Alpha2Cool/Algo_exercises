/*
中文的windows下的cmd默认使用GBK的编码。
每次需要的时候在VScode终端输入命令：
chcp 65001
*/


#include <iostream>
using namespace std;
int main()
{   int x= 1;
    cout << "Hello, world!" << endl;
    bool * flag = new bool(false);
    * flag = true;
    cout << sizeof(flag) << endl;
    return 0;
}


// //获取鼠标的x,y坐标
// #include<stdio.h>
// #include<windows.h>
// #include<time.h>

// int main(){
//     POINT mouse;   //用来储存鼠标的x y坐标 
//     while(1){
//         GetCursorPos(&mouse);    //调用GetCursorPos函数获取坐标值
//         printf("%d,%d\n",mouse.x,mouse.y);
//         Sleep(1000);
//     }
//     return 0; 
// }

