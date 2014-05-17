#ifndef __OBJECT_H_
#define __OBJECT_H_

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
#include <map>
#include "stringh.h"
#include "square.h"
#include "Polygon.h"

namespace pugitmx
{
class Object
{
public:
    Object() : _object(0, 0, 0, 0) {};
    Object(std::string nme, std::string typ, int gd, int x, int y, int wd, int ht, bool ellips, Polygon plgn) : name(nme), type(typ), gid(gd), _object(x, y, wd, ht), ellipse(ellips), polygon(plgn) {};
    std::string getName() const;
    std::string getType() const;
    int getGid() const;
    int getObjectX() const;
    int getObjectY() const;
    int getObjectWidth() const;
    int getObjectHeight() const;
    bool isEllipse() const;
    Polygon getPolygon() const;
    void registerProperty(std::string, std::string);
    std::string getProperty(std::string) const;
private:
    std::string name;
    std::string type;
    int gid;
    Square _object;
    std::map<std::string, std::string> properties;
    bool ellipse;
    Polygon polygon;
};
};

#endif // __OBJECT_H_
