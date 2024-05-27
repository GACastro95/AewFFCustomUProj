#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELGameplayStatics.generated.h"

class ACharacter;
class APawn;
class APlayerCameraManager;
class APlayerController;
class UObject;

UCLASS(Blueprintable)
class UELGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELGameplayStatics();

    UFUNCTION(BlueprintCallable)
    static void SetPlayerControllerID(APlayerController* Player, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasGameViewportFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* GetPlayerPawn(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerControllerID(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetPlayerControllerFromID(const UObject* WorldContextObject, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetPlayerController(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ACharacter* GetPlayerCharacter(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerCameraManager* GetPlayerCameraManager(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APlayerController* CreatePlayer(const UObject* WorldContextObject, int32 ControllerId, bool bSpawnPlayerController);
    
};

