#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPersonalityType.h"
#include "EWrestlerID_N.h"
#include "ECareerModeDifficulty.h"
#include "ECareerOtherMenu.h"
#include "ECareerOtherMenuExit.h"
#include "ECareerStartInfo.h"
#include "ELCareerDelivery.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELCareerDelivery : public UObject {
    GENERATED_BODY()
public:
    UELCareerDelivery();
    UFUNCTION(BlueprintCallable)
    void SetPersonalityType(EPersonalityType EPersonalityType);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherMenu(ECareerOtherMenu eOtherMenu, ECareerOtherMenuExit eOtherMenuExit);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionWrestlerID(EWrestlerID_N eWrestlerID);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionWrestlerGUID(FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionVegetarian(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionSubtitles(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionPresetNo(int32 No);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionDispTutorialDialog(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionDifficulty(ECareerModeDifficulty eDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStartInfo(ECareerStartInfo eStartInfo);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPersonalityType GetPersonalityType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerOtherMenuExit GetOtherMenuExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerOtherMenu GetOtherMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetDecisionWrestlerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetDecisionWrestlerGUID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDecisionVegetarian();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDecisionSubtitles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDecisionPresetNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDecisionDispTutorialDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerModeDifficulty GetDecisionDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerStartInfo GetCareerStartInfo();
    
};

