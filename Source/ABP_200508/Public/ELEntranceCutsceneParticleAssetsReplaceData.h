#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELEntranceCutsceneParticleAssetsReplaceData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FELEntranceCutsceneParticleAssetsReplaceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Particle;
    
    ABP_200508_API FELEntranceCutsceneParticleAssetsReplaceData();
};

