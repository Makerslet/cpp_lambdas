#include <vector>
#include <algorithm>
#include "functors.h"

int main(int, char const**)
{
    std::vector<int> values;
    for(int i = 0; i < 10; ++i)
        values.push_back(i);

    // call operator()
    cpp98::print_functor printer;
    std::for_each(values.begin(), values.end(), printer);

    // conversion to function pointer
    void(*foo_ptr)(int) = cpp98::print_functor();
    typedef std::vector<int>::iterator iter;
    for(iter it = values.begin(); it != values.end(); ++it)
        foo_ptr(*it);

	return 0;
}
