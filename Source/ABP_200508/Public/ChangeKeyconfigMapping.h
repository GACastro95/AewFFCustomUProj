#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "EKeyConfig_KeyType_C.h"
#include "ChangeKeyconfigMapping.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class ABP_200508_API UChangeKeyconfigMapping : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChangeKeyconfigMapping();

    UFUNCTION(BlueprintCallable)
    static void ReleaseAxisMapping(APlayerController* _TargetPlayerController, const FName& NowActionName);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseActionMapping(APlayerController* _TargetPlayerController, const FName& NowActionName);
    
    UFUNCTION(BlueprintCallable)
    static EKeyConfig_KeyType_C GetKeyType(const FKey& _key);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetActionKey(EKeyConfig_KeyType_C _KeyType);
    
    UFUNCTION(BlueprintCallable)
    static void AddAxisMapping(APlayerController* _TargetPlayerController, const FName& NowActionName, const FKey& NewKey, float NewScale);
    
    UFUNCTION(BlueprintCallable)
    static void AddActionMapping(APlayerController* _TargetPlayerController, const FName& NowActionName, const FKey& NewKey);
    
};

