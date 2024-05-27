#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineBaseTypes.h"
#include "yEnInputKey.h"
#include "yMenuInputParam.h"
#include "ELInGameMenuInputEventActor.generated.h"

class AELInGamePlayerControllerBase;
class APlayerController;

UCLASS(Blueprintable)
class ABP_200508_API AELInGameMenuInputEventActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FyMenuInputParam DefaultMenuInputParam;
    
    AELInGameMenuInputEventActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnBindInputEventOtherController();
    
    UFUNCTION(BlueprintCallable)
    void UnbindInputEventAll();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultBindingControllerID();
    
    UFUNCTION(BlueprintCallable)
    void InputEvent_AnyKey(TEnumAsByte<EInputEvent> KeyEvent);
    
    UFUNCTION()
    void InputEvent(yEnInputKey InputKey, TEnumAsByte<EInputEvent> KeyEvent, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool BindInputEventOtherController();
    
    UFUNCTION(BlueprintCallable)
    bool BindInputEventAllControllers();
    
    UFUNCTION(BlueprintCallable)
    bool BindInputEvent(AELInGamePlayerControllerBase* PlayerController);
    
};

