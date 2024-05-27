#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtomCueMusic.h"
#include "ECrowdChantType_N.h"
#include "ELSoundUtilityFunction.generated.h"

class UAtomComponent;
class UDataTable;
class UObject;
class USceneComponent;
class USkeletalMeshComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class ELITE_GAME_API UELSoundUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSoundUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static void SetDebugDisableSound(bool IsDisable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlayVoice_ForString(UObject* _pWorldContextObject, UDataTable* _pDataTable, const FString& _VoiceID, bool _isUseSoundAssetDataTable, USkeletalMeshComponent* _pSpeakerMesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlayVoice_ForID(UObject* _pWorldContextObject, UDataTable* _pDataTable, int32 _sVoiceID, bool _isUseSoundAssetDataTable, USkeletalMeshComponent* _pSpeakerMesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlayVoice_ForCueEvent(UObject* _pWorldContextObject, USoundAtomCue* _pVoiceAsset, USkeletalMeshComponent* _pSpeakerMesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlaySoundAttached_ForString(UObject* _pWorldContextObject, UDataTable* _pDataTable, const FString& _SFXID, USceneComponent* _pParent, bool _isUseSoundAssetDataTable, FName _attacheBoneName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlaySoundAttached_ForID(UObject* _pWorldContextObject, UDataTable* _pDataTable, int32 _sSFXID, USceneComponent* _pParent, bool _isUseSoundAssetDataTable, FName _attacheBoneName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlaySoundAttached_ForCueEvent(UObject* _pWorldContextObject, USoundAtomCue* _pSoundAsset, USceneComponent* _pParent, FName _attacheBoneName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlaySoundAtLocation_ForString(UObject* _pWorldContextObject, UDataTable* _pDataTable, const FString& _SFXID, const FVector& _location, bool _isUseSoundAssetDataTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlaySoundAtLocation_ForID(UObject* _pWorldContextObject, UDataTable* _pDataTable, int32 _sSFXID, const FVector& _location, bool _isUseSoundAssetDataTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlaySoundAtLocation_ForCueEvent(UObject* _pWorldContextObject, USoundAtomCue* _pSoundAsset, const FVector& _location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlaySound2D_ForString(UObject* _pWorldContextObject, UDataTable* _pDataTable, const FString& _SFXID, bool _isUseSoundAssetDataTable, bool _isPersistAcrossLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlaySound2D_ForID(UObject* _pWorldContextObject, UDataTable* _pDataTable, int32 _sSFXID, bool _isUseSoundAssetDataTable, bool _isPersistAcrossLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UAtomComponent* PlaySound2D_ForCueEvent(UObject* _pWorldContextObject, USoundAtomCue* _pSoundAsset, bool _isPersistAcrossLevel);
    
    UFUNCTION(BlueprintCallable)
    static FAtomCueMusic GetMusicTabaleCueList(FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetMusicRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetCrowdChantCue(FName RowName, UDataTable* _pDataTable, ECrowdChantType_N _type);
    
};

