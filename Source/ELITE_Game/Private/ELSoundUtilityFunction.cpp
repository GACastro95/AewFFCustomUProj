#include "ELSoundUtilityFunction.h"

void UELSoundUtilityFunction::SetDebugDisableSound(bool IsDisable) {
}

UAtomComponent* UELSoundUtilityFunction::PlayVoice_ForString(UObject* _pWorldContextObject, UDataTable* _pDataTable, const FString& _VoiceID, bool _isUseSoundAssetDataTable, USkeletalMeshComponent* _pSpeakerMesh) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlayVoice_ForID(UObject* _pWorldContextObject, UDataTable* _pDataTable, int32 _sVoiceID, bool _isUseSoundAssetDataTable, USkeletalMeshComponent* _pSpeakerMesh) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlayVoice_ForCueEvent(UObject* _pWorldContextObject, USoundAtomCue* _pVoiceAsset, USkeletalMeshComponent* _pSpeakerMesh) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlaySoundAttached_ForString(UObject* _pWorldContextObject, UDataTable* _pDataTable, const FString& _SFXID, USceneComponent* _pParent, bool _isUseSoundAssetDataTable, FName _attacheBoneName) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlaySoundAttached_ForID(UObject* _pWorldContextObject, UDataTable* _pDataTable, int32 _sSFXID, USceneComponent* _pParent, bool _isUseSoundAssetDataTable, FName _attacheBoneName) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlaySoundAttached_ForCueEvent(UObject* _pWorldContextObject, USoundAtomCue* _pSoundAsset, USceneComponent* _pParent, FName _attacheBoneName) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlaySoundAtLocation_ForString(UObject* _pWorldContextObject, UDataTable* _pDataTable, const FString& _SFXID, const FVector& _location, bool _isUseSoundAssetDataTable) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlaySoundAtLocation_ForID(UObject* _pWorldContextObject, UDataTable* _pDataTable, int32 _sSFXID, const FVector& _location, bool _isUseSoundAssetDataTable) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlaySoundAtLocation_ForCueEvent(UObject* _pWorldContextObject, USoundAtomCue* _pSoundAsset, const FVector& _location) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlaySound2D_ForString(UObject* _pWorldContextObject, UDataTable* _pDataTable, const FString& _SFXID, bool _isUseSoundAssetDataTable, bool _isPersistAcrossLevel) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlaySound2D_ForID(UObject* _pWorldContextObject, UDataTable* _pDataTable, int32 _sSFXID, bool _isUseSoundAssetDataTable, bool _isPersistAcrossLevel) {
    return NULL;
}

UAtomComponent* UELSoundUtilityFunction::PlaySound2D_ForCueEvent(UObject* _pWorldContextObject, USoundAtomCue* _pSoundAsset, bool _isPersistAcrossLevel) {
    return NULL;
}

FAtomCueMusic UELSoundUtilityFunction::GetMusicTabaleCueList(FName RowName) {
    return FAtomCueMusic{};
}

void UELSoundUtilityFunction::GetMusicRowNames(TArray<FName>& OutRowNames) {
}

USoundAtomCue* UELSoundUtilityFunction::GetCrowdChantCue(FName RowName, UDataTable* _pDataTable, ECrowdChantType_N _type) {
    return NULL;
}

UELSoundUtilityFunction::UELSoundUtilityFunction() {
}

