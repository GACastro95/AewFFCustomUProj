#pragma once
#include "CoreMinimal.h"
#include "EDBGSettingValueType.h"
#include "DBGSettingDATA.generated.h"

USTRUCT(BlueprintType)
struct YDEBUG_API FDBGSettingDATA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString STRING;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString COMMENT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDBGSettingValueType Type;
    
    FDBGSettingDATA();
};

