#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELEntranceCutsceneFingerSignData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FELEntranceCutsceneFingerSignData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AnimeAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockItemId;
    
    ABP_200508_API FELEntranceCutsceneFingerSignData();
};

