#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELEOSDebugUser.generated.h"

class UEOSUser;

UCLASS(Blueprintable)
class AELEOSDebugUser : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUser* EOSUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceSanitizeText;
    
public:
    AELEOSDebugUser();
};

