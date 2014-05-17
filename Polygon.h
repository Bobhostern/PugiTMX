#ifndef __POLYGON_H_
#define __POLYGON_H_

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
#include "stringh.h"

namespace pugitmx
{
class Polygon
{
public:
    Polygon() {}
    Polygon(std::string pint) : points(pint) {}
    std::string getPoints() const;
private:
    std::string points;
};
};

#endif // __POLYGON_H_
