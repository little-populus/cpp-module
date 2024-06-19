import Module;
import <iostream>;

int x;
extern int x = 10;

template<typename T>
struct base
{
	base()
	{
		std::cout << typeid(T).name() << '\n';
	}
};

template<> struct base<int>;

int main()
{
	std::cout << std::format("{}\n", x);
	MyFunc();
	Module::MyFunc();
	partFunc();
	return 0;
}
