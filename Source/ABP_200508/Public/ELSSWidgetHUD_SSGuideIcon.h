#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELSSWidgetBase.h"
#include "ESSGuideIconType.h"
#include "ELSSWidgetHUD_SSGuideIcon.generated.h"

class AActor;
class APlayerController;
class UELSSWidgetHUD_SSGuideIconContainer;
class UImage;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_SSGuideIcon : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> IconArrays;
    
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
    float Validratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoneFirstVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_SSGuideIconContainer* ParentContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGuideIconType GuideIconType;
    
public:
    UELSSWidgetHUD_SSGuideIcon();

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
    void SetTargetActorandTexture(AActor* inTargetActor, ESSGuideIconType InIconType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetParentContainer(UELSSWidgetHUD_SSGuideIconContainer* inContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconTexture(ESSGuideIconType InIconType);
    
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
    
    UFUNCTION(BlueprintCallable)
    ESSGuideIconType GetGuideIconType();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckTargetIsBack(const FVector2D& InCanvasPos, const FVector2D& InMaxWindowSize, const FVector2D& InMinWindowSize, bool IntargetIsBack, int32 InCornerType);
    
};

