#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EELVictoryCutsceneTransformAndAnimationMatchType.h"
#include "ELVictoryCutsceneTransformAndAnimation.h"
#include "ELVictoryCutsceneParameter.generated.h"

USTRUCT(BlueprintType)
struct FELVictoryCutsceneParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELVictoryCutsceneTransformAndAnimationMatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WinnerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator WinnerRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELVictoryCutsceneTransformAndAnimation Loser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELVictoryCutsceneTransformAndAnimation LoserPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELVictoryCutsceneTransformAndAnimation WinnerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELVictoryCutsceneTransformAndAnimation LoserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELVictoryCutsceneTransformAndAnimation ThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELVictoryCutsceneTransformAndAnimation FourthPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELVictoryCutsceneTransformAndAnimation referee;
    
    ABP_200508_API FELVictoryCutsceneParameter();
};

