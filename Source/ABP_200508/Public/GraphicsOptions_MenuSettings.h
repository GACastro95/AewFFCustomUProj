#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ChangeAntiAliasing_DebugDispatcherDelegate.h"
#include "ChangeMotionBlur_DebugDispatcherDelegate.h"
#include "ChangePostProcessing_DebugDispatcherDelegate.h"
#include "ChangeResolutionQuality_DebugDispatcherDelegate.h"
#include "ChangeScreenResolution_DebugDispatcherDelegate.h"
#include "ChangeShadowQuality_DebugDispatcherDelegate.h"
#include "ChangeTextureQuality_DebugDispatcherDelegate.h"
#include "ChangeVSync_DebugDispatcherDelegate.h"
#include "ChangeWindowMode_DebugDispatcherDelegate.h"
#include "GraphicsOptions_MenuSettings.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UGraphicsOptions_MenuSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WindowMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint m_ScreenResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ResolutionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AntiAliasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PostProcessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_MotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_VSync;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeWindowMode_DebugDispatcher ChangeWindowMode_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeScreenResolution_DebugDispatcher ChangeScreenResolution_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeResolutionQuality_DebugDispatcher ChangeResolutionQuality_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeShadowQuality_DebugDispatcher ChangeShadowQuality_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeAntiAliasing_DebugDispatcher ChangeAntiAliasing_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangePostProcessing_DebugDispatcher ChangePostProcessing_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeTextureQuality_DebugDispatcher ChangeTextureQuality_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeMotionBlur_DebugDispatcher ChangeMotionBlur_DebugDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeVSync_DebugDispatcher ChangeVSync_DebugDispatcher;
    
    UGraphicsOptions_MenuSettings();

};

