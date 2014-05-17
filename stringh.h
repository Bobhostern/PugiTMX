#ifndef __STRINGH_H_
#define __STRINGH_H_

/*
PugiTMX - TMX reader using PugiXML
Copyright (C) 2014 Uche "Bob Hostern" Okwo

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <string>
#include <sstream>
#include <iomanip>

template<class N>
class String
{
public:
    static std::string toString(N a) {
        std::stringstream n;
        n << a;
        return n.str();
    }

    static N toElse(std::string a) {
        std::stringstream n;
        n << a;
        N x;
        n >> x;
        return x;
    }
};

class NString
{
public:
    static int fromHex(std::string a) {
        std::stringstream str;
        int ret;
        str << a;
        str >> std::hex >> ret;
        return ret;
    }

    static int fromOctal(std::string a) {
        std::stringstream str;
        int ret;
        str << a;
        str >> std::oct >> ret;
        return ret;
    }

    static int fromDecimal(std::string a) {
        std::stringstream str;
        int ret;
        str << a;
        str >> std::dec >> ret;
        return ret;
    }
};

class BString
{
public:
    static bool fromStringText(std::string a) {
        std::stringstream str;
        bool x;
        str << a;
        str >> std::boolalpha >> x;
        return x;
    }
};

#endif // __STRINGH_H_
