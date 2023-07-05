#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "MotionUtilityFunctionLibrary.generated.h"

class ACharacter;
class UAnimMontage;
class UAnimNotify;
class UAnimNotifyState;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API UMotionUtilityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMotionUtilityFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool IsExistAnimNotifyState(const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotifyState> NotifyFilter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistAnimNotify(const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotify> NotifyFilter);
    
    UFUNCTION(BlueprintCallable)
    static void GetMontageTransform(const ACharacter* Character, const UAnimMontage* Montage, const float Potision, FVector& Location, float& Yaw);
    
    UFUNCTION(BlueprintCallable)
    static void GetMontageRootTransform(FTransform& Transform, const ACharacter* Character, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static void GetMontageMoveDirection(bool& NoneDirection, float& Direction, const ACharacter* Character, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMontageLocation(const ACharacter* Character, const UAnimMontage* Montage, float Potision);
    
    UFUNCTION(BlueprintCallable)
    static float GetMontageDirection(const ACharacter* Character, const UAnimMontage* Montage, float Potision);
    
    UFUNCTION(BlueprintCallable)
    static float GetAnimNotifyStateDuration(const UAnimSequenceBase* AnimSequence, const UAnimNotifyState* AnimNotifyState);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAnimNotifyState(TArray<FAnimNotifyEvent>& AnimNotifyEvents, const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotifyState> NotifyFilter);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAnimNotifys(TArray<FAnimNotifyEvent>& AnimNotifyEvents, const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotify> NotifyFilter);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAnimNotifyNearestPosition(FAnimNotifyEvent& AnimNotifyEvent, const UAnimSequenceBase* AnimSequence, float AnimPos, TSubclassOf<UAnimNotify> NotifyFilter);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAnimNotifyInSlotAll(TArray<FAnimNotifyEvent>& AnimNotifyEvents, const UAnimMontage* AnimMontage, TSubclassOf<UAnimNotify> NotifyFilter);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAnimNotifyInSlot(FAnimNotifyEvent& AnimNotifyEvent, const UAnimMontage* AnimMontage, TSubclassOf<UAnimNotify> NotifyFilter);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAnimNotify(FAnimNotifyEvent& AnimNotifyEvent, const UAnimSequenceBase* AnimSequence, TSubclassOf<UAnimNotify> NotifyFilter);
    
    UFUNCTION(BlueprintCallable)
    static void DisableRootMotion(const ACharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static FRotator ConvertMotionBuilderEulerToUnrealEngineEuler(FVector Euler);
    
    UFUNCTION(BlueprintCallable)
    static void CallRefreshBoneTransforms(USkeletalMeshComponent* Mesh);
    
};

