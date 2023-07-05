#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "ELCareerAnimInstance.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class UELCareerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strCurrentFacialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strRequestFacialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strCurrentTalkAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strRequestTalkAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strCurrentMenuAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strRequestMenuAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strCurrentEventAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strRequestEventAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetActor;
    
public:
    UELCareerAnimInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateVariables(float fDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetAnimBlend(UAnimMontage* _Montage, bool _bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void RequestTalkAnimation(const FString& Name, bool bForceChange);
    
    UFUNCTION(BlueprintCallable)
    void RequestNoBlendAnimation(bool bNoBlend);
    
    UFUNCTION(BlueprintCallable)
    void RequestFacialAnimation(const FString& Name, bool bForceChange);
    
    UFUNCTION(BlueprintCallable)
    void RequestEventAnimation(const FString& Name, bool bForceChange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLookAt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCutScene();
    
    UFUNCTION(BlueprintCallable)
    void InitializeVariables();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookAtTargetLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookAtFaceAngleV();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookAtEyeTargetVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookAtEyeAngleH();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookAtAlpha();
    
};

