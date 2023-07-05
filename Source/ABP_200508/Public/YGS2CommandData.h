#pragma once
#include "CoreMinimal.h"
#include "EYGS2DebugMenuCommand.h"
#include "EYGS2DebugMenuScriptValueType.h"
#include "YGS2CommandData.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FYGS2CommandData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGS2DebugMenuCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeforeWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYGS2DebugMenuScriptValueType, FString> ScriptValues;
    
    FYGS2CommandData();
};

