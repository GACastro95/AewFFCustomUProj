#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELOperationalWidgetBase.generated.h"

class AELGameCommonPlayerControllerBase;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELOperationalWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELGameCommonPlayerControllerBase* InputPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreCursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastCursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DispCursorNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnabledInput;
    
public:
    UELOperationalWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetLastCursorIndex(int32 LastIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDispCursorNum(int32 CursorNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCursorIndex(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetButtonHold(bool bHold);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerJustKeyRepeat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsButtonHold();
    
    UFUNCTION(BlueprintCallable)
    void EnableUpdateInputPlayerIndex();
    
    UFUNCTION(BlueprintCallable)
    void DisableUpdateInputPlayerIndex();
    
};

