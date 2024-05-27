#include "EasyInstancedHelper.h"

UEasyInstancedHelper::UEasyInstancedHelper() {
    this->bRegistToDefault = false;
    this->bEnableTick = false;
    this->bTickableWhenPaused = false;
    this->OwnerSubsystem = NULL;
}


void UEasyInstancedHelper::OnInitialize_Implementation() {
}



