#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "ELDebugUtilityFunction.generated.h"

class UELGameInstance;

UCLASS(Blueprintable)
class ABP_200508_API UELDebugUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELDebugUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static FString TakeScreenShotsCore(bool _showUI, const FString& _settingfileName, const FString& _fileDirectory);
    
    UFUNCTION(BlueprintCallable)
    static void SetSuspensionAutoPlayEvent(bool _Suspention);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoPlayStartFlag();
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoPlayRecIndex(bool createNewfile);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAutoPlaylogInfoArrayCore();
    
    UFUNCTION(BlueprintCallable)
    static bool SetAutoPlaylogInfoArray();
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayTimeSetting(int32 _Minute, int32 _second, int32 _Milli);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayShowTutorial(bool show);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlaySettingFile();
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayRecordingFileName(const FString& _Filename);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayOutputSuccessResult(bool Result);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayOutputFaildResult(bool Result);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayMultipleFile(bool _multi);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayMailSetting(const FString& _Success, const FString& _Error);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayLoopSetting(bool _Loop);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayLoopMaxCount(int32 _LoopCount);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayJustInputlogText(FKey _input, const FString& _widgetPath);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayInputlogText(FKey _input);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayFileName(const FString& _Filename);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayErrorMaxSetting(int32 _Max);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoPlayCreateNewRecordingFile(bool _create);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchVictorySceneMode(bool _mode);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchSkipEntranceSecond(int32 _second);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchSkipEntrance(bool _skip);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchSettingFile();
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchOutputSuccessResult(bool Result);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchOutputFaildResult(bool Result);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchMailSetting(const FString& _Success, const FString& _Error);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchLoopMaxCount(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchErrorCheck(bool _check);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAutoMatchAnimationDebugView(bool _view);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSuspensionAutoPlayEvent();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDelayAutoPlayEvent();
    
    UFUNCTION(BlueprintCallable)
    static void InitAutoPlaySettingFile();
    
    UFUNCTION(BlueprintCallable)
    static void InitAutoMatchSettingFile();
    
    UFUNCTION(BlueprintCallable)
    static UELGameInstance* GetDebugGameInstance();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoTestSaveDirPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoPlaySettingFileName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoPlayScreenshotFolderPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoPlayResultFolderPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoPlayRecFileName();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAutoPlayPathArray();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoPlayPath(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoPlayJustInputFileName();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FKey> GetAutoPlayInputlogArray();
    
    UFUNCTION(BlueprintCallable)
    static FKey GetAutoPlayInputlog(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAutoPlayInfoArray();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoPlayInfo(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoPlayFolderPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoPlayFileName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoMatchSettingFileName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoMatchScreenshotFolderPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoMatchResultFolderPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAutoMatchFolderPath();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteAutoPlayFile();
    
    UFUNCTION(BlueprintCallable)
    static FString AutoTestCreateLogCore(bool isError, const FString& inputString, const FString& settingfileName, const FString& fileDirectory);
    
    UFUNCTION(BlueprintCallable)
    static FString AutoPlayTakeScreenShots(bool _showUI);
    
    UFUNCTION(BlueprintCallable)
    static FString AutoPlayCreateLog(bool isError, const FString& inputString);
    
    UFUNCTION(BlueprintCallable)
    static FString AutoMatchTakeScreenShots(bool _showUI);
    
    UFUNCTION(BlueprintCallable)
    static FString AutoMatchCreateLog(bool isError, const FString& inputString);
    
};

