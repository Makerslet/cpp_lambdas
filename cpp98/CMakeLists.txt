set(TARGET cpp98)

add_executable(${TARGET} main.cpp functors.h)
set_property(TARGET ${TARGET} PROPERTY CXX_STANDARD 98)
