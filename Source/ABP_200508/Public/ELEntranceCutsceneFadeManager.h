#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "ELEntranceCutsceneFadeManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELEntranceCutsceneFadeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FadeWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FadeWidget;
    
public:
    UELEntranceCutsceneFadeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(float FadeTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateFadeWidget();
    
};

