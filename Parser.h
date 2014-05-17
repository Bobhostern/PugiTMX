#ifndef __PARSER_H_
#define __PARSER_H_

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
#include "Map.h"
#include "stringh.h"
#include "pugixml.hpp"

namespace pugitmx
{
class Parser
{
public:
    static Map* parseMap(std::string);
private:
    static Tileset* parseTileset(pugi::xml_node);
    static Image* parseImage(pugi::xml_node);
    static TileLayer* parseTileLayer(pugi::xml_node);
    static Tile* parseTile(pugi::xml_node);
    static Object* parseObject(pugi::xml_node);
    static ObjectGroup* parseObjectGroup(pugi::xml_node);
    static Polygon* parsePolygon(pugi::xml_node);
};
};

#endif // __PARSER_H_
