class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class bnae_falkor_base: Rifle_Long_Base_F { //https://falkordefense.com/petra/
        ACE_barrelLength = 558.8;
        ACE_barrelTwist = 247.142;
        magazineWell[] += {"CBA_300WM_AI","CBA_300WM_AICS"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 103;
            class asdg_OpticRail_falkor: asdg_OpticRail1913_long {};
            /*
            class asdg_MuzzleSlot_falkor: asdg_MuzzleSlot_338 {};
            class MuzzleSlot: asdg_MuzzleSlot_338 {
                compatibleItems[] = {};
            };

            class UnderBarrelSlot: UnderBarrelSlot {
                compatibleItems[] = {};
            };
            */
        };
    };

    class bnae_mk1_base: Rifle_Long_Base_F {
        ACE_barrelLength = 640;
        ACE_barrelTwist = 254;
        magazineWell[] += {"CBA_303B_LeeEn"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 92.4;
        };
    };
    class bnae_mk1_virtual: bnae_mk1_base {
        displayName = "Lee-Enfield No.4 Mk.I"
    };
    class bnae_mk1_t_virtual: bnae_mk1_base {
        displayName = "Lee-Enfield No.4 Mk.I (t)"
    };
    class bnae_mk1_t_camo1_virtual: bnae_mk1_base {
        displayName = "Lee-Enfield No.4 Mk.I (t) (Paint)"
    };
    class bnae_mk1_short_virtual: bnae_mk1_base {
        ACE_barrelLength = 320;
        displayName = "Lee-Enfield No.4 Mk.I Carbine";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 70;
            class asdg_OpticRail_mk1_short: asdg_OpticRail1913 {};
        };
    };

    class bnae_m97_base: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds","CBA_12g_6rnds"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
    };
    class bnae_m97_s_virtual: bnae_m97_base {
        displayName = "Model 97 (Short)";
        magazineWell[] = {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 65;
        };
    };

    class bnae_rk95_base: Rifle_Base_F {
        ACE_barrelLength = 420;
        ACE_barrelTwist = 240;
        magazineWell[] += {"CBA_762x39_AK","CBA_762x39_RPK"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 81.6;
        };
    };
    class bnae_rk95_virtual: bnae_rk95_base {
        displayName = "RK 95 TP";
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class bnae_rk95_camo1_virtual: bnae_rk95_base {
        displayName = "RK 95 TP (Desert)";
    };
    class bnae_rk95r_virtual: bnae_rk95_virtual {
        displayName = "RK 95 TP (Rail)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 85.6;
            class asdg_OpticRail_rk95r: asdg_OpticRail1913 {};
        };
    };
    class bnae_rk95r_camo1_virtual: bnae_rk95r_virtual {
        displayName = "RK 95 TP (Desert/Rail)";
    };

    class bnae_spr220_base: Rifle_Base_F {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
    };
    class bnae_spr220_virtual: bnae_spr220_base {
        displayName = "SPR 220";
    };
    class bnae_spr220_camo1_virtual: bnae_spr220_base {
        displayName = "SPR 220 (Digital)";
    };
    class bnae_spr220_so_base: bnae_spr220_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 60;
        };
    };
    class bnae_spr220_so_virtual: bnae_spr220_so_base {
        displayName = "SPR 220 (Sawn-off)";
    };
    class bnae_spr220_so_camo1_virtual: bnae_spr220_so_base {
        displayName = "SPR 220 (Digital/Sawn-off)";
    };

    //https://en.wikipedia.org/wiki/Sako_TRG
    class bnae_trg42_base: Rifle_Long_Base_F {
        ACE_barrelLength = 690;
        ACE_barrelTwist = 254;
        magazineWell[] += {"CBA_338LM_AI","MAR10_338"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 115;
            class asdg_OpticRail_trg42: asdg_OpticRail1913 {};
            //class asdg_MuzzleSlot_trg42: asdg_MuzzleSlot_338 {};
        };
    };
    class bnae_trg42_mmrs_virtual: bnae_trg42_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class asdg_OpticRail_trg42: asdg_OpticRail1913_long {};
        };
    };
    class bnae_trg42_f_mmrs_virtual: bnae_trg42_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class asdg_OpticRail_trg42: asdg_OpticRail1913_long {};
        };
    };
};
