#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSWeaponMeleeParam.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSSWeaponMeleeParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    ABP_200508_API FSSWeaponMeleeParam();
};

