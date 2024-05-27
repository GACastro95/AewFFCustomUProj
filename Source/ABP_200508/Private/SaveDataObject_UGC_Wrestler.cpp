#include "SaveDataObject_UGC_Wrestler.h"

USaveDataObject_UGC_Wrestler::USaveDataObject_UGC_Wrestler() {
}

bool USaveDataObject_UGC_Wrestler::WriteDataFromMyWrestler(UObject* MyWrestler) {
    return false;
}

bool USaveDataObject_UGC_Wrestler::WriteDataAllScoutWrestler(int32 SaveFileIndex) {
    return false;
}

bool USaveDataObject_UGC_Wrestler::ReadDataToMyWrestler(UObject* MyWrestler) {
    return false;
}

bool USaveDataObject_UGC_Wrestler::GetUGCWrestlerFileIndexAll(TArray<int32>& OutFileIndexes) {
    return false;
}

bool USaveDataObject_UGC_Wrestler::GetUGCWrestlerFileIndex(int32& OutSaveFileIndex, bool IsEditWrestler, const UMyWrestlerDataObject* MyWrestlerDataObject) {
    return false;
}

bool USaveDataObject_UGC_Wrestler::GetFileIndexesForUpdate(TArray<int32>& OutFileIndexes) {
    return false;
}


