#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELSSModeConfigData.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=SSModeConfig)
class ABP_200508_API UELSSModeConfigData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SSModeDebug_DisableLoginCheck;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SSModeDebug_LoginSkip;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SSModeDebug_DirectSSModeEntry;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SSModeDebug_SinglePlay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SSModeDebug_SinglePlayFixedSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SSModeDebug_ConnectQA1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SSModeDebug_ConnectDev1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SSModeDebug_ConnectDev2;
    
    UELSSModeConfigData();
};

