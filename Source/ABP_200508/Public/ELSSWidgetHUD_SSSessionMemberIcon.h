#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_SSSessionMemberIcon.generated.h"

class AActor;
class APlayerController;
class UImage;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_SSSessionMemberIcon : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> ArrowArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MemberIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Validratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoneFirstVisible;
    
public:
    UELSSWidgetHUD_SSSessionMemberIcon();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePosAndVisible(float InDeltaTime);
    
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
    void SetTargetActorandPlayerIndex(AActor* inTargetActor, int32 InPlayerIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMemberIndex(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowDir(int32 InDirIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRender();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(APlayerController* NewPlayerController);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetValidScreenPos(FVector2D& InCanvasPos, float inScale, FVector2D& InMaxWindowSize, FVector2D& InMinWindowSize);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckTargetIsBack(const FVector2D& InCanvasPos, const FVector2D& InMaxWindowSize, const FVector2D& InMinWindowSize, bool IntargetIsBack, int32 InCornerType);
    
};

