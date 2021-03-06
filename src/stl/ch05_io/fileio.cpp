/** @file */
#include <fstream>
#include <iostream>

using namespace std;
/**
 * @brief ofstream 创建文件并且写入变量的值
 * @brief ifstream 打开文件并且读取文件内容写入相应变量的值
 */ 
int main() {
    ofstream os("outputfile.txt");

    int i = 231;
    double d = 3.1883;
    char c = 'j';
    string name = "James";

    os << i << " " << d << " " << c << " " << name;
    os.close();

    os.open("outputfile.txt", ios::app);

    os << "\nThis is appended to the end!\n";
    os.close();

    ifstream is("outputfile.txt");

    int i_2;
    double d_2;
    char c_2;
    string name_2;

    is >> i_2 >> d_2 >> c_2 >> name_2;
    is.close();

    cout << i_2 << " " << d_2 << " " << c_2 << " " << name_2 << "\n";

    return 0;
}
