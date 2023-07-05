#pragma once
#include "CoreMinimal.h"
#include "EOSTitleStorageBase.h"
#include "EOSTitleStorage.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSTitleStorage : public UEOSTitleStorageBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadJson OnDownloadJson;
    
    UEOSTitleStorage();
};

