#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELSaveIconScreenManager.generated.h"

class UELSaveIconScreenExecutorBase;
class USaveData_AccessorBase;

UCLASS(Blueprintable)
class ABP_200508_API UELSaveIconScreenManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USaveData_AccessorBase>> m_CheckSaveDataAccessorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSaveIconScreenExecutorBase* m_ScreenExecutor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ShowMinimumTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_RunningIconScreen;
    
public:
    UELSaveIconScreenManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningIconScreen() const;
    
};

