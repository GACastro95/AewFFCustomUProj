#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "EGender.h"
#include "EBodyHeightType.h"
#include "EBodyType.h"
#include "EBodyWeightType.h"
#include "CharacterProfilesInterface.generated.h"

UINTERFACE(Blueprintable)
class UCharacterProfilesInterface : public UInterface {
    GENERATED_BODY()
};

class ICharacterProfilesInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetVoiceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGuid GetUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGender GetGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDisplayBodyWeightText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDisplayBodyHeightText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetCharacterNameText(const bool bUpper) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBodyWeightType GetBodyWeightType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetBodyWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBodyType GetBodyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBodyHeightType GetBodyHeightType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetBodyHeight() const;
    
};

