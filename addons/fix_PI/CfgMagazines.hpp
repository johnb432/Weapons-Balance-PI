class CfgMagazines {
    class CA_Magazine;
    class 20Rnd_762x51_Mag;
    class 6Rnd_Slug_Magazine;

    class 10Rnd_300WM_Magazine: CA_Magazine {
        mass = 5.2;
    };
    class 10Rnd_303_Magazine: CA_Magazine {
        mass = 4.4;
    };
    class 2Rnd_00_Buckshot_Magazine: CA_Magazine {
        mass = 2.2;
    };
    class 6Rnd_00_Buckshot_Magazine: CA_Magazine {
        mass = 6.6;
    };
    class 5Rnd_00_Buckshot_Magazine: 6Rnd_00_Buckshot_Magazine {
        mass = 5.5;
    };
    class 5Rnd_Slug_Magazine: 6Rnd_Slug_Magazine {
        mass = 5.5;
    };
    class 5Rnd_338LM_Magazine: CA_Magazine {
        mass = 7;
    };
    class 30Rnd_762x39_Magazine: 20Rnd_762x51_Mag {
        ammo = "B_762x39_Ball_F";
        mass = 13.5;
        modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
        modelSpecialIsProxy = 1;
    };
};
