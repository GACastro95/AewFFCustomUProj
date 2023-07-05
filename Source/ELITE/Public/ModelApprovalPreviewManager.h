#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnPreviewMenu.h"
#include "EnVisualizeMode.h"
#include "PreviewFileParam.h"
#include "WrestlerIDInfo.h"
#include "ModelApprovalPreviewManager.generated.h"

class ACharacter;
class AMAPreviewMenuMail;
class AModelApprovalPreviewMenu;
class UAnimMontage;

UCLASS(Blueprintable)
class ELITE_API AModelApprovalPreviewManager : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AModelApprovalPreviewMenu* PreviewMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMAPreviewMenuMail* MailMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewFileParam ScreenShotParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> m_pcCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sCharacterMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWrestlerIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWrestlerIntervalMax;
    
public:
    AModelApprovalPreviewManager();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleShowMenu(EnPreviewMenu eMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetWrestlerInterval(float Interval);
    
    UFUNCTION(BlueprintCallable)
    void SetupWrestlerList(TArray<FWrestlerIDInfo> List);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWrestlerBlueprint();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowMailWindow(bool bShowMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultPoseToCharacters();
    
    UFUNCTION(BlueprintCallable)
    void SetAnimMontageToCharacters(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SaveMailParam();
    
    UFUNCTION(BlueprintCallable)
    void RevertToDefaultNotificatins(bool IsEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void PreChangeWrestler(int32 WrestlerID, int32 WrestlerIndex, int32 CostumeNo, bool bEntCostume);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWrestlerIntervalMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWrestlerIntervalMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnVisualizeMode GetVisualizeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACharacter*> GetPreviewCharacterList() const;
    
    UFUNCTION(BlueprintCallable)
    int32 FindAvailableNumberByFile(const FString& Directory, const FString& Ext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisplayInputMode() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteDirectryFiles(const FString& Directory, const FString& Ext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWrestler(int32 WrestlerID, ACharacter* Character, int32 CostumeNo, bool bEntCostume);
    
    UFUNCTION(BlueprintCallable)
    void ChangeVisualizeMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeVisibleSwitchingObject();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeViewWireframe();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeLight();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeDrawWrestlerNum();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraTarget(bool bForce);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeBox();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AdjustWrestlerInterval(bool Increase);
    
};

