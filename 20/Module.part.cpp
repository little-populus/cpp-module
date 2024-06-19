module Module;


extern template struct base<int>;
void partFunc()
{
	std::cout << "Module::partFunc()\n";

	base<int> b;
}