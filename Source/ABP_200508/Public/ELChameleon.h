#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELChameleon.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELChameleon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BleachBypass_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DistanceFog_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChannelClamper_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChannelSwapper_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScreenDrops_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Alcohol_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Drug_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Mosaic_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PixelDissolve_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Blur_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ASCII_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Colorize_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Comic_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScreenWaves_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EdgeDetect_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Emboss_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Glitch_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MonitorEffects_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HardEmboss_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HuePanner_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Monochrome_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RadialBlur_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Scratches_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GridCell_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Iridescent_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Kuwahara_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pulse_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Transform_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Squares_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Tiles_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TVNoise_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScreenFire_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LOOK_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Circles_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Sonar_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DistanceDistortion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Drawing_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MagicTransitions_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Haunted_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScreenDamage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScreenDecals_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Sharpen_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ToonShading_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnamorphicLensFlares_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Frost_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Neon_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CustomDepthHighlighter_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CustomDepthHighlighter_Clip_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Kaleidoscope_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Letterboxing_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Snow_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WorldSplash_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WorldGlitch_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Digitize_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Alarm_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Sketch_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Wired_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActorFeaturette_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Infected_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ColoredAO_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CameraShake_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DiscoBall_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HazyLights_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MeltedWorld_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectiveColor_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LensDistortion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Zone_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pyramid_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Mojo_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GradientFog_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Dither_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpeedLines_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CyberScan_N;
    
    AELChameleon();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WorldSplashFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WorldGlitchFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WiredFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TVNoiseFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransformFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToonShadingFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TilesFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SquaresFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpeedLinesFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SonarFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SnowFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SketchFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SharpenFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectiveColorFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenWavesFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenFireFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenDropsFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenDecalsFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenDamageFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScratchesFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RadialBlurFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PyramidFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PulseFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PixelDissolveFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NeonFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MosaicFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MonochromeFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MonitorEffectsFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MojoFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeltedWorldFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MagicTransitionsFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LOOKFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LetterboxingFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LensDistortionFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KuwaharaFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KaleidoscopeFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IridescentFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InvertFunc_Impl();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitChameleon_Impl();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InfectedFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HuePannerFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HazyLightsFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HauntedFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HardEmbossFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GridCellFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GradientFogFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GlitchFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrostFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EmbossFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EdgeDetectFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrugFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawingFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DitherFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DistanceFogFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DistanceDistortionFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiscoBallFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DigitizeFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CyberScanFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomDepthHighlighterFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomDepthHighlighter_Clip_Func_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ComicFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ColorizeFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ColoredAOFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CirclesFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChannelSwapperFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChannelClamperFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraShakeFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlurFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BleachBypassFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ASCIIFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnamorphicLensFlaresFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlcoholFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlarmFunc_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActorFeaturetteFunc_Impl();
    
};

