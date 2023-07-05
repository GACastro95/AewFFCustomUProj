#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELSSSyncMotion.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class ABP_200508_API UELSSSyncMotion : public UObject {
    GENERATED_BODY()
public:
    UELSSSyncMotion();
    UFUNCTION(BlueprintCallable)
    void UpdateTransform(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSyncOriginTransform(const FVector& InLocation, const FRotator& InRotation, float inInterpSpd, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Setup(const TArray<ACharacter*>& characters, ACharacter* syncOwner, const FTransform& InTransform, float InterpolateTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSyncOriginLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetSyncOff(ACharacter* Chara);
    
    UFUNCTION(BlueprintCallable)
    void OffsetOriginPivot();
    
    UFUNCTION(BlueprintCallable)
    bool IsSyncActorNow(const ACharacter* Chara) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetSyncOriginTransform() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAnimScaleZ(ACharacter* Chara);
    
};

