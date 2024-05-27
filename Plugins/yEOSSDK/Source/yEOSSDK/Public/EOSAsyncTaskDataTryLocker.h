#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSAsyncTaskDataTryLocker.generated.h"

class UEOSAsyncTask;
class UEOSAsyncTaskDataTryLocker;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAsyncTaskDataTryLocker : public UEOSCommon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAsyncTask* m_pcTask;
    
public:
    UEOSAsyncTaskDataTryLocker();

    UFUNCTION(BlueprintCallable)
    bool IsLocked();
    
    UFUNCTION(BlueprintCallable)
    static UEOSAsyncTaskDataTryLocker* CreateAsyncTaskTryLocker(UEOSAsyncTask* _pcTask);
    
};

