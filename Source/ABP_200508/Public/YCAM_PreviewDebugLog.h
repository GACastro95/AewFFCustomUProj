#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "AnimErrInfo.h"
#include "EAnimErrType.h"
#include "YCAM_PreviewDebugLog.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYCAM_PreviewDebugLog : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ErrLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveFolderPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrAnimLogHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrAnimLogFileTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrAnimLogMovesLogPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DebugStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DebugEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPrintOutputLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPoolLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isScreenShot;
    
public:
    UYCAM_PreviewDebugLog();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Uninit();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugStartTime(FDateTime In_StartTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugEndTime(FDateTime In_EndTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsDuplicateLog(const FAnimErrInfo& In_AnimErrInfo);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void ExportErrorLog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ErrTypeToString(EAnimErrType In_ErrType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ErrTypeToIsScreenShot(EAnimErrType In_ErrType);
    
    UFUNCTION(BlueprintCallable)
    static bool ErrStringToDistanceOffsetInfo(FAnimErrInfo& Out_ErrInfo, const FString& In_LogDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ErrInfoToString(const FAnimErrInfo& In_ErrInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddErrorLog(const FAnimErrInfo& In_AnimErrInfo);
    
};

