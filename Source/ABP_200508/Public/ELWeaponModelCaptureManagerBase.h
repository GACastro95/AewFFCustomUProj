#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELWeaponModelCaptureManagerBase.generated.h"

class UTexture;

UCLASS(Blueprintable)
class ABP_200508_API AELWeaponModelCaptureManagerBase : public AActor {
    GENERATED_BODY()
public:
    AELWeaponModelCaptureManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotaionWeaponModel(float AddRotaion);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetWeaponDecal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceRecreateDebugWeapon(const FTransform& OffsetTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyWeaponModel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateWeaponModel(int32 inWeaponId, bool InIsSSWeapon, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeValidSceneCapture(bool IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachWeaponDecal(const FLinearColor& InColor, UTexture* InTexture, UTexture* InSymbolTexture);
    
};

