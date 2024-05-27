#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELEOSDebugCommon.generated.h"

UCLASS(Blueprintable)
class AELEOSDebugCommon : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDisableTextFilter;
    
public:
    AELEOSDebugCommon(const FObjectInitializer& ObjectInitializer);

};

