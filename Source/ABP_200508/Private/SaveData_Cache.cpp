#include "SaveData_Cache.h"

USaveData_Cache::USaveData_Cache() {
}

bool USaveData_Cache::Unregist(const FString& _strRegKey) {
    return false;
}

bool USaveData_Cache::Regist(USaveData_AccessorBase* _pcAccessor, const FString& _strRegKey) {
    return false;
}

bool USaveData_Cache::Find(USaveData_AccessorBase*& _pcAccessor, const FString& _strRegKey) {
    return false;
}

bool USaveData_Cache::ClearAll() {
    return false;
}


