#ifndef FUNCTORS_H
#define FUNCTORS_H

#include <iostream>

namespace cpp98 {

struct print_functor {

    inline void operator()(int value) const {
        std::cout << value << std::endl;
    }

    typedef void(*return_value)(int);

    inline operator return_value() const{
        return internal;
    }

private:
    static inline void internal(int value) {
        std::cout << value << std::endl;
    }
};

}

#endif // FUNCTORS_H
