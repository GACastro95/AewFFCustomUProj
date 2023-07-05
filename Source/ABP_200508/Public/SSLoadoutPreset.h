#pragma once
#include "CoreMinimal.h"
#include "SSLoadoutPreset.generated.h"

USTRUCT(BlueprintType)
struct FSSLoadoutPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PresetName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatSkillFlags_Strike[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatSkillFlags_Grapple[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatSkillFlags_HighFly[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatSkillFlags_Weapon[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ability[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinisherId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Using: 1;
    
    ABP_200508_API FSSLoadoutPreset();
};

