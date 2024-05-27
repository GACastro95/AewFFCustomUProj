#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESSStationalCameraEaseType.h"
#include "SSStationalCameraLocatorParam.h"
#include "ELSSStationalCamera.generated.h"

class AActor;
class UCineCameraComponent;
class UDataTable;
class UELSSCameraLocatorComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSStationalCamera : public ACineCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LocatorParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LocatorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSCameraLocatorComponent*> Locators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Receiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform BaseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLocatorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSStationalCameraLocatorParam CurrentLocatorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InterpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpStartFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSStationalCameraEaseType InterpEaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* CameraComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableCheckCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TrackTgt;
    
public:
    AELSSStationalCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Setup(AActor* inTargetActor, const FVector& inWorldOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCheckCollision(bool inDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisable(bool inDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetActorReceiver(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void SetActorAttacker(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCollision(const FVector& inTargetLocation, const FTransform& inBaseTransform, int32 inLocatorId, float inCurrentLocatorTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLocator(FTransform inBaseTransform, int32 inLocatorId, float inInterpDuration, ESSStationalCameraEaseType inEaseType);
    
};

