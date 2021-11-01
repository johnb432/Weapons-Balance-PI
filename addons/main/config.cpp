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
        url = "https://github.com/johnb432/Weapons-Balance-PI";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - Project Infinite";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - Project Infinite";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-PI";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_pi\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_pi\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_pi\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
