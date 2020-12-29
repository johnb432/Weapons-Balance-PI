class UnderBarrelSlot;
class UnderBarrelSlot_rail: UnderBarrelSlot {
    class compatibleItems {
        bnae_bipod_blk_virtual = 1;
        bnae_bipod_snd_virtual = 1;
    };
};
class nia_rifle_grips_slot: UnderBarrelSlot {
    displayName = "Gripod slot";
    class compatibleItems {
        bnae_bipod_blk_virtual = 1;
        bnae_bipod_snd_virtual = 1;
    };
};

class asdg_SlotInfo;
class asdg_UnderSlot: asdg_SlotInfo {
    class compatibleItems {
        bnae_bipod_blk_virtual = 1;
        bnae_bipod_snd_virtual = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        bnae_scope_blk_virtual = 1;
        bnae_scope_mtp_virtual = 1;
        bnae_scope_snd_virtual = 1;
        bnae_scope_v2_virtual = 1;
        bnae_truglo_blk_virtual = 1;
        bnae_truglo_snd_virtual = 1;
    };
};

class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems {};
};
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems {
        bnae_scope_blk_virtual = 1;
        bnae_scope_mtp_virtual = 1;
        bnae_scope_snd_virtual = 1;
        bnae_scope_v2_virtual = 1;
        bnae_truglo_blk_virtual = 1;
        bnae_truglo_snd_virtual = 1;
    };
};

class asdg_MuzzleSlot: asdg_SlotInfo {
    class compatibleItems {};
};
class asdg_MuzzleSlot_338: asdg_MuzzleSlot {
    class compatibleItems {
        bnae_muzzle_blk_virtual = 1;
        bnae_muzzle_snd_virtual = 1;
        bnae_silencer_virtual = 1;
    };
};

class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems {
        bnae_suppressor_v2_virtual = 1;
        bnae_suppressor_covblk_virtual = 1;
        bnae_suppressor_covdrt_virtual = 1;
    };
};
