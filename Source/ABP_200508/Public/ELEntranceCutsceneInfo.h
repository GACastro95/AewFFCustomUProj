#pragma once
#include "CoreMinimal.h"
#include "ELEntranceCutsceneWrestlerInfo.h"
#include "ELEntranceCutsceneInfo.generated.h"

USTRUCT(BlueprintType)
struct FELEntranceCutsceneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELEntranceCutsceneWrestlerInfo> Wrestlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELEntranceCutsceneWrestlerInfo Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamNo;
    
    ABP_200508_API FELEntranceCutsceneInfo();
};

