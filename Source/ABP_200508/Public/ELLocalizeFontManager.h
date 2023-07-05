#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELLocalizeFontManager.generated.h"

class UDataTable;
class UFont;

UCLASS(Blueprintable)
class ABP_200508_API UELLocalizeFontManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_fontParamTable;
    
public:
    UELLocalizeFontManager();
    UFUNCTION(BlueprintCallable)
    void SetDataTable(UDataTable* FontDataTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    UFont* GetCurrentLanguageFont(UObject* _pWorldContextObject, const UFont* BaseFont);
    
};

