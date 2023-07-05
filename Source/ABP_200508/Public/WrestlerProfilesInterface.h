#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELMoves.h"
#include "ELMoves_Finisher.h"
#include "WrestlerSetupParam.h"
#include "EAbilityScoreType.h"
#include "EBodyType.h"
#include "EFanReaction.h"
#include "EReversalMotionType.h"
#include "ESystemMotionType.h"
#include "EWrestlerID_N.h"
#include "HomeTownID.h"
#include "WrestlerProfilesInterface.generated.h"

class UTexture;

UINTERFACE(Blueprintable)
class UWrestlerProfilesInterface : public UInterface {
    GENERATED_BODY()
};

class IWrestlerProfilesInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(const FWrestlerSetupParam& NewParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasPassiveSkill(const int32 PassiveSkillID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasActionSkill(const int32 ActionSkillID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetWrestlerName(const bool bUpper, const bool bMultiLined) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EWrestlerID_N GetWrestlerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESystemMotionType GetSystemMotionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetSocialNetworkName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSignatureMoves(FELMoves_Finisher& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSetupParam(FWrestlerSetupParam& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EReversalMotionType GetReversalMotionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture* GetHudTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetHomeTownText(const bool bUpper) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetHomeTownID(FHomeTownID& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFinisherMoves(FELMoves_Finisher& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFightStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFavoriteProps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EFanReaction GetFanReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetDefaultMoves(FELMoves& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBodyType GetBodyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAbilityScore(const EAbilityScoreType AbilityScoreType) const;
    
};

