/*
Copyright (c) 2014-2017 AscEmu Team <http://www.ascemu.org/>
This file is released under the MIT license. See README-MIT for more information.
*/

#pragma once

#include "Units/Creatures/AIInterface.h"
#include "Management/Item.h"
#include "Map/MapMgr.h"
#include "Management/ItemInterface.h"
#include "Storage/MySQLDataStore.hpp"
#include <Management/QuestLogEntry.hpp>
#include "Map/MapScriptInterface.h"
#include "Spell/Customization/SpellCustomizations.hpp"
#include "../Common/Instance_Base.h"
#include "../Common/Base.h"


void IcecrownCitadel(ScriptMgr* scriptMgr);

void TheArcatrazScripts(ScriptMgr* scriptMgr);
void TheBotanicaScripts(ScriptMgr* scriptMgr);
void TheEyeScripts(ScriptMgr* scriptMgr);
void TheMechanarScripts(ScriptMgr* scriptMgr);

void AuchenaiCryptsScripts(ScriptMgr* scriptMgr);
void ManaTombsScripts(ScriptMgr* scriptMgr);
void SethekkHallsScripts(ScriptMgr* scriptMgr);
void ShadowLabyrinthScripts(ScriptMgr* scriptMgr);
