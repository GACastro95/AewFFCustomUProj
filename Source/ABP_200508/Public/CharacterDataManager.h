#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RosterInfoParam.h"
#include "WrestlerSetupParam.h"
#include "EBasicFunctionResult.h"
#include "EGender.h"
#include "SingletonBase.h"
#include "EWrestlerID_N.h"
#include "ECharacterValidationResult.h"
#include "MyWrestlerInterface.h"
#include "CharacterDataManager.generated.h"

class UCharacterDataManager;
class UDataTable;
class UMyWrestlerDataObject;
class UTemplateScoutAsset;

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class ABP_200508_API UCharacterDataManager : public USingletonBase, public IMyWrestlerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> PresetWrestlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> PickedPresetWrestler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UMyWrestlerDataObject*> MyRosters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UMyWrestlerDataObject*> MyScouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UMyWrestlerDataObject*> Temporaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWrestlerID_N, FRosterInfoParam> RosterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWrestlerID_N, FRosterInfoParam> NpcData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bImported;
    
public:
    UCharacterDataManager();
    UFUNCTION(BlueprintCallable)
    void SortWrestler();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCustomWrestler(EBasicFunctionResult& Result, const FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseTemporaryWrestlerByUID(const FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseTemporaryWrestler(const UMyWrestlerDataObject* RemoveData);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTemporaryCharacter(const UMyWrestlerDataObject* RemoveData);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseMyCharacterByUID(const FGuid Remove);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseMyCharacter(UMyWrestlerDataObject* RemoveData);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCachedImage();
    
    UFUNCTION(BlueprintCallable)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    static void IsValidCharacter(ECharacterValidationResult& Result, const FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    void InitMyRosters();
    
    UFUNCTION(BlueprintCallable)
    void InitDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSaveDataImported() const;
    
    UFUNCTION(BlueprintCallable)
    static EWrestlerID_N GetWrestlerID(const FGuid UID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUnlockedCustomWrestlerSlotNum();
    
    UFUNCTION(BlueprintCallable)
    void GetUIDList(TArray<FGuid>& Out, const bool bRoster, const bool bScout, const bool bNPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTemporaryCharacterNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoutNum() const;
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* GetScoutDataObject(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveDataNumMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRosterUID(FGuid& UID, const EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRosterNum() const;
    
    UFUNCTION(BlueprintCallable)
    static void GetRosterInfoParamBP(FRosterInfoParam& RosterInfoParam, EBasicFunctionResult& Result, const EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetNeedSaveFileIndexList(TArray<int32>& OutList) const;
    
    UFUNCTION(BlueprintCallable)
    static UMyWrestlerDataObject* GetMyWrestlerDataObjectByEnumBP(EBasicFunctionResult& Result, const EWrestlerID_N WrestlerID, const int32 ScoutNo);
    
    UFUNCTION(BlueprintCallable)
    static UMyWrestlerDataObject* GetMyWrestlerDataObjectBP(EBasicFunctionResult& Result, const FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* GetMyCharacterDataObjectByEnum(const EWrestlerID_N WrestlerID, const int32 ScoutNo);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuestWrestlerDataObject(UMyWrestlerDataObject*& GuestDataObject, EBasicFunctionResult& Result, const EWrestlerID_N WrestlerID, const bool bFullPreset);
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* GetDefaultCharacterDataObjectByEnum(const EWrestlerID_N WrestlerID, const bool bGuest, const bool bFullPreset);
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* GetDefaultCharacterDataObject(const FGuid UID, const bool bGuest, const bool bFullPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCustomWrestlerUID(FGuid& UID, const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void GetCustomWrestlerObjects(TArray<UMyWrestlerDataObject*>& OutRosterList, TArray<UMyWrestlerDataObject*>& OutScoutList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCustomWrestlerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetCustomWrestlerList(TArray<UMyWrestlerDataObject*>& OutList, const int32 SaveFileIndex, const bool bRoster) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCharacterParam(const EWrestlerID_N WrestlerID, FRosterInfoParam& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCharacterDataManager* GetCharacterDataManagerInstance();
    
    UFUNCTION(BlueprintCallable)
    static UCharacterDataManager* GetCharacterDataManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableScoutNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAvailableCustomWrestlerSlotNum();
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* GenerateCharacterDataObjectByEnum(const EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* GenerateCharacterDataObject(const FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* FindMyCharacterDataObject(const FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    static void EntryTemporaryWrestler(UMyWrestlerDataObject* AddData);
    
    UFUNCTION(BlueprintCallable)
    void EntryTemporaryCharacter(UMyWrestlerDataObject* AddData);
    
    UFUNCTION(BlueprintCallable)
    bool EntryMyCharacter(UMyWrestlerDataObject* NewData, bool& bAddedNew);
    
    UFUNCTION(BlueprintCallable)
    bool DuplicateScoutWrestler(const UMyWrestlerDataObject* Src, FGuid& NewUID);
    
    UFUNCTION(BlueprintCallable)
    static void DuplicateCustomWrestler(UMyWrestlerDataObject*& DuplicatedObject, EBasicFunctionResult& Result, const FGuid UID);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* Debug_GetPresetWrestlerTable();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_GetPresetWrestlerList(TArray<FName>& RecordNames);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_GetPresetWrestler(FWrestlerSetupParam& Param, const FName RecordName);
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* CreateScoutDataObjectFromTemplate(const TSoftObjectPtr<UTemplateScoutAsset> TemplateAssetPath);
    
    UFUNCTION(BlueprintCallable)
    UMyWrestlerDataObject* CreateMyWrestlerDataObject(const EGender Gender);
    
    UFUNCTION(BlueprintCallable)
    bool ClearUpdateFlagForTamperedData(UMyWrestlerDataObject* Target);
    
    UFUNCTION(BlueprintCallable)
    void ClearSaveRequests();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCanAddNewScout();
    
    UFUNCTION(BlueprintCallable)
    static bool AddCustomWrestler(UMyWrestlerDataObject* MyWrestlerObject, bool& bAdded);
    
    
    // Fix for true pure virtual functions not being implemented
};

