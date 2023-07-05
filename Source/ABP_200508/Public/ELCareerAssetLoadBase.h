#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELCareerAssetLoadBase.generated.h"

class UAnimMontage;
class UDataTable;
class USkeletalMesh;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerAssetLoadBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_pMenuAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_pEventAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_pFacialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_pTalkAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_EventAnimationHiddenTimeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> m_pPropModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_AttachSocketArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_PositionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> m_RotationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_pPropAnimation;
    
public:
    AELCareerAssetLoadBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetDataTable_TalkAnimation(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_PropAnimation(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_Prop(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_MenuAnimation(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_FacialAnimation(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_EventAnimation(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void LoadAsset_Event();
    
    UFUNCTION(BlueprintCallable)
    void LoadAsset_CareerMenu();
    
};

