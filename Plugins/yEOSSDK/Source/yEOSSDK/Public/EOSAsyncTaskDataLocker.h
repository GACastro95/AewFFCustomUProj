#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSAsyncTaskDataLocker.generated.h"

class UEOSAsyncTask;
class UEOSAsyncTaskDataLocker;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAsyncTaskDataLocker : public UEOSCommon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAsyncTask* m_pcTask;
    
public:
    UEOSAsyncTaskDataLocker();

    UFUNCTION(BlueprintCallable)
    static UEOSAsyncTaskDataLocker* CreateAsyncTaskLocker(UEOSAsyncTask* _pcTask);
    
};

