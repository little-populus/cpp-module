export module Module;
export import :part;
import <iostream>;
export void MyFunc();

export struct myStruct
{
	int x = 0;
	std::string s;
};


export namespace Module {
	void MyFunc()
	{
		std::cout << "Module::MyFunc()\n";
	}
}