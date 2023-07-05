#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELUserPrivilegesSubsystem.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class ABP_200508_API UELUserPrivilegesSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UELUserPrivilegesSubsystem();
    UFUNCTION(BlueprintCallable)
    bool IsCanUseUserGeneratedContent(APlayerController* _playerController, const bool _showPrivilegeUI);
    
    UFUNCTION(BlueprintCallable)
    bool IsCanPlayOnline(APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    bool IsCanCrossPlay(APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    bool IsCanCommunicateXBoxUser(APlayerController* _playerController, const bool _showPrivilegeUI);
    
    UFUNCTION(BlueprintCallable)
    bool IsCanCommunicateOutsideXBoxUser(APlayerController* _playerController);
    
};

