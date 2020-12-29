class CfgPatches {
    class WB_fix_PI {
        name = "Weapons balance - Fix Project Infinite";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "bnae_attachments",
            "bnae_Colt_SAA",
            "bnae_core",
            "bnae_falkor",
            "bnae_lahti",
            "bnae_m97",
            "bnae_mk1",
            "bnae_r1",
            "bnae_rk95",
            "bnae_spr220",
            "bnae_trg42"
        };
        author = "johnb43";
    };
};

#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
