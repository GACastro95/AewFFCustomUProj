#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELCareerAutoEventManager.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELCareerAutoEventManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_NameTable_AutoEvent;
    
public:
    UELCareerAutoEventManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadDataTable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddAutoEvent(FName EventName);
    
};

