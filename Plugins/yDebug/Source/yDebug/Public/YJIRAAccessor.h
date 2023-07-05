#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JIRAAccessorEventDispatcherDelegate.h"
#include "JIRASearchCondition.h"
#include "JIRASearchEventDispatcherDelegate.h"
#include "JIRASearchParam.h"
#include "JIRASetupParam.h"
#include "JIRATaskParam.h"
#include "YJIRAAccessor.generated.h"

class UYJIRAAccessor;

UCLASS(Blueprintable)
class YDEBUG_API UYJIRAAccessor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJIRASearchEventDispatcher JIRASearchEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJIRAAccessorEventDispatcher JIRAAccessorEventDispatcher;
    
    UYJIRAAccessor();
    UFUNCTION(BlueprintCallable)
    void Setup(const FJIRASetupParam& _pstSetupParam);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUpdateTask(const FJIRATaskParam& _stTaskParam);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSearchTask(const FJIRASearchParam& _stSearch);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetTask(const FJIRATaskParam& _stTaskParam);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeleteTask(const FJIRATaskParam& _stTaskParam);
    
    UFUNCTION(BlueprintCallable)
    bool RequestAppendTask(const FJIRATaskParam& _stTaskParam);
    
    UFUNCTION(BlueprintCallable)
    static FString GenerateJIRAQueryLanguage(const TArray<FJIRASearchCondition>& _cConditions);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateYJIRAAccessor(UYJIRAAccessor*& _pcInst);
    
};

