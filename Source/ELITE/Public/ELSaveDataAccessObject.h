#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.h"
#include "ELSaveDataAccessObjectBase.h"
#include "ELSaveDataAccessObject.generated.h"

UCLASS(Abstract, Blueprintable)
class ELITE_API UELSaveDataAccessObject : public UELSaveDataAccessObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> RequestFileNames;
    
public:
    UELSaveDataAccessObject();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitFileList(const ESaveDataType SaveDataType, TArray<FString>& Out);
    
};

