export module Module;
export import :part;
import <iostream>;
export void MyFunc();

export struct myStruct
{
	int x = 0;
	std::string s;
};
template<typename T>
struct base
{
	base()
	{
		std::cout << typeid(T).name() << '\n';
	}
};


export namespace Module {
	void MyFunc()
	{
		std::cout << "Module::MyFunc()\n";
	}
}