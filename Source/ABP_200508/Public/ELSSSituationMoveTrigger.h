#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELSSSituationMoveTrigger.generated.h"

class AELSSPlayer;
class UBoxComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSSituationMoveTrigger : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* IdealLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveIdNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveIdNormalBackDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveIdHighFly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveIdHighFlyBackDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveIdPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveIdPowerBackDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WaitReactionRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OffsetToReceiverY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OffsetCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableIdealLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableCameraLocator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableForwardCheck;
    
public:
    AELSSSituationMoveTrigger();
    UFUNCTION(BlueprintCallable)
    bool IsDisableCamera() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetWaitReactionRowName() const;
    
    UFUNCTION(BlueprintCallable)
    UBoxComponent* GetTriggerCollision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMoveId(AELSSPlayer* inAttackPlayer, AELSSPlayer* inReceivePlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetIdealTransform(const FTransform& inReceiverTransform, int32 inMoveId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetIdealLocationComponent(int32 inMoveId) const;
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetIdealLocation(const FTransform& inReceiverTransform) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCameraOffset(const FVector& inActionSyncLocation, int32 inMoveId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteSituation();
    
};

