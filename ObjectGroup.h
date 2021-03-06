#ifndef __OBJECTGROUP_H_
#define __OBJECTGROUP_H_

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
#include "Object.h"
#include <list>
#include <map>

namespace pugitmx
{
class ObjectGroup
{
public:
    ObjectGroup() {};
    ObjectGroup(std::string nme, int wd, int ht) : name(nme), width(wd), height(ht) {};
    std::string getName() const;
    int getWidth() const;
    int getHeight() const;
    void registerObject(Object);
    std::list<Object> grabObjects();
    std::list<Object>::iterator grabObjectsIteratorB();
    std::list<Object>::iterator grabObjectsIteratorE();
    void registerProperty(std::string, std::string);
    std::string getProperty(std::string) const;
private:
    std::string name;
    int width;
    int height;
    std::map<std::string, std::string> properties;
    std::list<Object> objects;
};
};

#endif // __OBJECTGROUP_H_
