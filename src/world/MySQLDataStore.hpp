/*
Copyright (c) 2014-2016 AscEmu Team <http://www.ascemu.org/>
This file is released under the MIT license. See README-MIT for more information.
*/

#ifndef MYSQL_DATA_LOADS_HPP
#define MYSQL_DATA_LOADS_HPP

#include "Singleton.h"

class SERVER_DECL MySQLDataStore : public Singleton < MySQLDataStore >
{
public:

    MySQLDataStore();
    ~MySQLDataStore();

    //maps
    typedef std::unordered_map<uint32, ItemPrototype> ItemPrototypeContainer;
    typedef std::unordered_map<uint32, CreatureInfo> CreatureInfoContainer;
    typedef std::unordered_map<uint32, CreatureProto> CreatureProtoContainer;

    //Loads
    void LoadItemsTable();
    void LoadCreatureNamesTable();
    void LoadCreatureProtoTable();

    //helper
    ItemPrototype const* GetItemProto(uint32 entry);
    ItemPrototypeContainer const* GetItemPrototypeStore() { return &_itemPrototypeStore; }

    CreatureInfo const* GetCreatureInfo(uint32 entry);
    CreatureInfoContainer const* GetCreatureNamesStore() { return &_creatureNamesStore; }
    CreatureProto const* GetCreatureProto(uint32 entry);
    CreatureProtoContainer const* GetCreatureProtoStore() { return &_creatureProtoStore; }

    ItemPrototypeContainer _itemPrototypeStore;
    CreatureInfoContainer _creatureNamesStore;
    CreatureProtoContainer _creatureProtoStore;

};

#define sMySQLStore MySQLDataStore::getSingleton()

#endif MYSQL_DATA_LOADS_HPP
