#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELShareControlSubsystem.generated.h"

UCLASS(Blueprintable)
class UELShareControlSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UELShareControlSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetEnableRecord(bool _Enable);
    
};

