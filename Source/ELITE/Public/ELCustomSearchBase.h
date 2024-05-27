#pragma once
#include "CoreMinimal.h"
#include "ELMainMenuWidgetBase.h"
#include "EELCustomSearchMenuState.h"
#include "ELCustomSearchMenuData.h"
#include "ELCustomSearchBase.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELCustomSearchBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pMenuTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELCustomSearchMenuData> m_MenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELCustomSearchMenuState m_eMenuState;
    
    UELCustomSearchBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeTable();
    
};

