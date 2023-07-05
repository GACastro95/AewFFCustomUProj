#pragma once
#include "CoreMinimal.h"
#include "ECareerSEType.generated.h"

UENUM(BlueprintType)
enum class ECareerSEType : uint8 {
    NONE,
    DOOR_KNOCK_METAL,
    PHONE_RING,
    PAPER_BAT_HIT,
    DOOR_KNOCK_METAL_HOSPITAL,
    RUNNING,
    MEAL,
    PROMO_11,
    PROMO_12,
    PROMO_13,
    PROMO_14,
    PROMO_21,
    PROMO_22,
    PROMO_23,
    PROMO_24,
    PROMO_31,
    PROMO_32,
    PROMO_33,
    PROMO_34,
    PROMO_41,
    PROMO_42,
    PROMO_43,
    PROMO_44,
    RESTAURANT,
    SIGHTSEEING_11,
    SIGHTSEEING_12,
    SIGHTSEEING_13,
    SIGHTSEEING_14,
    SIGHTSEEING_21,
    SIGHTSEEING_22,
    SIGHTSEEING_23,
    SIGHTSEEING_24,
    SIGHTSEEING_31,
    SIGHTSEEING_32,
    SIGHTSEEING_33,
    SIGHTSEEING_34,
    SIGHTSEEING_41,
    SIGHTSEEING_42,
    SIGHTSEEING_43,
    SIGHTSEEING_44,
    OTHER_01_BACKSTAGE_LOCKERROOM,
    OTHER_02_BACKSTAGE_OFFICE,
    OTHER_03_BACKSTAGE_DARKORDERROOM,
    OTHER_04_BACKSTAGE_TRAININGGYM,
    OTHER_05_BACKSTAGE_INTERVIEWSPACE,
    OTHER_06_BACKSTAGE_PRIVATEJET,
    OTHER_07_BACKSTAGE_HOSPITALCLINIC,
    OTHER_08_BACKSTAGE_HOSPITALENTRANCE,
    OTHER_09_BACKSTAGE_AIRPLANE,
    OTHER_10_BAGGAGECLAIM,
    OTHER_11_LUXURYCAR,
    OTHER_12_LUXURYCAR_DRIVE,
    OTHER_13_AEWDYNAMITE,
    OTHER_14_AEWDARK,
    OTHER_15_ALLOUT,
    OTHER_16_FULLGEAR,
    OTHER_17_REVOLUTION,
    OTHER_18_DOUBLEORNOTHING,
    OTHER_19_AEWRAMPAGE,
    OTHER_20_MIRRORMATCH,
};
