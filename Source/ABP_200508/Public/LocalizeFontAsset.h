#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocalizeFontAsset.generated.h"

class UFont;

USTRUCT(BlueprintType)
struct FLocalizeFontAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFont> Font_ChineseST;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFont> Font_ChineseTC;
    
    ABP_200508_API FLocalizeFontAsset();
};

