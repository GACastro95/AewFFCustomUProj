#pragma once
#include "CoreMinimal.h"
#include "ECareerRewardEffectType.h"
#include "ELCareerWidgetBase.h"
#include "ELMessageWindowMenuWidgetBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELMessageWindowMenuWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELMessageWindowMenuWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTextByStringID(FName _StringID, bool _bReplace, FName _ReplaceString, ECareerRewardEffectType _type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquareEffectTexture(UTexture2D* pOverWriteTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageKey(FName _String);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> ParseStringWithLinefeed(const FString& _String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMessageKey();
    
};

