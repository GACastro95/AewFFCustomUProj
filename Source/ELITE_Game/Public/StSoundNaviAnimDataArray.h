#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSoundNaviAnimData.h"
#include "StSoundNaviAnimDataArray.generated.h"

USTRUCT(BlueprintType)
struct FStSoundNaviAnimDataArray : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStSoundNaviAnimData> DataArray;
    
    ELITE_GAME_API FStSoundNaviAnimDataArray();
};

