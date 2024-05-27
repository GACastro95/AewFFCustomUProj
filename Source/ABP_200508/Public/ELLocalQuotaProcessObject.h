#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LocalQuotaUpdateCompleteDelegateDelegate.h"
#include "ELLocalQuotaProcessObject.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELLocalQuotaProcessObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalQuotaUpdateCompleteDelegate m_CompleteDelegate;
    
public:
    UELLocalQuotaProcessObject();

    UFUNCTION(BlueprintCallable)
    bool RequestGetLocalQuotaInfo(FLocalQuotaUpdateCompleteDelegate _delegate);
    
};

