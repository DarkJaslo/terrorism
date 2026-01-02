#include <type_traits>

#define for template 
#define any <
#define type typename
#define types typename...
#define have >
#define having < 
#define specifically >
#define all ...
#define trait struct
#define define using
#define of <
#define from typename
#define get >::t

for any types T have
trait biggest_type{};

for any bool B, type T1, type T2, types T have
trait return_biggest
{
    define t = from biggest_type having T1, T all get;
};

for any type T1, type T2, types T have
trait return_biggest of false, T1, T2, T all specifically
{
    define t = from biggest_type having T2, T all get;
};

for any type T1, type T2, types T have
trait biggest_type of T1, T2, T all specifically
{
    define t = from return_biggest having (sizeof(T1) > sizeof(T2)), T1, T2, T all get;
};

for any type T have
trait biggest_type of T specifically
{
    define t = T;
};

int main()
{
    static_assert(std::is_same_v having double, biggest_type of double get specifically);

    static_assert(std::is_same_v having double, biggest_type of char, int, float, double get specifically);
}