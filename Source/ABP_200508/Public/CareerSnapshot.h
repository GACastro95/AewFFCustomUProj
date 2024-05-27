#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveDataProcResult.h"
#include "CareerSnapshotParam.h"
#include "ESaveDataAccessorEvent.h"
#include "CareerSnapshot.generated.h"

class UCareerSnapshot;
class USaveData_AccessorBase;
class UTexture2DDynamic;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ABP_200508_API UCareerSnapshot : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFinishMulti, UCareerSnapshot*, Sender, USaveData_AccessorBase*, Accessor, ESaveDataProcResult, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFinish, UCareerSnapshot*, Sender, ESaveDataProcResult, Result);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinish OnFinishedLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinish OnFinishedSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinish OnFinishedDelete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishMulti OnFinishedLoadMulti;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Buffer;
    
public:
    UCareerSnapshot();

    UFUNCTION(BlueprintCallable)
    void SetSnapshotParam(const FCareerSnapshotParam& NewParam);
    
    UFUNCTION(BlueprintCallable)
    void SetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SaveImageMulti(USaveData_AccessorBase* SaveDataAccessor);
    
    UFUNCTION(BlueprintCallable)
    bool SaveImage();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseImage();
    
    UFUNCTION(BlueprintCallable)
    void LoadParam();
    
    UFUNCTION(BlueprintCallable)
    bool LoadImageDataMulti();
    
    UFUNCTION(BlueprintCallable)
    bool LoadImageData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExists() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWreslterNameText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWeekText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTurnNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerSnapshotParam GetSnapshotParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2DDynamic* GetImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDateTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool DeleteParamOnLost();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteImage();
    
    UFUNCTION(BlueprintCallable)
    bool ConvertToImage(UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable)
    void ClearBuffer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Callback_SaveEnd(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result);
    
    UFUNCTION(BlueprintCallable)
    void Callback_LoadEndMulti(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result);
    
    UFUNCTION(BlueprintCallable)
    void Callback_LoadEnd(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result);
    
    UFUNCTION(BlueprintCallable)
    void Callback_DeleteEnd(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result);
    
};

