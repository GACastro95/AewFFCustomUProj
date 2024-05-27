#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioVolume_Param.h"
#include "ChangeMute_DebugDispatcherDelegate.h"
#include "ChangeVolume_DebugDispatcherDelegate.h"
#include "OpenTrigger_DebugDispatcherDelegate.h"
#include "Reset_DebugDispatcherDelegate.h"
#include "SetDefault_DebugDispatcherDelegate.h"
#include "AudioOption_MenuSettings.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UAudioOption_MenuSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FAudioVolume_Param> m_MenuCategory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeVolume_DebugDispatcher ChangeVolume_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeMute_DebugDispatcher ChangeMute_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetDefault_DebugDispatcher SetDefault_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReset_DebugDispatcher Reset_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenTrigger_DebugDispatcher OpenTrigger_DebugDispatcher;
    
    UAudioOption_MenuSettings();

};

