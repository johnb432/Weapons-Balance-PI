class CfgAmmo {
    class BulletBase;
    class B_300WM_Ball: BulletBase { //HLC_300WM_FMJ, https://en.wikipedia.org/wiki/.300_Winchester_Magnum, 254mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3,5.2};
        ACE_ballisticCoefficients[] = {0.25};
        ACE_barrelLengths[] = {305,660.4};
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 13;
        ACE_caliber = 7.823;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {690,990};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class B_303_Ball: BulletBase { //HLC_303Brit_B, https://en.wikipedia.org/wiki/.303_British, 254mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.499,0.493,0.48};
        ACE_barrelLengths[] = {508,609.6,660.4};
        ACE_bulletLength = 31.166;
        ACE_bulletMass = 11.2752;
        ACE_caliber = 7.899;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {748,761,765};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {671,549};
    };

    class B_338LM_Ball: BulletBase { //ACE_338_Ball, https://en.wikipedia.org/wiki/.338_Lapua_Magnum, 254mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.368};
        ACE_barrelLengths[] = {508,609.6,673.1,711.2};
        ACE_bulletLength = 44.0182;
        ACE_bulletMass = 19.44;
        ACE_caliber = 8.585;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {800,820,826,830};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };
    class B_338LM_APDS: B_338LM_Ball { //ACE_338_Ball_API526
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.29};
        ACE_barrelLengths[] = {508,685.8,711.2};
        ACE_bulletLength = 38.989;
        ACE_bulletMass = 16.3941;
        ACE_caliber = 8.585;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {880,895,900};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };
};
