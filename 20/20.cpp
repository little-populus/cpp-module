import Module;
import <iostream>;

int x;
extern int x = 10;

int main()
{
    MyFunc();
    base<int> b {};
    print<base<int>>()();
    print<double>()();
    Module::MyFunc();
    partFunc();
    return 0;
}
