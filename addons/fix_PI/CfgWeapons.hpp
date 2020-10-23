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
    class bnae_falkor_base: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_300WM_AI"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 103;
            class asdg_OpticRail_falkor: asdg_OpticRail1913_long {};
        };
    };

    class bnae_mk1_base: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_303B_LeeEn"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 92.4;
        };
    };
    class bnae_mk1_short_virtual: bnae_mk1_base {
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
        magazineWell[] = {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 65;
        };
    };

    class bnae_rk95_base: Rifle_Base_F {
        magazineWell[] += {"CBA_762x39_AK","CBA_762x39_RPK"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 81.6;
        };
    };
    class bnae_rk95_virtual: bnae_rk95_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class bnae_rk95r_virtual: bnae_rk95_virtual {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 85.6;
            class asdg_OpticRail_rk95r: asdg_OpticRail1913 {};
        };
    };

    class bnae_spr220_base: Rifle_Base_F {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
    };
    class bnae_spr220_so_base: bnae_spr220_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 60;
        };
    };

    class bnae_trg42_base: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_338LM_AI"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 115;
            class asdg_OpticRail_trg42: asdg_OpticRail1913 {};
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
