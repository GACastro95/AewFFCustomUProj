#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDisplayButtonIconType.h"
#include "ELGeneralFontBase.generated.h"

class UFont;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELGeneralFontBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplayButtonIconType m_ButtonIconType;
    
public:
    UELGeneralFontBase();

    UFUNCTION(BlueprintCallable)
    void ValidForceDisplayIconType(EDisplayButtonIconType _changeIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonTextures_Impl();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceUnsupportedCharacter(const UFont* Font, const FString& SourceStr, FString& OutStr);
    
    UFUNCTION(BlueprintCallable)
    void InvalidForceDisplayIconType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeFont();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeForceDisplayIconType(EDisplayButtonIconType _changeIconType);
    
};

