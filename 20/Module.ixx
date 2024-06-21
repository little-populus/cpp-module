export module Module;
export import :part;
import <iostream>;
export void
MyFunc();

export struct myStruct {
    int x = 0;
    std::string s;
};
export template <typename T>
struct base {
    constexpr base() { std::cout << std::format("{}", typeid(base).name()) << '\n'; }
};

export template <typename T>
struct print {
    inline void operator()() { std::cout << typeid(T).name() << '\n'; }
};

export namespace Module {
inline void MyFunc()
{
    std::cout << "Module::MyFunc()\n";
}
} // namespace Module