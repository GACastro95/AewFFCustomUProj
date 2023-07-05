#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELGuidHUD.generated.h"

class AELCharacter_Native;
class UELGeneralFontBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELGuidHUD : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELGeneralFontBase* Font;
    
public:
    UELGuidHUD();
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayer(AELCharacter_Native* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
};

