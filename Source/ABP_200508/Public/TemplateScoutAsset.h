#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttireParam.h"
#include "WrestlerSetupParam.h"
#include "EGender.h"
#include "Engine/DataAsset.h"
#include "TemplateScoutAsset.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UTemplateScoutAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerSetupParam SetupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam PlainAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoseID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastDataVersion;
    
public:
    UTemplateScoutAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGender GetGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GenerateFileName() const;
    
};

