#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ECareerMapCameraType.h"
#include "ELCareerCameraPawn.generated.h"

class ACameraActor;
class UCameraComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerCameraPawn : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACameraActor*> m_CameraActorArray;
    
public:
    AELCareerCameraPawn(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupCameraActorWithCameraComponent(ECareerMapCameraType eCameraType, UCameraComponent* pCameraComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCameraActorBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupCamera();
    
};

