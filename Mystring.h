#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring
{
friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string




}








#endif // _MYSTRING_H_
