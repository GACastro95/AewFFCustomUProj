#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineBaseTypes.h"
#include "yEnInputKey.h"
#include "yMenuInputParam.h"
#include "ELInGameMenuInputEventBase.generated.h"

class APlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELInGameMenuInputEventBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FyMenuInputParam DefaultMenuInputParam;
    
    UELInGameMenuInputEventBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void InputEvent_AnyKey(TEnumAsByte<EInputEvent> KeyEvent);
    
    UFUNCTION()
    void InputEvent(yEnInputKey InputKey, TEnumAsByte<EInputEvent> KeyEvent, APlayerController* PlayerController);
    
};

