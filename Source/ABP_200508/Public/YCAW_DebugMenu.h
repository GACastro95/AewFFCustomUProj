#pragma once
#include "CoreMinimal.h"
#include "CAW_DebugDelegateDelegate.h"
#include "YCreate_DebugMenuBase.h"
#include "YCAW_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYCAW_DebugMenu : public UYCreate_DebugMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAW_DebugDelegate CreateAllSaveData_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAW_DebugDelegate CreateHeavyCharacter_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAW_DebugDelegate DeleteAllSaveData_DebugDelegate;
    
    UYCAW_DebugMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableMaxCAW();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableHeavyCAW();
    
};

