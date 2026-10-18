#include <iostream>
using namespace std;
int main()
{
    string test;
    cin>>test;
    cout<<test<<endl;
    return 0;
    system("pause");
}
//发现cin输入会在输入空格时停止读取，只会读取到第一个空格前的内容。如果需要读取包含空格的整行输入，可以使用getline函数。例如：
//#include <iostream>
//#include <string>
//using namespace std;

//int main()
//{
//    string test;
//    getline(cin, test);
//    cout << test << endl;
//    return 0;
//    system("pause");
//}