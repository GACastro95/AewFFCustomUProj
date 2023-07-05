#pragma once
#include "CoreMinimal.h"
#include "ELMatchRecordsWeaponInfo.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FELMatchRecordsWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitCount;
    
    FELMatchRecordsWeaponInfo();
};

