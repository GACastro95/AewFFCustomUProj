#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CommonObject.h"
#include "EGender.h"
#include "EWrestlerDataObjectFlag.h"
#include "EWrestlerID_N.h"
#include "WrestlerDataObjectBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ELITE_GAME_API UWrestlerDataObjectBase : public UCommonObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatusFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CreateDate;
    
public:
    UWrestlerDataObjectBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SwitchGender(EGender& resultType) const;
    
    UFUNCTION(BlueprintCallable)
    void SetWrestlerDataFlag(const EWrestlerDataObjectFlag FlagType, const bool bNewFlag);
    
    UFUNCTION(BlueprintCallable)
    void SaveRequest();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWrestlerDataFlag(const EWrestlerDataObjectFlag FlagType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingCreateTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingCareer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScoutWrestler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFemale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCommunityWrestler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWrestlerDataFlag(const EWrestlerDataObjectFlag FlagType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetWrestlerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGender GetGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetCreateDate() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllWrestlerDataFlag();
    
    UFUNCTION(BlueprintCallable)
    void CheckModify();
    
    UFUNCTION(BlueprintCallable)
    void CancelSaveRequest();
    
    UFUNCTION(BlueprintCallable)
    void AddWrestlerDataFlag(const EWrestlerDataObjectFlag FlagType);
    
};

