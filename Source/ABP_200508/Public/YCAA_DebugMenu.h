#pragma once
#include "CoreMinimal.h"
#include "CAA_DebugDelegateDelegate.h"
#include "YCreate_DebugMenuBase.h"
#include "YCAA_DebugMenu.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API UYCAA_DebugMenu : public UYCreate_DebugMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAA_DebugDelegate CreateAllSaveData_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAA_DebugDelegate CreateHeavyCharacter_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAA_DebugDelegate DeleteAllSaveData_DebugDelegate;
    
public:
    UYCAA_DebugMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableMaxCAA();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EnableHeavyArena();
    
    UFUNCTION(BlueprintCallable)
    void ConvertTexture2DToBuffer(const TSoftObjectPtr<UTexture2D>& Texture, TArray<uint8>& OutBuffer);
    
};

