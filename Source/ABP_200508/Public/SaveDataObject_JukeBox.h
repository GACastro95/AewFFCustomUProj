#pragma once
#include "CoreMinimal.h"
#include "ELTmpJukeboxSaveData.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_JukeBox.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_JukeBox : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_JukeBox();
    UFUNCTION(BlueprintCallable)
    void UpdateSavedataForTmpData(FELTmpJukeboxSaveData _tmpData);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdated(bool _update);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomPlayback(bool _random);
    
    UFUNCTION(BlueprintCallable)
    void SetNextPlayIDForRandom();
    
    UFUNCTION(BlueprintCallable)
    void SetNextPlayID();
    
    UFUNCTION(BlueprintCallable)
    void SetJukeBoxSortListForID(int32 _targetId, int32 _sortNo, bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetJukeBoxPlayedListForID(int32 _targetId, bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetJukeBoxCheckListForID(int32 _targetId, bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPlayID(int32 _id);
    
    UFUNCTION(BlueprintCallable)
    void SetCreateSavedata(bool _create);
    
    UFUNCTION(BlueprintCallable)
    bool IsRandomPlayback();
    
    UFUNCTION(BlueprintCallable)
    bool IsCreateSavedata();
    
    UFUNCTION(BlueprintCallable)
    void InitJukeBoxSortList();
    
    UFUNCTION(BlueprintCallable)
    void InitJukeBoxPlayedList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextPlayID();
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetNextJukeBoxPlayCue(bool _inGameFlg);
    
    UFUNCTION(BlueprintCallable)
    int32 GetJukeBoxSortListForID(int32 _targetId, bool& _findParam);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetJukeBoxSortList();
    
    UFUNCTION(BlueprintCallable)
    bool GetJukeBoxPlayList(TArray<int32>& _listArray);
    
    UFUNCTION(BlueprintCallable)
    bool GetJukeBoxPlayedListForID(int32 _targetId, bool& _findParam);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetJukeBoxPlayedList();
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetJukeBoxPlayCue(int32 _targetId, bool _inGameFlg);
    
    UFUNCTION(BlueprintCallable)
    bool GetJukeBoxCheckListForID(int32 _targetId, bool& _findParam);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetJukeBoxCheckList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPlayID() const;
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetCurrentJukeBoxPlayCue();
    
};

