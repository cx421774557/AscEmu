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
    typedef std::unordered_map<uint32, ItemPage> ItemPageContainer;
    typedef std::unordered_map<uint32, ItemPrototype> ItemPrototypeContainer;
    typedef std::unordered_map<uint32, CreatureInfo> CreatureInfoContainer;
    typedef std::unordered_map<uint32, CreatureProto> CreatureProtoContainer;
    typedef std::unordered_map<uint32, GameObjectInfo> GameObjectNamesContainer;
    typedef std::unordered_map<uint32, Quest> QuestContainer;

    typedef std::unordered_map<uint32, DisplayBounding> DisplayBoundingBoxesContainer;
    typedef std::unordered_map<uint32, VendorRestrictionEntry> VendorRestrictionContainer;
    typedef std::unordered_map<uint32, AreaTrigger> AreaTriggerContainer;
    typedef std::unordered_map<uint32, NpcText> NpcTextContainer;
    typedef std::unordered_map<uint32, NpcScriptText> NpcScriptTextContainer;
    typedef std::unordered_map<uint32, GossipMenuOption> GossipMenuOptionContainer;


    //helper
    ItemPage const* GetItemPage(uint32 entry);
    ItemPageContainer const* GetItemPagesStore() { return &_itemPagesStore; }
    ItemPrototype const* GetItemProto(uint32 entry);
    ItemPrototypeContainer const* GetItemPrototypeStore() { return &_itemPrototypeStore; }

    CreatureInfo const* GetCreatureInfo(uint32 entry);
    CreatureInfoContainer const* GetCreatureNamesStore() { return &_creatureNamesStore; }
    CreatureProto const* GetCreatureProto(uint32 entry);
    CreatureProtoContainer const* GetCreatureProtoStore() { return &_creatureProtoStore; }

    GameObjectInfo const* GetGameObjectInfo(uint32 entry);
    GameObjectNamesContainer const* GetGameObjectNamesStore() { return &_gameobjectNamesStore; }

    Quest const* GetQuest(uint32 entry);
    QuestContainer const* GetQuestStore() { return &_questStore; }

    DisplayBounding const* GetDisplayBounding(uint32 entry);
    DisplayBoundingBoxesContainer const* GetDisplayBoundingBoxesStore() { return &_displayBoundingBoxesStore; }

    VendorRestrictionEntry const* GetVendorRestriction(uint32 entry);
    VendorRestrictionContainer const* GetVendorRestrictionsStore() { return &_vendorRestrictionsStore; }

    AreaTrigger const* GetAreaTrigger(uint32 entry);
    AreaTriggerContainer const* GetAreaTriggersStore() { return &_areaTriggersStore; }

    NpcText const* GetNpcText(uint32 entry);
    NpcTextContainer const* GetNpcTextStore() { return &_npcTextStore; }

    NpcScriptText const* GetNpcScriptText(uint32 entry);
    NpcScriptTextContainer const* GetNpcScriptTextStore() { return &_npcScriptTextStore; }

    GossipMenuOption const* GetGossipMenuOption(uint32 entry);
    GossipMenuOptionContainer const* GetGossipMenuOptionStore() { return &_gossipMenuOptionStore; }

    //Loads
    void LoadItemPagesTable();
    void LoadItemsTable();

    void LoadCreatureNamesTable();
    void LoadCreatureProtoTable();

    void LoadGameObjectNamesTable();

    void LoadQuestsTable();
    void LoadGameObjectQuestItemBindingTable();
    void LoadGameObjectQuestPickupBindingTable();

    void LoadDisplayBoundingBoxesTable();
    void LoadVendorRestrictionsTable();
    void LoadAreaTriggersTable();
    void LoadNpcTextTable();
    void LoadNpcScriptTextTable();
    void LoadGossipMenuOptionTable();


    ItemPageContainer _itemPagesStore;
    ItemPrototypeContainer _itemPrototypeStore;
    CreatureInfoContainer _creatureNamesStore;
    CreatureProtoContainer _creatureProtoStore;
    GameObjectNamesContainer _gameobjectNamesStore;
    QuestContainer _questStore;

    DisplayBoundingBoxesContainer _displayBoundingBoxesStore;
    VendorRestrictionContainer _vendorRestrictionsStore;
    AreaTriggerContainer _areaTriggersStore;
    NpcTextContainer _npcTextStore;
    NpcScriptTextContainer _npcScriptTextStore;
    GossipMenuOptionContainer _gossipMenuOptionStore;

};

#define sMySQLStore MySQLDataStore::getSingleton()

#endif MYSQL_DATA_LOADS_HPP
