#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELSaveDataHeader.h"
#include "SaveDataObjectBase.generated.h"

class UELSaveGameBase;
class USaveGame_RawData;

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObjectBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSaveGameBase* m_pcSaveGameBase;
    
public:
    USaveDataObjectBase();

    UFUNCTION(BlueprintCallable)
    void SetProductUserID(const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidRawData(const USaveGame_RawData* _pcRawData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRawDataSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProductUserID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHeader(FELSaveDataHeader& _stHeader) const;
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
};

