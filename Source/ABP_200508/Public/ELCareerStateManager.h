#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CareerResultData.h"
#include "ECareerDialogType.h"
#include "ELCareerStateManager.generated.h"

class UDataTable;
class UELCareerEventComponent;
class UELGameInstance;
class UELMenuWidgetBase;
class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerStateManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELGameInstance* m_ELGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELCareerEventComponent* m_pEventComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TShirtDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpecialRewardDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GotAEWCashDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CareerResultDataTable;
    
public:
    AELCareerStateManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTutorialArchive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDialog_YesNo(ECareerDialogType ECareerDialogType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDialog_Tutorial(FName DispTutorial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDialog_Message(FName InformationText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDialog_ItemGet(const TSoftObjectPtr<UTexture2D>& Texture, FName HeaderText, FName InformationText, ECareerDialogType ECareerDialogType, int32 InfomationParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSchedule_Ending() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCareerResultData(const int32 _Score, FCareerResultData& _Data);
    
    UFUNCTION(BlueprintCallable)
    void CheckState_Cancel();
    
    UFUNCTION(BlueprintCallable)
    void CheckState(int32 _WidgetOperationResult);
    
    UFUNCTION(BlueprintCallable)
    void CheckMatchOperationFromWidget(UELMenuWidgetBase* pWidget);
    
};

