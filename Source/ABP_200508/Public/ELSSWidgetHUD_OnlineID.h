#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELSSWidgetBase.h"
#include "ESSMatchIconType.h"
#include "ELSSWidgetHUD_OnlineID.generated.h"

class AActor;
class APlayerController;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_OnlineID : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MedalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MatchIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tmpOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Validratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoneFirstVisible;
    
public:
    UELSSWidgetHUD_OnlineID();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePosAndVisible();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOffset();
    
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ShowOff();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleText(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActorandOnlineID(AActor* inTargetActor, const FString& InOnlineID, bool InHasCarrot, ESSMatchIconType InIconType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnlineID(const FString& InOnlineID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMatchIcon(ESSMatchIconType InIconType);
    
    UFUNCTION(BlueprintCallable)
    void SetCarrotMedal(bool InHasCarrot);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRender();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidScreenPos(FVector2D InCanvasPos, float inScale);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(APlayerController* NewPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor();
    
};

