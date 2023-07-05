#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "yEnInputKey.h"
#include "yMenuInputParam.h"
#include "ELGameCommonPlayerControllerBase.generated.h"

class UELLocalPlayer;

UCLASS(Blueprintable)
class ABP_200508_API AELGameCommonPlayerControllerBase : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    yEnInputKey InputKeyStateNow;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    yEnInputKey InputKeyStatePre;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    yEnInputKey ExecInputKeyNow;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    yEnInputKey ExecInputKeyPre;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    yEnInputKey RepeatCheckKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LStickX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LStickY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RStickX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RStickY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MousePosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MousePosY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCheckRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRepeatSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckingKeyboardMouseInputState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey InputKeyboardStateNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInputLimit;
    
public:
    AELGameCommonPlayerControllerBase();
    UFUNCTION(BlueprintCallable)
    void SetInputParam(const FyMenuInputParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSimultaneousInputByLRStick(bool _state);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetControllerEnabled(int32 ControllerId, int32 Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastInputMouse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyRepeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FyMenuInputParam GetInputParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELLocalPlayer* GetELLocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetControllerId() const;
    
};

