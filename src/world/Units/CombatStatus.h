// License: MIT
#pragma once
#include "CommonTypes.hpp"
#include <memory>
#include <set>

class Unit;

namespace AscEmu { namespace World { namespace Units {
    class SERVER_DECL CombatStatus
    {
        // Attackers can be anything, but healers can only be players
        // TODO: Check this, it sounds wrong
        typedef std::set<uint64_t> AttackerSet;
        typedef std::set<uint32_t> HealerSet;

        Unit* m_unit;
        uint64_t m_primaryAttackTarget;

        HealerSet m_healers;
        HealerSet m_healTargets;

        AttackerSet m_attackers;
        AttackerSet m_attackTargets;

        bool m_lastStatus;

        // Checks whether we are really in combat (only used internally)
        bool isReallyInCombat() const;

        // Removes our healers from the list
        void removeMyHealers();

        // Removes all healers and heal targets, called on instance change
        void removeAllHealersAndHealTargets();
        // Means we either vanished or died
        void removeAllAttackersAndAttackTargets();
    public:
        CombatStatus(Unit* unit);

        // Sets us as in/out of combat and, if it changed from the last call, sets various flags based on that
        void update();

        // Checks whether we are in combat based on the last time update was called
        bool isInCombat() const;

        void removeHealTarget(Player* target);
        void addHealTarget(Player* target);

        void removeHealer(Player* healer);
        void addHealer(Player* healer);

        void addAttacker(Unit* attacker);
        void removeAttacker(Unit* attacker);
    };
}}}
