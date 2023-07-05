#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EELNetObjectGuid.h"
#include "ELNetworkGUID.h"
#include "ELNetObjectMap.generated.h"

UCLASS(Blueprintable)
class UELNetObjectMap : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FELNetworkGUID, TWeakObjectPtr<UObject>> ObjectLookup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, FELNetworkGUID> GuidLookup;
    
public:
    UELNetObjectMap();
    UFUNCTION(BlueprintCallable)
    bool RemoveObjectById(FELNetworkGUID Guid);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveObject(const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetObject(FELNetworkGUID Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELNetworkGUID GetGuid(const UObject* Object) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsObject(const UObject* Object) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSpecialObject(EELNetObjectGuid Guid, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    bool AddObject(FELNetworkGUID Guid, const UObject* Object);
    
};

