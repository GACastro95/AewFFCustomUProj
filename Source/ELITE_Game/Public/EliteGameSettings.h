#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELDeveloperSettings.h"
#include "EWrestlerID_N.h"
#include "PSTitleInfo.h"
#include "EliteGameSettings.generated.h"

class UDataTable;
class UEliteGameSettings;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class ELITE_GAME_API UEliteGameSettings : public UELDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EWrestlerID_N> ExcludeWrestlerList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CharacterModelTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CharacterProfilesTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath HomeTownTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MusicTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AudioTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath RingAnnounce_Base;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath RingAnnounce_WrestlerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath RingAnnounce_TeamName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath RingAnnounce_CustomName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath EntranceCutsceneParticleAssetsReplaceTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MovieTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DisplayOptionSettingDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath HardwareLevelsDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIK;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPSTitleInfo> PSTitleInfos;
    
    UEliteGameSettings();
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetSfxListTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetRingAnnounceWrestlerNameTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetRingAnnounceTeamNameTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetRingAnnounceCustomNameTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetRingAnnounceBaseTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetMusicListTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEliteGameSettings* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetHomeTownTable();
    
};

