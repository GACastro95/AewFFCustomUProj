#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELWrestlerProfile_CutScene.h"
#include "CustomDataInfo.h"
#include "WrestlerMoves.h"
#include "CommonWrestlerRaw.generated.h"

USTRUCT(BlueprintType)
struct FCommonWrestlerRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomDataInfo CustomDataInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamePlayFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PresetNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DefaultPresetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerMoves MOVES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerProfile_CutScene Entrance;
    
    CREATION_API FCommonWrestlerRaw();
};

