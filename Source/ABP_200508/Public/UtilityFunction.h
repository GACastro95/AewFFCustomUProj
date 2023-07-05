#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPlatformType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilityFunction.generated.h"

class AActor;
class APlayerController;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilityFunction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TwoVectorsFromAngle(FVector _Vec1, FVector _Vec2);
    
    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> SortArray(TArray<AActor*> _Array);
    
    UFUNCTION(BlueprintCallable)
    static void SetXeSS_OptionIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetWindowModeWithWorld(UObject* WorldContextObject, int32 Mode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetWindowMode(UObject* _pWorldContextObject, int32 _sMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewDistanceQuality(int32 _sQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureQuality(int32 _sQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowQuality(int32 _sQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetScreenResolutionWithWorld(UObject* WorldContextObject, FIntPoint Resolution);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetScreenResolution(UObject* _pWorldContextObject, FIntPoint _Resolution);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetResolutionQualityWithWorld(UObject* WorldContextObject, int32 Quality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetResolutionQuality(UObject* _pWorldContextObject, int32 _sQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetPostPrecessQuality(int32 _sQuality);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMotionBlur(APlayerController* _Controller, bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetFoliageQuality(int32 _sQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableVSync(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableLoadingScreen(bool _Enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetEnableDynamicShadow(UObject* _pWorldContextObject, bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetDLSS_OptionIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetAntiAliasingQuality(int32 _sQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RotateVectorToTarget(FVector _StartVec, FVector _TargetVec, FRotator& _rOutRot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RequiresVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable)
    static void PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime);
    
    UFUNCTION(BlueprintCallable)
    static void OperationalWidgetManagerCloseAllWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTestBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSystemEnterAssignCircle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSamePlatformGroup(const UObject* WorldContextObject, EPlatformType Platform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlatformXBox(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlatformWindows(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlatformSteam(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlatformPlayStation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlatformEpic(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNullOnlineSubsystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoadInGameAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor_NotGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetWindowMode(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static FIntPoint GetScreenResolution(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPlatformType GetPlatform(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetMaxSupportedFullscreenResolution();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGpuInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetGameCameraAspectRatio(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCpuInfo();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void AdjustFullScreenResolution(UObject* _pWorldContextObject);
    
};

