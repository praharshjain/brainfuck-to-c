#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "#include <stdio.h>\nchar arr[30000]={0};\nchar *ptr=arr;\nint main()\n{\n";
    while (cin >> ch)
    {
        switch (ch)
        {
        case '>':
            cout << "((ptr == &arr[29999])?(ptr = &arr[0]):(ptr++));";
            break;
        case '<':
            cout << "((ptr == &arr[0])?(ptr = &arr[29999]):(ptr--));";
            break;
        case '+':
            cout << "++*ptr;";
            break;
        case '-':
            cout << "--*ptr;";
            break;
        case '.':
            cout << "putchar(*ptr);";
            break;
        case ',':
            cout << "*ptr=getchar();";
            break;
        case '[':
            cout << "while (*ptr)\n{";
            break;
        case ']':
            cout << "}";
        }
        cout << "\n";
    }
    cout << "return 0;\n}";
    return 0;
}