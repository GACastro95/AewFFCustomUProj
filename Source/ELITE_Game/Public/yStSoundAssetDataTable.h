#pragma once
#include "CoreMinimal.h"
#include "yStSoundAssetDataTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FyStSoundAssetDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Sound_DTAssetForEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Sound_DTAssetForNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BGM_DTAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Voice_DTAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Voice_DTMSfxList;
    
    ELITE_GAME_API FyStSoundAssetDataTable();
};

