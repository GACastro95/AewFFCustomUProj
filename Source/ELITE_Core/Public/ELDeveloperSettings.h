#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ELDeveloperSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class ELITE_CORE_API UELDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UELDeveloperSettings();

};

