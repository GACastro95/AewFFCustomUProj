#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "EEOSUserContentsEvent.h"
#include "EOSUserContentProgress.h"
#include "ERequestGoldCheckType.h"
#include "ELShopTestWidgetBase.generated.h"

class UEOSUserContentsBase;
class USaveDataObjectBase;
class USaveDataSystem;

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELShopTestWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveDataObjectBase* m_pcPlayerDataObject;
    
public:
    UELShopTestWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdataGoldNum(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetShopItemNum(int32 _num);
    
    UFUNCTION(BlueprintCallable)
    void SetDispHorizontalListNum(int32 _num);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCurrentGoldNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheckedCurrentGoldNum(bool _isSuccessed, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCategory(int32 _addIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERequestGoldCheckType GetRequestGoldCheckType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USaveDataObjectBase* GetLocalPlayerDataObject() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateLocalPlayerDataObject(USaveDataSystem* _saveDataSystem);
    
    UFUNCTION(BlueprintCallable)
    void CheckCurrentGoldNum(ERequestGoldCheckType _checkType);
    
};

