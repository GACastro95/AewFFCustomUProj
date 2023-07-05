#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_InteractPoint.generated.h"

class AActor;
class APlayerController;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_InteractPoint : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
public:
    UELSSWidgetHUD_InteractPoint();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateShow(float inDistance, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    float UpdatePos();
    
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
    void SetTargetActor(AActor* inTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(APlayerController* NewPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor();
    
};

