#pragma once
#include "CoreMinimal.h"
#include "ESSHitEffectType.generated.h"

UENUM(BlueprintType)
enum class ESSHitEffectType : uint8 {
    None,
    BareHand_Character,
    BareHand_Vehicle,
    BareHand_DestructibleProp,
    BareHand_ItemBox,
    BareHand_WeaponTrapObject,
    WeaponMelee_Character,
    WeaponMelee_Vehicle,
    WeaponMelee_DestructibleProp,
    WeaponMelee_ItemBox,
    WeaponMelee_WeaponTrapObject,
    WeaponGun_Character,
    WeaponGun_Vehicle,
    WeaponGun_DestructibleProp,
    WeaponGun_ItemBox,
    WeaponGun_WeaponTrapObject,
    WeaponGun_Field,
    Vehicle_Character,
    Vehicle_Vehicle,
    Vehicle_DestructibleProp,
    Vehicle_ItemBox,
    Vehicle_WeaponTrapObject,
};

