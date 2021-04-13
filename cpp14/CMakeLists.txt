set(TARGET cpp14)

add_executable(${TARGET} main.cpp)
set_property(TARGET ${TARGET} PROPERTY CXX_STANDARD 14)
