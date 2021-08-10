#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
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
