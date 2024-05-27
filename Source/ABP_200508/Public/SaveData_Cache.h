#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SaveData_Cache.generated.h"

class USaveData_AccessorBase;

UCLASS(Blueprintable)
class ABP_200508_API USaveData_Cache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USaveData_AccessorBase*> m_cAccessores;
    
    USaveData_Cache();

    UFUNCTION(BlueprintCallable)
    bool Unregist(const FString& _strRegKey);
    
    UFUNCTION(BlueprintCallable)
    bool Regist(USaveData_AccessorBase* _pcAccessor, const FString& _strRegKey);
    
    UFUNCTION(BlueprintCallable)
    bool Find(USaveData_AccessorBase*& _pcAccessor, const FString& _strRegKey);
    
    UFUNCTION(BlueprintCallable)
    bool ClearAll();
    
};

