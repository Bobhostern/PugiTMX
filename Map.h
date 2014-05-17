#ifndef __MAP_H_
#define __MAP_H_

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
#include <map>
#include <list>
#include "Tileset.h"
#include "TileLayer.h"
#include "ObjectGroup.h"

namespace pugitmx
{
class Map
{
public:
    Map(double vrs, std::string orient, unsigned int wd, unsigned int ht, unsigned int tlwd, unsigned int tlht, std::string bkclr = "#808080") : version(vrs), orientation(orient), width(wd), height(ht), tilewidth(tlwd), tileheight(tlht), backgroundcolor(bkclr) {};
    double getVersion() const;
    std::string getOrientation() const;
    unsigned int getWidth() const;
    unsigned int getHeight() const;
    unsigned int getTileWidth() const;
    unsigned int getTileHeight() const;
    std::string getBackgroundColor() const;
    void registerProperty(std::string, std::string);
    std::string getProperty(std::string) const;
    void registerTileset(Tileset);
    std::list<Tileset> returnTilesets() const;
    std::list<Tileset>::iterator returnTilesetsIteratorB();
    std::list<Tileset>::iterator returnTilesetsIteratorE();
    void registerTileLayer(TileLayer);
    std::list<TileLayer> returnTileLayers() const;
    std::list<TileLayer>::iterator returnTileLayersIteratorB();
    std::list<TileLayer>::iterator returnTileLayersIteratorE();
    void registerObjectGroup(ObjectGroup);
    std::list<ObjectGroup> returnObjectGroups() const;
    std::list<ObjectGroup>::iterator returnObjectGroupsIteratorB();
    std::list<ObjectGroup>::iterator returnObjectGroupsIteratorE();
    virtual ~Map();
private:
    double version;
    std::string orientation;
    unsigned int width;
    unsigned int height;
    unsigned int tilewidth;
    unsigned int tileheight;
    std::string backgroundcolor;
    std::map<std::string, std::string> properties;
    std::list<Tileset> tilesets;
    std::list<TileLayer> tilelayers;
    std::list<ObjectGroup> objectgroups;
};
};

#endif // __MAP_H_
