#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ESSInteractExecute.h"
#include "ELSSInteractableObjectInterface.generated.h"

class AELSSPlayer;

UINTERFACE(Blueprintable)
class UELSSInteractableObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IELSSInteractableObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTickInteract(AELSSPlayer* inInteractPlayer, float inInteractRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndInteract(AELSSPlayer* inInteractPlayer, bool inSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginInteract(AELSSPlayer* inInteractPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool NeedsCheckInteractDegree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetInteractUIValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetInteractUIOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetInteractPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESSInteractExecute GetInteractExecuteType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetInteractDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetIdealInteractLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetDotIconLocationOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetDotIconBaseLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDatabaseId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteInteractEffect(AELSSPlayer* inInteractPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckForSpecialCaseDoInteract(const AELSSPlayer* inInteractPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteract(const AELSSPlayer* inInteractPlayer) const;
    
};

