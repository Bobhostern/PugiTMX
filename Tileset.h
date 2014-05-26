#ifndef __TILESET_H_
#define __TILESET_H_

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
#include "Image.h"
#include <map>
#define uint unsigned int

namespace pugitmx
{
struct TilePropertyKey {
    int id;
    std::string propertyname;
};

class Tileset
{
public:
    Tileset() : firstgid(-1), name(""), tilewidth(0), tileheight(0) {};
    Tileset(uint fgd, std::string nme, uint tlwd, uint tlht, Image srcim) : firstgid(fgd), name(nme), tilewidth(tlwd), tileheight(tlht), image(srcim) {};
    int getFirstGid() const;
    std::string getName() const;
    uint getTileWidth() const;
    uint getTileHeight() const;
    Image getImage() const;
    void registerProperty(TilePropertyKey, std::string);
    std::string getProperty(TilePropertyKey) const;
private:
    int firstgid;
    std::string name;
    uint tilewidth;
    uint tileheight;
    Image image;
    std::map<std::string, std::string> properties;
};
};

#undef uint

#endif // __TILESET_H_
