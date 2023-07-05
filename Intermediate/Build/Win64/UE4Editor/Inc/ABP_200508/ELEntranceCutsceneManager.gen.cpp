// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneManager();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetPawn();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterModelName();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneEmitterData();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneItemType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceCamera_ChameleonEffectType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELBeltAttachPosition();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMoviePlayerEvent();
	ABP_200508_API UClass* Z_Construct_UClass_UELMoviePlayerBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEntranceCutsceneDataManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ARibbonBase_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EntranceCutsceneCameraFade__DelegateSignature();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneBeltPositionType();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execAssetLoadCompleteEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetLoadCompleteEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execDestroyAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execDisableLookAtWrestler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableLookAtWrestler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetAnimMontage)
	{
		P_GET_TARRAY_REF(UAnimMontage*,Z_Param_Out_AnimMontages);
		P_GET_TARRAY_REF(int32,Z_Param_Out_CastIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimMontage(Z_Param_Out_AnimMontages,Z_Param_Out_CastIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetEntranceHUDButtonType)
	{
		P_GET_STRUCT_REF(FELEntranceCutsceneInfo,Z_Param_Out_CutsceneInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDisplayButtonIconType*)Z_Param__Result=P_THIS->GetEntranceHUDButtonType(Z_Param_Out_CutsceneInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetEntranceSceneCastActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CastID);
		P_FINISH;
		P_NATIVE_BEGIN;
		AELEntranceCutsceneManager::GetEntranceSceneCastActor(Z_Param_WorldContextObject,Z_Param_Out_Actor,Z_Param_CastID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetManagerMontage)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetManagerMontage(Z_Param_Out_Location,Z_Param_Out_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetMatchRecord_Single)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WreslterID);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Win);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Lose);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Draw);
		P_GET_UBOOL_REF(Z_Param_Out_IsCareerRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMatchRecord_Single(EWrestlerID_N(Z_Param_WreslterID),Z_Param_UID,Z_Param_Out_Win,Z_Param_Out_Lose,Z_Param_Out_Draw,Z_Param_Out_IsCareerRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetMatchRecord_Tag)
	{
		P_GET_TARRAY(FELEntranceCutsceneWrestlerInfo,Z_Param_Members);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Win);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Lose);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Draw);
		P_GET_UBOOL_REF(Z_Param_Out_IsCareerRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMatchRecord_Tag(Z_Param_Members,Z_Param_Out_Win,Z_Param_Out_Lose,Z_Param_Out_Draw,Z_Param_Out_IsCareerRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetMusicIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMusicIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetParticle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT_REF(UParticleSystem,Z_Param_Out_ParticleSystem);
		P_GET_UBOOL_REF(Z_Param_Out_SwitchType);
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_DropObjects);
		P_GET_TARRAY_REF(FELEntranceCutsceneEmitterData,Z_Param_Out_Emitters);
		P_GET_OBJECT_REF(USoundAtomCue,Z_Param_Out_OnCue);
		P_GET_OBJECT_REF(USoundAtomCue,Z_Param_Out_OffCue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DataTableID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetParticle(Z_Param_Index,Z_Param_Out_ParticleSystem,Z_Param_Out_SwitchType,Z_Param_Out_DropObjects,Z_Param_Out_Emitters,Z_Param_Out_OnCue,Z_Param_Out_OffCue,Z_Param_Out_DataTableID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetProfileCutsceneFromUnlockItemID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UnlockItemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_BaseEntranceNo);
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_Cutscene);
		P_GET_ENUM_REF(EELEntranceCutsceneItemType,Z_Param_Out_ItemType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProfileCutsceneFromUnlockItemID(Z_Param_UnlockItemId,Z_Param_BaseEntranceNo,Z_Param_Out_Cutscene,(EELEntranceCutsceneItemType&)(Z_Param_Out_ItemType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetRootLocationAndRotation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRootLocationAndRotation(Z_Param_Out_Location,Z_Param_Out_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetScreenFilter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELEntranceCamera_ChameleonEffectType*)Z_Param__Result=P_THIS->GetScreenFilter(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetScreenFilterDataTableID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScreenFilterDataTableID(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execGetUseBeltAttachPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EELBeltAttachPosition>*)Z_Param__Result=P_THIS->GetUseBeltAttachPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execInputEvent_CameraZoomOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent_CameraZoomOut(Z_Param_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execInputEvent_CameraZoomOutKey_Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent_CameraZoomOutKey_Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execInputEvent_CameraZoomOutKey_Released)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent_CameraZoomOutKey_Released();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execInputEvent_CameraZoomUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent_CameraZoomUp(Z_Param_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execInputEvent_CameraZoomUpKey_Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent_CameraZoomUpKey_Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execInputEvent_CameraZoomUpKey_Released)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent_CameraZoomUpKey_Released();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execIsEnableInputEvent)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableInputEvent(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execIsNowLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNowLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execLoadAssetForSingle)
	{
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_CustomData);
		P_GET_STRUCT_REF(FELEntranceCutsceneInfo,Z_Param_Out_CutsceneInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadAssetForSingle(Z_Param_Out_CustomData,Z_Param_Out_CutsceneInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execLoadAssetForTag)
	{
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_CustomData);
		P_GET_STRUCT_REF(FELEntranceCutsceneInfo,Z_Param_Out_CutsceneInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadAssetForTag(Z_Param_Out_CustomData,Z_Param_Out_CutsceneInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execMakeComponentList)
	{
		P_GET_TARRAY(AActor*,Z_Param_SceneActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeComponentList(Z_Param_SceneActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execMoviePlayerEvent)
	{
		P_GET_ENUM(EMoviePlayerEvent,Z_Param_EventType);
		P_GET_OBJECT(UELMoviePlayerBase,Z_Param_MoviePlayerBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoviePlayerEvent(EMoviePlayerEvent(Z_Param_EventType),Z_Param_MoviePlayerBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execOnFinishedEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execOnFullScreenTitantron_N)
	{
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFullScreenTitantron_N_Implementation(Z_Param_Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execPlayFingerSignMontage)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFingerSignMontage(Z_Param_AnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execRequestPlayLevelSequence)
	{
		P_GET_STRUCT_REF(FELEntranceCutsceneInfo,Z_Param_Out_CutsceneInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALevelSequenceActor**)Z_Param__Result=P_THIS->RequestPlayLevelSequence(Z_Param_Out_CutsceneInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execSetCastInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CastID);
		P_GET_OBJECT(AELCharacter_Native,Z_Param_Character);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastInfo(Z_Param_CastID,Z_Param_Character,Z_Param_MeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execSetFullScreenTitantron)
	{
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFullScreenTitantron(Z_Param_Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execSetSceneCaptureOnly)
	{
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSceneCaptureOnly(Z_Param_Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execSetupBGModelsForEditor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param_BGModelData);
		P_GET_PROPERTY(FIntProperty,Z_Param_GroupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=AELEntranceCutsceneManager::SetupBGModelsForEditor(Z_Param_WorldContextObject,Z_Param_BGModelData,Z_Param_GroupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execSkipScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SkipScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execStartDropObject)
	{
		P_GET_OBJECT(UClass,Z_Param_DropObject);
		P_GET_STRUCT(FVector,Z_Param_BaseLocation);
		P_GET_OBJECT(USoundAtomCue,Z_Param_OnCue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDropObject(Z_Param_DropObject,Z_Param_BaseLocation,Z_Param_OnCue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execStartParticles)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartParticles(Z_Param_Index,Z_Param_SceneComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execSwitchParticles)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(UParticleSystem,Z_Param_ParticleSystem);
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComp);
		P_GET_TARRAY_REF(FELEntranceCutsceneEmitterData,Z_Param_Out_Emitters);
		P_GET_OBJECT(USoundAtomCue,Z_Param_OnCue);
		P_GET_OBJECT(USoundAtomCue,Z_Param_OffCue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchParticles(Z_Param_Index,Z_Param_ParticleSystem,Z_Param_SceneComp,Z_Param_Out_Emitters,Z_Param_OnCue,Z_Param_OffCue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELEntranceCutsceneManager::execUpdateDefaultEntranceFlag)
	{
		P_GET_STRUCT_REF(FELEntranceCutsceneInfo,Z_Param_Out_CutsceneInfo);
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_CustomData);
		P_GET_OBJECT(UDataTable,Z_Param_TeamParamDataTable);
		P_GET_UBOOL(Z_Param_CAE);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELEntranceCutsceneInfo*)Z_Param__Result=P_THIS->UpdateDefaultEntranceFlag(Z_Param_Out_CutsceneInfo,Z_Param_Out_CustomData,Z_Param_TeamParamDataTable,Z_Param_CAE);
		P_NATIVE_END;
	}
	static FName NAME_AELEntranceCutsceneManager_AttachBeltToWaist_Impl = FName(TEXT("AttachBeltToWaist_Impl"));
	void AELEntranceCutsceneManager::AttachBeltToWaist_Impl(EELBelt Belt) const
	{
		ELEntranceCutsceneManager_eventAttachBeltToWaist_Impl_Parms Parms;
		Parms.Belt=Belt;
		const_cast<AELEntranceCutsceneManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_AttachBeltToWaist_Impl),&Parms);
	}
	static FName NAME_AELEntranceCutsceneManager_GetCAWMeshList_Impl = FName(TEXT("GetCAWMeshList_Impl"));
	void AELEntranceCutsceneManager::GetCAWMeshList_Impl(TArray<TSoftObjectPtr<UObject> >& AssetList, FELEntranceCutsceneWrestlerInfo const& WrestlerInfo) const
	{
		ELEntranceCutsceneManager_eventGetCAWMeshList_Impl_Parms Parms;
		Parms.AssetList=AssetList;
		Parms.WrestlerInfo=WrestlerInfo;
		const_cast<AELEntranceCutsceneManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_GetCAWMeshList_Impl),&Parms);
		AssetList=Parms.AssetList;
	}
	static FName NAME_AELEntranceCutsceneManager_GetModelName_Impl = FName(TEXT("GetModelName_Impl"));
	bool AELEntranceCutsceneManager::GetModelName_Impl(FCharacterModelName& ModelName, FELEntranceCutsceneWrestlerInfo const& WrestlerInfo) const
	{
		ELEntranceCutsceneManager_eventGetModelName_Impl_Parms Parms;
		Parms.ModelName=ModelName;
		Parms.WrestlerInfo=WrestlerInfo;
		const_cast<AELEntranceCutsceneManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_GetModelName_Impl),&Parms);
		ModelName=Parms.ModelName;
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELEntranceCutsceneManager_GetMovieNumber = FName(TEXT("GetMovieNumber"));
	bool AELEntranceCutsceneManager::GetMovieNumber(int32 UnlockItemId, int32& Number)
	{
		ELEntranceCutsceneManager_eventGetMovieNumber_Parms Parms;
		Parms.UnlockItemId=UnlockItemId;
		Parms.Number=Number;
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_GetMovieNumber),&Parms);
		Number=Parms.Number;
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELEntranceCutsceneManager_GetMoviePath = FName(TEXT("GetMoviePath"));
	bool AELEntranceCutsceneManager::GetMoviePath(FString& MoviePath, int32 MovieDataID)
	{
		ELEntranceCutsceneManager_eventGetMoviePath_Parms Parms;
		Parms.MoviePath=MoviePath;
		Parms.MovieDataID=MovieDataID;
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_GetMoviePath),&Parms);
		MoviePath=Parms.MoviePath;
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELEntranceCutsceneManager_InputEvent_CameraZoom = FName(TEXT("InputEvent_CameraZoom"));
	void AELEntranceCutsceneManager::InputEvent_CameraZoom(float ZoomUp, float ZoomOut)
	{
		ELEntranceCutsceneManager_eventInputEvent_CameraZoom_Parms Parms;
		Parms.ZoomUp=ZoomUp;
		Parms.ZoomOut=ZoomOut;
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_InputEvent_CameraZoom),&Parms);
	}
	static FName NAME_AELEntranceCutsceneManager_OnDestroyedAssets_Impl = FName(TEXT("OnDestroyedAssets_Impl"));
	void AELEntranceCutsceneManager::OnDestroyedAssets_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_OnDestroyedAssets_Impl),NULL);
	}
	static FName NAME_AELEntranceCutsceneManager_OnFinishedSequence_Impl = FName(TEXT("OnFinishedSequence_Impl"));
	void AELEntranceCutsceneManager::OnFinishedSequence_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_OnFinishedSequence_Impl),NULL);
	}
	static FName NAME_AELEntranceCutsceneManager_OnFullScreenTitantron_N = FName(TEXT("OnFullScreenTitantron_N"));
	void AELEntranceCutsceneManager::OnFullScreenTitantron_N(bool Flag)
	{
		ELEntranceCutsceneManager_eventOnFullScreenTitantron_N_Parms Parms;
		Parms.Flag=Flag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_OnFullScreenTitantron_N),&Parms);
	}
	static FName NAME_AELEntranceCutsceneManager_OnLastFadeSequence_Impl = FName(TEXT("OnLastFadeSequence_Impl"));
	void AELEntranceCutsceneManager::OnLastFadeSequence_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_OnLastFadeSequence_Impl),NULL);
	}
	static FName NAME_AELEntranceCutsceneManager_OnLoadedAssets_Impl = FName(TEXT("OnLoadedAssets_Impl"));
	void AELEntranceCutsceneManager::OnLoadedAssets_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_OnLoadedAssets_Impl),NULL);
	}
	static FName NAME_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl = FName(TEXT("OnPausedLevelSequence_Impl"));
	void AELEntranceCutsceneManager::OnPausedLevelSequence_Impl(float PauseDuration)
	{
		ELEntranceCutsceneManager_eventOnPausedLevelSequence_Impl_Parms Parms;
		Parms.PauseDuration=PauseDuration;
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl),&Parms);
	}
	static FName NAME_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl = FName(TEXT("OnPlayedLevelSequence_Impl"));
	void AELEntranceCutsceneManager::OnPlayedLevelSequence_Impl(float InSceneDuration)
	{
		ELEntranceCutsceneManager_eventOnPlayedLevelSequence_Impl_Parms Parms;
		Parms.InSceneDuration=InSceneDuration;
		ProcessEvent(FindFunctionChecked(NAME_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl),&Parms);
	}
	void AELEntranceCutsceneManager::StaticRegisterNativesAELEntranceCutsceneManager()
	{
		UClass* Class = AELEntranceCutsceneManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssetLoadCompleteEvent", &AELEntranceCutsceneManager::execAssetLoadCompleteEvent },
			{ "DestroyAssets", &AELEntranceCutsceneManager::execDestroyAssets },
			{ "DisableLookAtWrestler", &AELEntranceCutsceneManager::execDisableLookAtWrestler },
			{ "GetAnimMontage", &AELEntranceCutsceneManager::execGetAnimMontage },
			{ "GetEntranceHUDButtonType", &AELEntranceCutsceneManager::execGetEntranceHUDButtonType },
			{ "GetEntranceSceneCastActor", &AELEntranceCutsceneManager::execGetEntranceSceneCastActor },
			{ "GetManagerMontage", &AELEntranceCutsceneManager::execGetManagerMontage },
			{ "GetMatchRecord_Single", &AELEntranceCutsceneManager::execGetMatchRecord_Single },
			{ "GetMatchRecord_Tag", &AELEntranceCutsceneManager::execGetMatchRecord_Tag },
			{ "GetMusicIndex", &AELEntranceCutsceneManager::execGetMusicIndex },
			{ "GetParticle", &AELEntranceCutsceneManager::execGetParticle },
			{ "GetProfileCutsceneFromUnlockItemID", &AELEntranceCutsceneManager::execGetProfileCutsceneFromUnlockItemID },
			{ "GetRootLocationAndRotation", &AELEntranceCutsceneManager::execGetRootLocationAndRotation },
			{ "GetScreenFilter", &AELEntranceCutsceneManager::execGetScreenFilter },
			{ "GetScreenFilterDataTableID", &AELEntranceCutsceneManager::execGetScreenFilterDataTableID },
			{ "GetUseBeltAttachPosition", &AELEntranceCutsceneManager::execGetUseBeltAttachPosition },
			{ "InputEvent_CameraZoomOut", &AELEntranceCutsceneManager::execInputEvent_CameraZoomOut },
			{ "InputEvent_CameraZoomOutKey_Pressed", &AELEntranceCutsceneManager::execInputEvent_CameraZoomOutKey_Pressed },
			{ "InputEvent_CameraZoomOutKey_Released", &AELEntranceCutsceneManager::execInputEvent_CameraZoomOutKey_Released },
			{ "InputEvent_CameraZoomUp", &AELEntranceCutsceneManager::execInputEvent_CameraZoomUp },
			{ "InputEvent_CameraZoomUpKey_Pressed", &AELEntranceCutsceneManager::execInputEvent_CameraZoomUpKey_Pressed },
			{ "InputEvent_CameraZoomUpKey_Released", &AELEntranceCutsceneManager::execInputEvent_CameraZoomUpKey_Released },
			{ "IsEnableInputEvent", &AELEntranceCutsceneManager::execIsEnableInputEvent },
			{ "IsNowLoading", &AELEntranceCutsceneManager::execIsNowLoading },
			{ "LoadAssetForSingle", &AELEntranceCutsceneManager::execLoadAssetForSingle },
			{ "LoadAssetForTag", &AELEntranceCutsceneManager::execLoadAssetForTag },
			{ "MakeComponentList", &AELEntranceCutsceneManager::execMakeComponentList },
			{ "MoviePlayerEvent", &AELEntranceCutsceneManager::execMoviePlayerEvent },
			{ "OnFinishedEvent", &AELEntranceCutsceneManager::execOnFinishedEvent },
			{ "OnFullScreenTitantron_N", &AELEntranceCutsceneManager::execOnFullScreenTitantron_N },
			{ "PlayFingerSignMontage", &AELEntranceCutsceneManager::execPlayFingerSignMontage },
			{ "RequestPlayLevelSequence", &AELEntranceCutsceneManager::execRequestPlayLevelSequence },
			{ "SetCastInfo", &AELEntranceCutsceneManager::execSetCastInfo },
			{ "SetFullScreenTitantron", &AELEntranceCutsceneManager::execSetFullScreenTitantron },
			{ "SetSceneCaptureOnly", &AELEntranceCutsceneManager::execSetSceneCaptureOnly },
			{ "SetupBGModelsForEditor", &AELEntranceCutsceneManager::execSetupBGModelsForEditor },
			{ "SkipScene", &AELEntranceCutsceneManager::execSkipScene },
			{ "StartDropObject", &AELEntranceCutsceneManager::execStartDropObject },
			{ "StartParticles", &AELEntranceCutsceneManager::execStartParticles },
			{ "SwitchParticles", &AELEntranceCutsceneManager::execSwitchParticles },
			{ "UpdateDefaultEntranceFlag", &AELEntranceCutsceneManager::execUpdateDefaultEntranceFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_AssetLoadCompleteEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_AssetLoadCompleteEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_AssetLoadCompleteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "AssetLoadCompleteEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_AssetLoadCompleteEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_AssetLoadCompleteEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_AssetLoadCompleteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_AssetLoadCompleteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventAttachBeltToWaist_Impl_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::NewProp_Belt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "AttachBeltToWaist_Impl", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventAttachBeltToWaist_Impl_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_DestroyAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_DestroyAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_DestroyAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "DestroyAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_DestroyAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_DestroyAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_DestroyAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_DestroyAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_DisableLookAtWrestler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_DisableLookAtWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_DisableLookAtWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "DisableLookAtWrestler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_DisableLookAtWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_DisableLookAtWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_DisableLookAtWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_DisableLookAtWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics
	{
		struct ELEntranceCutsceneManager_eventGetAnimMontage_Parms
		{
			TArray<UAnimMontage*> AnimMontages;
			TArray<int32> CastIDs;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontages_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimMontages;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CastIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CastIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::NewProp_AnimMontages_Inner = { "AnimMontages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::NewProp_AnimMontages = { "AnimMontages", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetAnimMontage_Parms, AnimMontages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::NewProp_CastIDs_Inner = { "CastIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::NewProp_CastIDs = { "CastIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetAnimMontage_Parms, CastIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::NewProp_AnimMontages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::NewProp_AnimMontages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::NewProp_CastIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::NewProp_CastIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetAnimMontage", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetAnimMontage_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics
	{
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AssetList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::NewProp_AssetList_Inner = { "AssetList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::NewProp_AssetList = { "AssetList", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetCAWMeshList_Impl_Parms, AssetList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::NewProp_WrestlerInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::NewProp_WrestlerInfo = { "WrestlerInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetCAWMeshList_Impl_Parms, WrestlerInfo), Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::NewProp_WrestlerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::NewProp_WrestlerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::NewProp_AssetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::NewProp_AssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::NewProp_WrestlerInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetCAWMeshList_Impl", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetCAWMeshList_Impl_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics
	{
		struct ELEntranceCutsceneManager_eventGetEntranceHUDButtonType_Parms
		{
			FELEntranceCutsceneInfo CutsceneInfo;
			EDisplayButtonIconType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutsceneInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutsceneInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::NewProp_CutsceneInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::NewProp_CutsceneInfo = { "CutsceneInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetEntranceHUDButtonType_Parms, CutsceneInfo), Z_Construct_UScriptStruct_FELEntranceCutsceneInfo, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::NewProp_CutsceneInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::NewProp_CutsceneInfo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetEntranceHUDButtonType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::NewProp_CutsceneInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetEntranceHUDButtonType", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetEntranceHUDButtonType_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics
	{
		struct ELEntranceCutsceneManager_eventGetEntranceSceneCastActor_Parms
		{
			UObject* WorldContextObject;
			AActor* Actor;
			int32 CastID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CastID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetEntranceSceneCastActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetEntranceSceneCastActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::NewProp_CastID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::NewProp_CastID = { "CastID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetEntranceSceneCastActor_Parms, CastID), METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::NewProp_CastID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::NewProp_CastID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::NewProp_CastID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetEntranceSceneCastActor", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetEntranceSceneCastActor_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics
	{
		struct ELEntranceCutsceneManager_eventGetManagerMontage_Parms
		{
			FVector Location;
			FRotator Rotation;
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetManagerMontage_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetManagerMontage_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetManagerMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetManagerMontage", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetManagerMontage_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics
	{
		struct ELEntranceCutsceneManager_eventGetMatchRecord_Single_Parms
		{
			EWrestlerID_N WreslterID;
			FGuid UID;
			int32 Win;
			int32 Lose;
			int32 Draw;
			bool IsCareerRecord;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WreslterID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WreslterID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Win;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lose;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Draw;
		static void NewProp_IsCareerRecord_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCareerRecord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_WreslterID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_WreslterID = { "WreslterID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMatchRecord_Single_Parms, WreslterID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMatchRecord_Single_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_Win = { "Win", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMatchRecord_Single_Parms, Win), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_Lose = { "Lose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMatchRecord_Single_Parms, Lose), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_Draw = { "Draw", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMatchRecord_Single_Parms, Draw), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_IsCareerRecord_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventGetMatchRecord_Single_Parms*)Obj)->IsCareerRecord = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_IsCareerRecord = { "IsCareerRecord", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventGetMatchRecord_Single_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_IsCareerRecord_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_WreslterID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_WreslterID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_Lose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_Draw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::NewProp_IsCareerRecord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetMatchRecord_Single", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetMatchRecord_Single_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics
	{
		struct ELEntranceCutsceneManager_eventGetMatchRecord_Tag_Parms
		{
			TArray<FELEntranceCutsceneWrestlerInfo> Members;
			int32 Win;
			int32 Lose;
			int32 Draw;
			bool IsCareerRecord;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Win;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lose;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Draw;
		static void NewProp_IsCareerRecord_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCareerRecord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Members_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMatchRecord_Tag_Parms, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Members_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Win = { "Win", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMatchRecord_Tag_Parms, Win), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Lose = { "Lose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMatchRecord_Tag_Parms, Lose), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Draw = { "Draw", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMatchRecord_Tag_Parms, Draw), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_IsCareerRecord_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventGetMatchRecord_Tag_Parms*)Obj)->IsCareerRecord = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_IsCareerRecord = { "IsCareerRecord", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventGetMatchRecord_Tag_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_IsCareerRecord_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Lose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_Draw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::NewProp_IsCareerRecord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetMatchRecord_Tag", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetMatchRecord_Tag_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetModelName_Impl_Parms, ModelName), Z_Construct_UScriptStruct_FCharacterModelName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_WrestlerInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_WrestlerInfo = { "WrestlerInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetModelName_Impl_Parms, WrestlerInfo), Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_WrestlerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_WrestlerInfo_MetaData)) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventGetModelName_Impl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventGetModelName_Impl_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_ModelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_WrestlerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetModelName_Impl", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetModelName_Impl_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockItemId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Number;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMovieNumber_Parms, UnlockItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMovieNumber_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventGetMovieNumber_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventGetMovieNumber_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::NewProp_UnlockItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetMovieNumber", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetMovieNumber_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoviePath;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieDataID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::NewProp_MoviePath = { "MoviePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMoviePath_Parms, MoviePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::NewProp_MovieDataID = { "MovieDataID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMoviePath_Parms, MovieDataID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventGetMoviePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventGetMoviePath_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::NewProp_MoviePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::NewProp_MovieDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetMoviePath", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetMoviePath_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics
	{
		struct ELEntranceCutsceneManager_eventGetMusicIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetMusicIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetMusicIndex", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetMusicIndex_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics
	{
		struct ELEntranceCutsceneManager_eventGetParticle_Parms
		{
			int32 Index;
			UParticleSystem* ParticleSystem;
			bool SwitchType;
			TArray<UClass*> DropObjects;
			TArray<FELEntranceCutsceneEmitterData> Emitters;
			USoundAtomCue* OnCue;
			USoundAtomCue* OffCue;
			int32 DataTableID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static void NewProp_SwitchType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SwitchType;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DropObjects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DropObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Emitters_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Emitters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OffCue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataTableID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetParticle_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetParticle_Parms, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_SwitchType_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventGetParticle_Parms*)Obj)->SwitchType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_SwitchType = { "SwitchType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventGetParticle_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_SwitchType_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_DropObjects_Inner = { "DropObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_DropObjects = { "DropObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetParticle_Parms, DropObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELEntranceCutsceneEmitterData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetParticle_Parms, Emitters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_OnCue = { "OnCue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetParticle_Parms, OnCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_OffCue = { "OffCue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetParticle_Parms, OffCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_DataTableID = { "DataTableID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetParticle_Parms, DataTableID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventGetParticle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventGetParticle_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_SwitchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_DropObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_DropObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_Emitters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_Emitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_OnCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_OffCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_DataTableID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetParticle", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetParticle_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics
	{
		struct ELEntranceCutsceneManager_eventGetProfileCutsceneFromUnlockItemID_Parms
		{
			int32 UnlockItemId;
			int32 BaseEntranceNo;
			FELWrestlerProfile_CutScene Cutscene;
			EELEntranceCutsceneItemType ItemType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockItemId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseEntranceNo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cutscene;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetProfileCutsceneFromUnlockItemID_Parms, UnlockItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_BaseEntranceNo = { "BaseEntranceNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetProfileCutsceneFromUnlockItemID_Parms, BaseEntranceNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_Cutscene = { "Cutscene", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetProfileCutsceneFromUnlockItemID_Parms, Cutscene), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetProfileCutsceneFromUnlockItemID_Parms, ItemType), Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneItemType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_UnlockItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_BaseEntranceNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_Cutscene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::NewProp_ItemType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetProfileCutsceneFromUnlockItemID", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetProfileCutsceneFromUnlockItemID_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics
	{
		struct ELEntranceCutsceneManager_eventGetRootLocationAndRotation_Parms
		{
			FVector Location;
			FRotator Rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetRootLocationAndRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetRootLocationAndRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetRootLocationAndRotation", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetRootLocationAndRotation_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics
	{
		struct ELEntranceCutsceneManager_eventGetScreenFilter_Parms
		{
			int32 Index;
			EELEntranceCamera_ChameleonEffectType ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetScreenFilter_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetScreenFilter_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EELEntranceCamera_ChameleonEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetScreenFilter", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetScreenFilter_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics
	{
		struct ELEntranceCutsceneManager_eventGetScreenFilterDataTableID_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetScreenFilterDataTableID_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetScreenFilterDataTableID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetScreenFilterDataTableID", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetScreenFilterDataTableID_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics
	{
		struct ELEntranceCutsceneManager_eventGetUseBeltAttachPosition_Parms
		{
			TArray<EELBeltAttachPosition> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EELBeltAttachPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventGetUseBeltAttachPosition_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "GetUseBeltAttachPosition", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventGetUseBeltAttachPosition_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomUp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::NewProp_ZoomUp = { "ZoomUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventInputEvent_CameraZoom_Parms, ZoomUp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::NewProp_ZoomOut = { "ZoomOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventInputEvent_CameraZoom_Parms, ZoomOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::NewProp_ZoomUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::NewProp_ZoomOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "InputEvent_CameraZoom", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventInputEvent_CameraZoom_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics
	{
		struct ELEntranceCutsceneManager_eventInputEvent_CameraZoomOut_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventInputEvent_CameraZoomOut_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "InputEvent_CameraZoomOut", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventInputEvent_CameraZoomOut_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "InputEvent_CameraZoomOutKey_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "InputEvent_CameraZoomOutKey_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics
	{
		struct ELEntranceCutsceneManager_eventInputEvent_CameraZoomUp_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventInputEvent_CameraZoomUp_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "InputEvent_CameraZoomUp", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventInputEvent_CameraZoomUp_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "InputEvent_CameraZoomUpKey_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "InputEvent_CameraZoomUpKey_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics
	{
		struct ELEntranceCutsceneManager_eventIsEnableInputEvent_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventIsEnableInputEvent_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventIsEnableInputEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventIsEnableInputEvent_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "IsEnableInputEvent", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventIsEnableInputEvent_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics
	{
		struct ELEntranceCutsceneManager_eventIsNowLoading_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventIsNowLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventIsNowLoading_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "IsNowLoading", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventIsNowLoading_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics
	{
		struct ELEntranceCutsceneManager_eventLoadAssetForSingle_Parms
		{
			FELWrestlerProfile_CutScene CustomData;
			FELEntranceCutsceneInfo CutsceneInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutsceneInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutsceneInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventLoadAssetForSingle_Parms, CustomData), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CutsceneInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CutsceneInfo = { "CutsceneInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventLoadAssetForSingle_Parms, CutsceneInfo), Z_Construct_UScriptStruct_FELEntranceCutsceneInfo, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CutsceneInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CutsceneInfo_MetaData)) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventLoadAssetForSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventLoadAssetForSingle_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_CutsceneInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "LoadAssetForSingle", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventLoadAssetForSingle_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics
	{
		struct ELEntranceCutsceneManager_eventLoadAssetForTag_Parms
		{
			FELWrestlerProfile_CutScene CustomData;
			FELEntranceCutsceneInfo CutsceneInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutsceneInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutsceneInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventLoadAssetForTag_Parms, CustomData), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CutsceneInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CutsceneInfo = { "CutsceneInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventLoadAssetForTag_Parms, CutsceneInfo), Z_Construct_UScriptStruct_FELEntranceCutsceneInfo, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CutsceneInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CutsceneInfo_MetaData)) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventLoadAssetForTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventLoadAssetForTag_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_CutsceneInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "LoadAssetForTag", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventLoadAssetForTag_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics
	{
		struct ELEntranceCutsceneManager_eventMakeComponentList_Parms
		{
			TArray<AActor*> SceneActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SceneActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::NewProp_SceneActors_Inner = { "SceneActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::NewProp_SceneActors = { "SceneActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventMakeComponentList_Parms, SceneActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::NewProp_SceneActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::NewProp_SceneActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "MakeComponentList", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventMakeComponentList_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics
	{
		struct ELEntranceCutsceneManager_eventMoviePlayerEvent_Parms
		{
			EMoviePlayerEvent EventType;
			UELMoviePlayerBase* MoviePlayerBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoviePlayerBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventMoviePlayerEvent_Parms, EventType), Z_Construct_UEnum_ABP_200508_EMoviePlayerEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::NewProp_MoviePlayerBase = { "MoviePlayerBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventMoviePlayerEvent_Parms, MoviePlayerBase), Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::NewProp_MoviePlayerBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "MoviePlayerEvent", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventMoviePlayerEvent_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_OnDestroyedAssets_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_OnDestroyedAssets_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnDestroyedAssets_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "OnDestroyedAssets_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_OnDestroyedAssets_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnDestroyedAssets_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_OnDestroyedAssets_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_OnDestroyedAssets_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "OnFinishedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedSequence_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedSequence_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedSequence_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "OnFinishedSequence_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedSequence_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedSequence_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedSequence_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedSequence_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics
	{
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventOnFullScreenTitantron_N_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventOnFullScreenTitantron_N_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "OnFullScreenTitantron_N", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventOnFullScreenTitantron_N_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_OnLastFadeSequence_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_OnLastFadeSequence_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnLastFadeSequence_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "OnLastFadeSequence_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_OnLastFadeSequence_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnLastFadeSequence_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_OnLastFadeSequence_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_OnLastFadeSequence_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_OnLoadedAssets_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_OnLoadedAssets_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnLoadedAssets_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "OnLoadedAssets_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_OnLoadedAssets_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnLoadedAssets_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_OnLoadedAssets_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_OnLoadedAssets_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PauseDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::NewProp_PauseDuration = { "PauseDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventOnPausedLevelSequence_Impl_Parms, PauseDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::NewProp_PauseDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "OnPausedLevelSequence_Impl", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventOnPausedLevelSequence_Impl_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSceneDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::NewProp_InSceneDuration = { "InSceneDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventOnPlayedLevelSequence_Impl_Parms, InSceneDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::NewProp_InSceneDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "OnPlayedLevelSequence_Impl", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventOnPlayedLevelSequence_Impl_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics
	{
		struct ELEntranceCutsceneManager_eventPlayFingerSignMontage_Parms
		{
			UAnimInstance* AnimInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventPlayFingerSignMontage_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::NewProp_AnimInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "PlayFingerSignMontage", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventPlayFingerSignMontage_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics
	{
		struct ELEntranceCutsceneManager_eventRequestPlayLevelSequence_Parms
		{
			FELEntranceCutsceneInfo CutsceneInfo;
			ALevelSequenceActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutsceneInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutsceneInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::NewProp_CutsceneInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::NewProp_CutsceneInfo = { "CutsceneInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventRequestPlayLevelSequence_Parms, CutsceneInfo), Z_Construct_UScriptStruct_FELEntranceCutsceneInfo, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::NewProp_CutsceneInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::NewProp_CutsceneInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventRequestPlayLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::NewProp_CutsceneInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "RequestPlayLevelSequence", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventRequestPlayLevelSequence_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics
	{
		struct ELEntranceCutsceneManager_eventSetCastInfo_Parms
		{
			int32 CastID;
			AELCharacter_Native* Character;
			USkeletalMeshComponent* MeshComponent;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CastID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::NewProp_CastID = { "CastID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSetCastInfo_Parms, CastID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSetCastInfo_Parms, Character), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSetCastInfo_Parms, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::NewProp_CastID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::NewProp_MeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "SetCastInfo", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventSetCastInfo_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics
	{
		struct ELEntranceCutsceneManager_eventSetFullScreenTitantron_Parms
		{
			bool Flag;
		};
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventSetFullScreenTitantron_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventSetFullScreenTitantron_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "SetFullScreenTitantron", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventSetFullScreenTitantron_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics
	{
		struct ELEntranceCutsceneManager_eventSetSceneCaptureOnly_Parms
		{
			bool Flag;
		};
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventSetSceneCaptureOnly_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventSetSceneCaptureOnly_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "SetSceneCaptureOnly", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventSetSceneCaptureOnly_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics
	{
		struct ELEntranceCutsceneManager_eventSetupBGModelsForEditor_Parms
		{
			UObject* WorldContextObject;
			UDataTable* BGModelData;
			int32 GroupId;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BGModelData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSetupBGModelsForEditor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_BGModelData = { "BGModelData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSetupBGModelsForEditor_Parms, BGModelData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSetupBGModelsForEditor_Parms, GroupId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSetupBGModelsForEditor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_BGModelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "SetupBGModelsForEditor", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventSetupBGModelsForEditor_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_SkipScene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_SkipScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_SkipScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "SkipScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_SkipScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SkipScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_SkipScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_SkipScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics
	{
		struct ELEntranceCutsceneManager_eventStartDropObject_Parms
		{
			UClass* DropObject;
			FVector BaseLocation;
			USoundAtomCue* OnCue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DropObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::NewProp_DropObject = { "DropObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventStartDropObject_Parms, DropObject), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::NewProp_BaseLocation = { "BaseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventStartDropObject_Parms, BaseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::NewProp_OnCue = { "OnCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventStartDropObject_Parms, OnCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::NewProp_DropObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::NewProp_BaseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::NewProp_OnCue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "StartDropObject", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventStartDropObject_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics
	{
		struct ELEntranceCutsceneManager_eventStartParticles_Parms
		{
			int32 Index;
			USceneComponent* SceneComp;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventStartParticles_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::NewProp_SceneComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::NewProp_SceneComp = { "SceneComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventStartParticles_Parms, SceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::NewProp_SceneComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::NewProp_SceneComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::NewProp_SceneComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "StartParticles", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventStartParticles_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics
	{
		struct ELEntranceCutsceneManager_eventSwitchParticles_Parms
		{
			int32 Index;
			UParticleSystem* ParticleSystem;
			USceneComponent* SceneComp;
			TArray<FELEntranceCutsceneEmitterData> Emitters;
			USoundAtomCue* OnCue;
			USoundAtomCue* OffCue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Emitters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Emitters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OffCue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSwitchParticles_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSwitchParticles_Parms, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_SceneComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_SceneComp = { "SceneComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSwitchParticles_Parms, SceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_SceneComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_SceneComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELEntranceCutsceneEmitterData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_Emitters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSwitchParticles_Parms, Emitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_Emitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_Emitters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_OnCue = { "OnCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSwitchParticles_Parms, OnCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_OffCue = { "OffCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventSwitchParticles_Parms, OffCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventSwitchParticles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventSwitchParticles_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_SceneComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_Emitters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_Emitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_OnCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_OffCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "SwitchParticles", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventSwitchParticles_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics
	{
		struct ELEntranceCutsceneManager_eventUpdateDefaultEntranceFlag_Parms
		{
			FELEntranceCutsceneInfo CutsceneInfo;
			FELWrestlerProfile_CutScene CustomData;
			UDataTable* TeamParamDataTable;
			bool CAE;
			FELEntranceCutsceneInfo ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutsceneInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutsceneInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeamParamDataTable;
		static void NewProp_CAE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CAE;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CutsceneInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CutsceneInfo = { "CutsceneInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventUpdateDefaultEntranceFlag_Parms, CutsceneInfo), Z_Construct_UScriptStruct_FELEntranceCutsceneInfo, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CutsceneInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CutsceneInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventUpdateDefaultEntranceFlag_Parms, CustomData), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CustomData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_TeamParamDataTable = { "TeamParamDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventUpdateDefaultEntranceFlag_Parms, TeamParamDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CAE_SetBit(void* Obj)
	{
		((ELEntranceCutsceneManager_eventUpdateDefaultEntranceFlag_Parms*)Obj)->CAE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CAE = { "CAE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEntranceCutsceneManager_eventUpdateDefaultEntranceFlag_Parms), &Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CAE_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEntranceCutsceneManager_eventUpdateDefaultEntranceFlag_Parms, ReturnValue), Z_Construct_UScriptStruct_FELEntranceCutsceneInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CutsceneInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_TeamParamDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_CAE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELEntranceCutsceneManager, nullptr, "UpdateDefaultEntranceFlag", nullptr, nullptr, sizeof(ELEntranceCutsceneManager_eventUpdateDefaultEntranceFlag_Parms), Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELEntranceCutsceneManager_NoRegister()
	{
		return AELEntranceCutsceneManager::StaticClass();
	}
	struct Z_Construct_UClass_AELEntranceCutsceneManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneAnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneMultiBeltAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneMultiBeltAnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneParticleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneParticleData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneBGModelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneBGModelData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneManagerAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneManagerAnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneFingerSignData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneFingerSignData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneScreenFilterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneScreenFilterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneMusicData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneMusicData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneWrestlerSettingsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneWrestlerSettingsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneBeltAttachOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneBeltAttachOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneManagerParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceCutsceneManagerParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RibbonActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonActor_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RibbonActor_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonActor_G_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RibbonActor_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonActor_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RibbonActor_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonActor_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RibbonActor_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedRibbonActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DroppedRibbonActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseMovieSlotForTitantron_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseMovieSlotForTitantron;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCameraFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraFade;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutsceneList_N_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutsceneList_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CutsceneList_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceIndex_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastFadeDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltPositionTwo_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltPositionTwo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltPositionTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BeltPositionTwo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltPositionThree_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltPositionThree_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltPositionThree_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BeltPositionThree;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltPositionFour_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltPositionFour_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltPositionFour_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BeltPositionFour;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltPositionFive_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltPositionFive_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltPositionFive_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BeltPositionFive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProfile_Cutscene_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentProfile_Cutscene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticleSystemComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BGModel_SkeletalMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGModel_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BGModel_SkeletalMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BGModel_StaticMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGModel_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BGModel_StaticMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BGModelActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGModelActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BGModelActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppedRibbonInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroppedRibbonInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEntranceCutsceneManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELNetPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELEntranceCutsceneManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_AssetLoadCompleteEvent, "AssetLoadCompleteEvent" }, // 1385705101
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_AttachBeltToWaist_Impl, "AttachBeltToWaist_Impl" }, // 3782269925
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_DestroyAssets, "DestroyAssets" }, // 71739950
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_DisableLookAtWrestler, "DisableLookAtWrestler" }, // 1875906282
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetAnimMontage, "GetAnimMontage" }, // 584035842
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetCAWMeshList_Impl, "GetCAWMeshList_Impl" }, // 326028100
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceHUDButtonType, "GetEntranceHUDButtonType" }, // 2330278570
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetEntranceSceneCastActor, "GetEntranceSceneCastActor" }, // 3008355614
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetManagerMontage, "GetManagerMontage" }, // 360447686
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Single, "GetMatchRecord_Single" }, // 2618183112
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetMatchRecord_Tag, "GetMatchRecord_Tag" }, // 1111123601
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetModelName_Impl, "GetModelName_Impl" }, // 155582453
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetMovieNumber, "GetMovieNumber" }, // 1762562060
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetMoviePath, "GetMoviePath" }, // 2210437319
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetMusicIndex, "GetMusicIndex" }, // 373691853
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetParticle, "GetParticle" }, // 1181401832
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetProfileCutsceneFromUnlockItemID, "GetProfileCutsceneFromUnlockItemID" }, // 2232564398
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetRootLocationAndRotation, "GetRootLocationAndRotation" }, // 2095349961
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilter, "GetScreenFilter" }, // 3169429675
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetScreenFilterDataTableID, "GetScreenFilterDataTableID" }, // 1075015242
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_GetUseBeltAttachPosition, "GetUseBeltAttachPosition" }, // 3793415990
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoom, "InputEvent_CameraZoom" }, // 4270752838
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOut, "InputEvent_CameraZoomOut" }, // 2617133158
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Pressed, "InputEvent_CameraZoomOutKey_Pressed" }, // 1182147523
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomOutKey_Released, "InputEvent_CameraZoomOutKey_Released" }, // 3874824053
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUp, "InputEvent_CameraZoomUp" }, // 1895969216
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Pressed, "InputEvent_CameraZoomUpKey_Pressed" }, // 1421336460
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_InputEvent_CameraZoomUpKey_Released, "InputEvent_CameraZoomUpKey_Released" }, // 3586481074
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_IsEnableInputEvent, "IsEnableInputEvent" }, // 2101621401
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_IsNowLoading, "IsNowLoading" }, // 2214487340
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForSingle, "LoadAssetForSingle" }, // 1401222794
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_LoadAssetForTag, "LoadAssetForTag" }, // 1686338837
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_MakeComponentList, "MakeComponentList" }, // 4008071953
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_MoviePlayerEvent, "MoviePlayerEvent" }, // 3847031018
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_OnDestroyedAssets_Impl, "OnDestroyedAssets_Impl" }, // 4030256655
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedEvent, "OnFinishedEvent" }, // 2629295610
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_OnFinishedSequence_Impl, "OnFinishedSequence_Impl" }, // 787802788
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_OnFullScreenTitantron_N, "OnFullScreenTitantron_N" }, // 3168587629
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_OnLastFadeSequence_Impl, "OnLastFadeSequence_Impl" }, // 925562720
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_OnLoadedAssets_Impl, "OnLoadedAssets_Impl" }, // 2831445645
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_OnPausedLevelSequence_Impl, "OnPausedLevelSequence_Impl" }, // 2000698544
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_OnPlayedLevelSequence_Impl, "OnPlayedLevelSequence_Impl" }, // 2486500849
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_PlayFingerSignMontage, "PlayFingerSignMontage" }, // 80409076
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_RequestPlayLevelSequence, "RequestPlayLevelSequence" }, // 997544256
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_SetCastInfo, "SetCastInfo" }, // 473038625
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_SetFullScreenTitantron, "SetFullScreenTitantron" }, // 882574677
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_SetSceneCaptureOnly, "SetSceneCaptureOnly" }, // 593450093
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_SetupBGModelsForEditor, "SetupBGModelsForEditor" }, // 2169002167
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_SkipScene, "SkipScene" }, // 513789669
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_StartDropObject, "StartDropObject" }, // 4224976703
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_StartParticles, "StartParticles" }, // 797731329
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_SwitchParticles, "SwitchParticles" }, // 1155774467
		{ &Z_Construct_UFunction_AELEntranceCutsceneManager_UpdateDefaultEntranceFlag, "UpdateDefaultEntranceFlag" }, // 3462481922
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ELEntranceCutsceneManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneAnimationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneAnimationData = { "EntranceCutsceneAnimationData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneAnimationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneAnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMultiBeltAnimationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMultiBeltAnimationData = { "EntranceCutsceneMultiBeltAnimationData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneMultiBeltAnimationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMultiBeltAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMultiBeltAnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneParticleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneParticleData = { "EntranceCutsceneParticleData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneParticleData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneParticleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneParticleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBGModelData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBGModelData = { "EntranceCutsceneBGModelData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneBGModelData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBGModelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBGModelData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerAnimationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerAnimationData = { "EntranceCutsceneManagerAnimationData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneManagerAnimationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerAnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneFingerSignData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneFingerSignData = { "EntranceCutsceneFingerSignData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneFingerSignData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneFingerSignData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneFingerSignData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneScreenFilterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneScreenFilterData = { "EntranceCutsceneScreenFilterData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneScreenFilterData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneScreenFilterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneScreenFilterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMusicData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMusicData = { "EntranceCutsceneMusicData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneMusicData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMusicData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMusicData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneWrestlerSettingsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneWrestlerSettingsData = { "EntranceCutsceneWrestlerSettingsData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneWrestlerSettingsData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneWrestlerSettingsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneWrestlerSettingsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBeltAttachOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBeltAttachOffset = { "EntranceCutsceneBeltAttachOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneBeltAttachOffset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBeltAttachOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBeltAttachOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerParam = { "EntranceCutsceneManagerParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneManagerParam), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DataManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DataManager = { "DataManager", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, DataManager), Z_Construct_UClass_UELEntranceCutsceneDataManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DataManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DataManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor = { "RibbonActor", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor), Z_Construct_UClass_ARibbonBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_R_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_R = { "RibbonActor_R", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor_R), Z_Construct_UClass_ARibbonBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_G_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_G = { "RibbonActor_G", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor_G), Z_Construct_UClass_ARibbonBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_B = { "RibbonActor_B", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor_B), Z_Construct_UClass_ARibbonBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_Y_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_Y = { "RibbonActor_Y", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor_Y), Z_Construct_UClass_ARibbonBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonActor = { "DroppedRibbonActor", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, DroppedRibbonActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_UseMovieSlotForTitantron_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_UseMovieSlotForTitantron = { "UseMovieSlotForTitantron", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, UseMovieSlotForTitantron), METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_UseMovieSlotForTitantron_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_UseMovieSlotForTitantron_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_OnCameraFade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_OnCameraFade = { "OnCameraFade", nullptr, (EPropertyFlags)0x0020180010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, OnCameraFade), Z_Construct_UDelegateFunction_ABP_200508_EntranceCutsceneCameraFade__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_OnCameraFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_OnCameraFade_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CutsceneList_N_Inner = { "CutsceneList_N", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELEntranceCutsceneInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CutsceneList_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CutsceneList_N = { "CutsceneList_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, CutsceneList_N), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CutsceneList_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CutsceneList_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_SequenceIndex_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_SequenceIndex_N = { "SequenceIndex_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, SequenceIndex_N), METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_SequenceIndex_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_SequenceIndex_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LastFadeDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LastFadeDuration = { "LastFadeDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, LastFadeDuration), METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LastFadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LastFadeDuration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionTwo_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionTwo_Inner = { "BeltPositionTwo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneBeltPositionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionTwo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionTwo = { "BeltPositionTwo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, BeltPositionTwo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionTwo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionThree_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionThree_Inner = { "BeltPositionThree", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneBeltPositionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionThree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionThree = { "BeltPositionThree", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, BeltPositionThree), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionThree_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFour_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFour_Inner = { "BeltPositionFour", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneBeltPositionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFour_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFour = { "BeltPositionFour", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, BeltPositionFour), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFour_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFive_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFive_Inner = { "BeltPositionFive", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneBeltPositionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFive = { "BeltPositionFive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, BeltPositionFive), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CurrentProfile_Cutscene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CurrentProfile_Cutscene = { "CurrentProfile_Cutscene", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, CurrentProfile_Cutscene), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CurrentProfile_Cutscene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CurrentProfile_Cutscene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LevelSequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LevelSequenceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents_Inner = { "ParticleSystemComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents = { "ParticleSystemComponents", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, ParticleSystemComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_SkeletalMesh_Inner = { "BGModel_SkeletalMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASkeletalMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_SkeletalMesh = { "BGModel_SkeletalMesh", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, BGModel_SkeletalMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_StaticMesh_Inner = { "BGModel_StaticMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_StaticMesh = { "BGModel_StaticMesh", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, BGModel_StaticMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModelActors_Inner = { "BGModelActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModelActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModelActors = { "BGModelActors", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, BGModelActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModelActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModelActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManager" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonInstance = { "DroppedRibbonInstance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEntranceCutsceneManager, DroppedRibbonInstance), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELEntranceCutsceneManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMultiBeltAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneParticleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBGModelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneFingerSignData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneScreenFilterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneMusicData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneWrestlerSettingsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneBeltAttachOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_EntranceCutsceneManagerParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DataManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_RibbonActor_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_UseMovieSlotForTitantron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_OnCameraFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CutsceneList_N_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CutsceneList_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_SequenceIndex_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LastFadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionTwo_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionTwo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionThree_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionThree_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFour_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFour_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFive_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFive_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BeltPositionFive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_CurrentProfile_Cutscene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_LevelSequenceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_ParticleSystemComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_SkeletalMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_StaticMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModel_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModelActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_BGModelActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneManager_Statics::NewProp_DroppedRibbonInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEntranceCutsceneManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEntranceCutsceneManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEntranceCutsceneManager_Statics::ClassParams = {
		&AELEntranceCutsceneManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELEntranceCutsceneManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEntranceCutsceneManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEntranceCutsceneManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEntranceCutsceneManager, 1750034097);
	template<> ABP_200508_API UClass* StaticClass<AELEntranceCutsceneManager>()
	{
		return AELEntranceCutsceneManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEntranceCutsceneManager(Z_Construct_UClass_AELEntranceCutsceneManager, &AELEntranceCutsceneManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEntranceCutsceneManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEntranceCutsceneManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
