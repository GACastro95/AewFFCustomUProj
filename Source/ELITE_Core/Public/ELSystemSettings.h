#pragma once
#include "CoreMinimal.h"
#include "ELDeveloperSettings.h"
#include "ELSystemSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ELITE_CORE_API UELSystemSettings : public UELDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DpiScaleSizeX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DpiScaleSizeY;
    
    UELSystemSettings();

};

