#define _MASS(ammoType,count,magazine) mass = (ammoType * count + magazine)
#define AMMO12GAUGE 1.1
#define AMMO303B 0.5621788 // 25.50g

#define RNDSHOTGUN 0 // 0g
#define RNDCLIP 0 // 0g

class CfgMagazines {
    class CA_Magazine;
    class 20Rnd_762x51_Mag;

    class 10Rnd_300WM_Magazine: CA_Magazine {
        displayName = "10Rnd .300WM Mag";
        mass = 5.2;
    };

    class 10Rnd_303_Magazine: CA_Magazine {
        displayName = "10Rnd .303 Lee-Enfield Clip";
        _MASS(AMMO303B,10,RNDCLIP);
    };

    class 5Rnd_338LM_Magazine: CA_Magazine {
        displayName = "5Rnd .338LM Mag";
        mass = 7;
    };
    class 5Rnd_APDS_338LM_Magazine: 5Rnd_338LM_Magazine {
        displayName = "5Rnd .338LM APDS Mag";
    };

    class 2Rnd_00_Buckshot_Magazine: CA_Magazine {
        displayName = "2Rnd 12 Gauge #00 Buckshot";
        _MASS(AMMO12GAUGE,2,RNDSHOTGUN);
    };
    class 2Rnd_Slug_Magazine: 2Rnd_00_Buckshot_Magazine {
        displayName = "2Rnd 12 Gauge Slug";
    };

    class 6Rnd_00_Buckshot_Magazine: CA_Magazine {
        displayName = "6Rnd 12 Gauge #00 Buckshot";
        _MASS(AMMO12GAUGE,6,RNDSHOTGUN);
    };
    class 6Rnd_Slug_Magazine: 6Rnd_00_Buckshot_Magazine {
        displayName = "6Rnd 12 Gauge Slug";
    };

    class 5Rnd_00_Buckshot_Magazine: 6Rnd_00_Buckshot_Magazine {
        displayName = "5Rnd 12 Gauge #00 Buckshot";
        _MASS(AMMO12GAUGE,5,RNDSHOTGUN);
    };
    class 5Rnd_Slug_Magazine: 6Rnd_Slug_Magazine {
         displayName = "5Rnd 12 Gauge Slug";
        _MASS(AMMO12GAUGE,5,RNDSHOTGUN);
    };

    class 30Rnd_762x39_Magazine: 20Rnd_762x51_Mag {
        ammo = "B_762x39_Ball_F";
        displayname = "30Rnd 7.62x39mm AK Mag";
        mass = 13.5;
        modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
        modelSpecialIsProxy = 1;
    };
};
