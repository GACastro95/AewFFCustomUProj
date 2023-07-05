// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELSoundUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSoundUtilityFunction() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSoundUtilityFunction_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSoundUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ECrowdChantType_N();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueMusic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSoundUtilityFunction::execGetCrowdChantCue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_GET_OBJECT(UDataTable,Z_Param__pDataTable);
		P_GET_ENUM(ECrowdChantType_N,Z_Param__type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=UELSoundUtilityFunction::GetCrowdChantCue(Z_Param_RowName,Z_Param__pDataTable,ECrowdChantType_N(Z_Param__type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execGetMusicRowNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutRowNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSoundUtilityFunction::GetMusicRowNames(Z_Param_Out_OutRowNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execGetMusicTabaleCueList)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomCueMusic*)Z_Param__Result=UELSoundUtilityFunction::GetMusicTabaleCueList(Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlaySound2D_ForCueEvent)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param__pSoundAsset);
		P_GET_UBOOL(Z_Param__isPersistAcrossLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlaySound2D_ForCueEvent(Z_Param__pWorldContextObject,Z_Param__pSoundAsset,Z_Param__isPersistAcrossLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlaySound2D_ForID)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param__pDataTable);
		P_GET_PROPERTY(FIntProperty,Z_Param__sSFXID);
		P_GET_UBOOL(Z_Param__isUseSoundAssetDataTable);
		P_GET_UBOOL(Z_Param__isPersistAcrossLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlaySound2D_ForID(Z_Param__pWorldContextObject,Z_Param__pDataTable,Z_Param__sSFXID,Z_Param__isUseSoundAssetDataTable,Z_Param__isPersistAcrossLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlaySound2D_ForString)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param__pDataTable);
		P_GET_PROPERTY(FStrProperty,Z_Param__SFXID);
		P_GET_UBOOL(Z_Param__isUseSoundAssetDataTable);
		P_GET_UBOOL(Z_Param__isPersistAcrossLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlaySound2D_ForString(Z_Param__pWorldContextObject,Z_Param__pDataTable,Z_Param__SFXID,Z_Param__isUseSoundAssetDataTable,Z_Param__isPersistAcrossLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlaySoundAtLocation_ForCueEvent)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param__pSoundAsset);
		P_GET_STRUCT_REF(FVector,Z_Param_Out__location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlaySoundAtLocation_ForCueEvent(Z_Param__pWorldContextObject,Z_Param__pSoundAsset,Z_Param_Out__location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlaySoundAtLocation_ForID)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param__pDataTable);
		P_GET_PROPERTY(FIntProperty,Z_Param__sSFXID);
		P_GET_STRUCT_REF(FVector,Z_Param_Out__location);
		P_GET_UBOOL(Z_Param__isUseSoundAssetDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlaySoundAtLocation_ForID(Z_Param__pWorldContextObject,Z_Param__pDataTable,Z_Param__sSFXID,Z_Param_Out__location,Z_Param__isUseSoundAssetDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlaySoundAtLocation_ForString)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param__pDataTable);
		P_GET_PROPERTY(FStrProperty,Z_Param__SFXID);
		P_GET_STRUCT_REF(FVector,Z_Param_Out__location);
		P_GET_UBOOL(Z_Param__isUseSoundAssetDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlaySoundAtLocation_ForString(Z_Param__pWorldContextObject,Z_Param__pDataTable,Z_Param__SFXID,Z_Param_Out__location,Z_Param__isUseSoundAssetDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlaySoundAttached_ForCueEvent)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param__pSoundAsset);
		P_GET_OBJECT(USceneComponent,Z_Param__pParent);
		P_GET_PROPERTY(FNameProperty,Z_Param__attacheBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlaySoundAttached_ForCueEvent(Z_Param__pWorldContextObject,Z_Param__pSoundAsset,Z_Param__pParent,Z_Param__attacheBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlaySoundAttached_ForID)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param__pDataTable);
		P_GET_PROPERTY(FIntProperty,Z_Param__sSFXID);
		P_GET_OBJECT(USceneComponent,Z_Param__pParent);
		P_GET_UBOOL(Z_Param__isUseSoundAssetDataTable);
		P_GET_PROPERTY(FNameProperty,Z_Param__attacheBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlaySoundAttached_ForID(Z_Param__pWorldContextObject,Z_Param__pDataTable,Z_Param__sSFXID,Z_Param__pParent,Z_Param__isUseSoundAssetDataTable,Z_Param__attacheBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlaySoundAttached_ForString)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param__pDataTable);
		P_GET_PROPERTY(FStrProperty,Z_Param__SFXID);
		P_GET_OBJECT(USceneComponent,Z_Param__pParent);
		P_GET_UBOOL(Z_Param__isUseSoundAssetDataTable);
		P_GET_PROPERTY(FNameProperty,Z_Param__attacheBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlaySoundAttached_ForString(Z_Param__pWorldContextObject,Z_Param__pDataTable,Z_Param__SFXID,Z_Param__pParent,Z_Param__isUseSoundAssetDataTable,Z_Param__attacheBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlayVoice_ForCueEvent)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param__pVoiceAsset);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param__pSpeakerMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlayVoice_ForCueEvent(Z_Param__pWorldContextObject,Z_Param__pVoiceAsset,Z_Param__pSpeakerMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlayVoice_ForID)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param__pDataTable);
		P_GET_PROPERTY(FIntProperty,Z_Param__sVoiceID);
		P_GET_UBOOL(Z_Param__isUseSoundAssetDataTable);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param__pSpeakerMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlayVoice_ForID(Z_Param__pWorldContextObject,Z_Param__pDataTable,Z_Param__sVoiceID,Z_Param__isUseSoundAssetDataTable,Z_Param__pSpeakerMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execPlayVoice_ForString)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param__pDataTable);
		P_GET_PROPERTY(FStrProperty,Z_Param__VoiceID);
		P_GET_UBOOL(Z_Param__isUseSoundAssetDataTable);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param__pSpeakerMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UELSoundUtilityFunction::PlayVoice_ForString(Z_Param__pWorldContextObject,Z_Param__pDataTable,Z_Param__VoiceID,Z_Param__isUseSoundAssetDataTable,Z_Param__pSpeakerMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundUtilityFunction::execSetDebugDisableSound)
	{
		P_GET_UBOOL(Z_Param_IsDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSoundUtilityFunction::SetDebugDisableSound(Z_Param_IsDisable);
		P_NATIVE_END;
	}
	void UELSoundUtilityFunction::StaticRegisterNativesUELSoundUtilityFunction()
	{
		UClass* Class = UELSoundUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCrowdChantCue", &UELSoundUtilityFunction::execGetCrowdChantCue },
			{ "GetMusicRowNames", &UELSoundUtilityFunction::execGetMusicRowNames },
			{ "GetMusicTabaleCueList", &UELSoundUtilityFunction::execGetMusicTabaleCueList },
			{ "PlaySound2D_ForCueEvent", &UELSoundUtilityFunction::execPlaySound2D_ForCueEvent },
			{ "PlaySound2D_ForID", &UELSoundUtilityFunction::execPlaySound2D_ForID },
			{ "PlaySound2D_ForString", &UELSoundUtilityFunction::execPlaySound2D_ForString },
			{ "PlaySoundAtLocation_ForCueEvent", &UELSoundUtilityFunction::execPlaySoundAtLocation_ForCueEvent },
			{ "PlaySoundAtLocation_ForID", &UELSoundUtilityFunction::execPlaySoundAtLocation_ForID },
			{ "PlaySoundAtLocation_ForString", &UELSoundUtilityFunction::execPlaySoundAtLocation_ForString },
			{ "PlaySoundAttached_ForCueEvent", &UELSoundUtilityFunction::execPlaySoundAttached_ForCueEvent },
			{ "PlaySoundAttached_ForID", &UELSoundUtilityFunction::execPlaySoundAttached_ForID },
			{ "PlaySoundAttached_ForString", &UELSoundUtilityFunction::execPlaySoundAttached_ForString },
			{ "PlayVoice_ForCueEvent", &UELSoundUtilityFunction::execPlayVoice_ForCueEvent },
			{ "PlayVoice_ForID", &UELSoundUtilityFunction::execPlayVoice_ForID },
			{ "PlayVoice_ForString", &UELSoundUtilityFunction::execPlayVoice_ForString },
			{ "SetDebugDisableSound", &UELSoundUtilityFunction::execSetDebugDisableSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics
	{
		struct ELSoundUtilityFunction_eventGetCrowdChantCue_Parms
		{
			FName RowName;
			UDataTable* _pDataTable;
			ECrowdChantType_N _type;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pDataTable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventGetCrowdChantCue_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp__pDataTable = { "_pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventGetCrowdChantCue_Parms, _pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventGetCrowdChantCue_Parms, _type), Z_Construct_UEnum_ELITE_Game_ECrowdChantType_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventGetCrowdChantCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp__pDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp__type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp__type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "GetCrowdChantCue", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventGetCrowdChantCue_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics
	{
		struct ELSoundUtilityFunction_eventGetMusicRowNames_Parms
		{
			TArray<FName> OutRowNames;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutRowNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRowNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::NewProp_OutRowNames_Inner = { "OutRowNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::NewProp_OutRowNames = { "OutRowNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventGetMusicRowNames_Parms, OutRowNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::NewProp_OutRowNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::NewProp_OutRowNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "GetMusicRowNames", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventGetMusicRowNames_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics
	{
		struct ELSoundUtilityFunction_eventGetMusicTabaleCueList_Parms
		{
			FName RowName;
			FAtomCueMusic ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventGetMusicTabaleCueList_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventGetMusicTabaleCueList_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomCueMusic, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "GetMusicTabaleCueList", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventGetMusicTabaleCueList_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics
	{
		struct ELSoundUtilityFunction_eventPlaySound2D_ForCueEvent_Parms
		{
			UObject* _pWorldContextObject;
			USoundAtomCue* _pSoundAsset;
			bool _isPersistAcrossLevel;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pSoundAsset;
		static void NewProp__isPersistAcrossLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPersistAcrossLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForCueEvent_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp__pSoundAsset = { "_pSoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForCueEvent_Parms, _pSoundAsset), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp__isPersistAcrossLevel_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlaySound2D_ForCueEvent_Parms*)Obj)->_isPersistAcrossLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp__isPersistAcrossLevel = { "_isPersistAcrossLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlaySound2D_ForCueEvent_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp__isPersistAcrossLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForCueEvent_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp__pSoundAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp__isPersistAcrossLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlaySound2D_ForCueEvent", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlaySound2D_ForCueEvent_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics
	{
		struct ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms
		{
			UObject* _pWorldContextObject;
			UDataTable* _pDataTable;
			int32 _sSFXID;
			bool _isUseSoundAssetDataTable;
			bool _isPersistAcrossLevel;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pDataTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sSFXID;
		static void NewProp__isUseSoundAssetDataTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUseSoundAssetDataTable;
		static void NewProp__isPersistAcrossLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPersistAcrossLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__pDataTable = { "_pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms, _pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__sSFXID = { "_sSFXID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms, _sSFXID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__isUseSoundAssetDataTable_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms*)Obj)->_isUseSoundAssetDataTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__isUseSoundAssetDataTable = { "_isUseSoundAssetDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__isUseSoundAssetDataTable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__isPersistAcrossLevel_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms*)Obj)->_isPersistAcrossLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__isPersistAcrossLevel = { "_isPersistAcrossLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__isPersistAcrossLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__pDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__sSFXID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__isUseSoundAssetDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp__isPersistAcrossLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlaySound2D_ForID", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlaySound2D_ForID_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics
	{
		struct ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms
		{
			UObject* _pWorldContextObject;
			UDataTable* _pDataTable;
			FString _SFXID;
			bool _isUseSoundAssetDataTable;
			bool _isPersistAcrossLevel;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SFXID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__SFXID;
		static void NewProp__isUseSoundAssetDataTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUseSoundAssetDataTable;
		static void NewProp__isPersistAcrossLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPersistAcrossLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__pDataTable = { "_pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms, _pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__SFXID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__SFXID = { "_SFXID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms, _SFXID), METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__SFXID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__SFXID_MetaData)) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__isUseSoundAssetDataTable_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms*)Obj)->_isUseSoundAssetDataTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__isUseSoundAssetDataTable = { "_isUseSoundAssetDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__isUseSoundAssetDataTable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__isPersistAcrossLevel_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms*)Obj)->_isPersistAcrossLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__isPersistAcrossLevel = { "_isPersistAcrossLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__isPersistAcrossLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__pDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__SFXID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__isUseSoundAssetDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp__isPersistAcrossLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlaySound2D_ForString", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlaySound2D_ForString_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics
	{
		struct ELSoundUtilityFunction_eventPlaySoundAtLocation_ForCueEvent_Parms
		{
			UObject* _pWorldContextObject;
			USoundAtomCue* _pSoundAsset;
			FVector _location;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pSoundAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForCueEvent_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp__pSoundAsset = { "_pSoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForCueEvent_Parms, _pSoundAsset), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp__location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp__location = { "_location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForCueEvent_Parms, _location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp__location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp__location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForCueEvent_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp__pSoundAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp__location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlaySoundAtLocation_ForCueEvent", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForCueEvent_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics
	{
		struct ELSoundUtilityFunction_eventPlaySoundAtLocation_ForID_Parms
		{
			UObject* _pWorldContextObject;
			UDataTable* _pDataTable;
			int32 _sSFXID;
			FVector _location;
			bool _isUseSoundAssetDataTable;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pDataTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sSFXID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__location;
		static void NewProp__isUseSoundAssetDataTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUseSoundAssetDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForID_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__pDataTable = { "_pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForID_Parms, _pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__sSFXID = { "_sSFXID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForID_Parms, _sSFXID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__location = { "_location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForID_Parms, _location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__location_MetaData)) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__isUseSoundAssetDataTable_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlaySoundAtLocation_ForID_Parms*)Obj)->_isUseSoundAssetDataTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__isUseSoundAssetDataTable = { "_isUseSoundAssetDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForID_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__isUseSoundAssetDataTable_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForID_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__pDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__sSFXID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp__isUseSoundAssetDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlaySoundAtLocation_ForID", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForID_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics
	{
		struct ELSoundUtilityFunction_eventPlaySoundAtLocation_ForString_Parms
		{
			UObject* _pWorldContextObject;
			UDataTable* _pDataTable;
			FString _SFXID;
			FVector _location;
			bool _isUseSoundAssetDataTable;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SFXID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__SFXID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__location;
		static void NewProp__isUseSoundAssetDataTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUseSoundAssetDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForString_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__pDataTable = { "_pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForString_Parms, _pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__SFXID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__SFXID = { "_SFXID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForString_Parms, _SFXID), METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__SFXID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__SFXID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__location = { "_location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForString_Parms, _location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__location_MetaData)) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__isUseSoundAssetDataTable_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlaySoundAtLocation_ForString_Parms*)Obj)->_isUseSoundAssetDataTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__isUseSoundAssetDataTable = { "_isUseSoundAssetDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForString_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__isUseSoundAssetDataTable_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForString_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__pDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__SFXID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp__isUseSoundAssetDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlaySoundAtLocation_ForString", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlaySoundAtLocation_ForString_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics
	{
		struct ELSoundUtilityFunction_eventPlaySoundAttached_ForCueEvent_Parms
		{
			UObject* _pWorldContextObject;
			USoundAtomCue* _pSoundAsset;
			USceneComponent* _pParent;
			FName _attacheBoneName;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pSoundAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pParent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__attacheBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForCueEvent_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__pSoundAsset = { "_pSoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForCueEvent_Parms, _pSoundAsset), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__pParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__pParent = { "_pParent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForCueEvent_Parms, _pParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__pParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__pParent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__attacheBoneName = { "_attacheBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForCueEvent_Parms, _attacheBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForCueEvent_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__pSoundAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__pParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp__attacheBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlaySoundAttached_ForCueEvent", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlaySoundAttached_ForCueEvent_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics
	{
		struct ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms
		{
			UObject* _pWorldContextObject;
			UDataTable* _pDataTable;
			int32 _sSFXID;
			USceneComponent* _pParent;
			bool _isUseSoundAssetDataTable;
			FName _attacheBoneName;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pDataTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sSFXID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pParent;
		static void NewProp__isUseSoundAssetDataTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUseSoundAssetDataTable;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__attacheBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__pDataTable = { "_pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms, _pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__sSFXID = { "_sSFXID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms, _sSFXID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__pParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__pParent = { "_pParent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms, _pParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__pParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__pParent_MetaData)) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__isUseSoundAssetDataTable_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms*)Obj)->_isUseSoundAssetDataTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__isUseSoundAssetDataTable = { "_isUseSoundAssetDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__isUseSoundAssetDataTable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__attacheBoneName = { "_attacheBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms, _attacheBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__pDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__sSFXID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__pParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__isUseSoundAssetDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp__attacheBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlaySoundAttached_ForID", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlaySoundAttached_ForID_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics
	{
		struct ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms
		{
			UObject* _pWorldContextObject;
			UDataTable* _pDataTable;
			FString _SFXID;
			USceneComponent* _pParent;
			bool _isUseSoundAssetDataTable;
			FName _attacheBoneName;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SFXID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__SFXID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pParent;
		static void NewProp__isUseSoundAssetDataTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUseSoundAssetDataTable;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__attacheBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__pDataTable = { "_pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms, _pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__SFXID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__SFXID = { "_SFXID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms, _SFXID), METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__SFXID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__SFXID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__pParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__pParent = { "_pParent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms, _pParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__pParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__pParent_MetaData)) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__isUseSoundAssetDataTable_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms*)Obj)->_isUseSoundAssetDataTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__isUseSoundAssetDataTable = { "_isUseSoundAssetDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__isUseSoundAssetDataTable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__attacheBoneName = { "_attacheBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms, _attacheBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__pDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__SFXID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__pParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__isUseSoundAssetDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp__attacheBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlaySoundAttached_ForString", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlaySoundAttached_ForString_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics
	{
		struct ELSoundUtilityFunction_eventPlayVoice_ForCueEvent_Parms
		{
			UObject* _pWorldContextObject;
			USoundAtomCue* _pVoiceAsset;
			USkeletalMeshComponent* _pSpeakerMesh;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pVoiceAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pSpeakerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pSpeakerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForCueEvent_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp__pVoiceAsset = { "_pVoiceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForCueEvent_Parms, _pVoiceAsset), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp__pSpeakerMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp__pSpeakerMesh = { "_pSpeakerMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForCueEvent_Parms, _pSpeakerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp__pSpeakerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp__pSpeakerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForCueEvent_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp__pVoiceAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp__pSpeakerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlayVoice_ForCueEvent", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlayVoice_ForCueEvent_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics
	{
		struct ELSoundUtilityFunction_eventPlayVoice_ForID_Parms
		{
			UObject* _pWorldContextObject;
			UDataTable* _pDataTable;
			int32 _sVoiceID;
			bool _isUseSoundAssetDataTable;
			USkeletalMeshComponent* _pSpeakerMesh;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pDataTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sVoiceID;
		static void NewProp__isUseSoundAssetDataTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUseSoundAssetDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pSpeakerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pSpeakerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForID_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__pDataTable = { "_pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForID_Parms, _pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__sVoiceID = { "_sVoiceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForID_Parms, _sVoiceID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__isUseSoundAssetDataTable_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlayVoice_ForID_Parms*)Obj)->_isUseSoundAssetDataTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__isUseSoundAssetDataTable = { "_isUseSoundAssetDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlayVoice_ForID_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__isUseSoundAssetDataTable_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__pSpeakerMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__pSpeakerMesh = { "_pSpeakerMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForID_Parms, _pSpeakerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__pSpeakerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__pSpeakerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForID_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__pDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__sVoiceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__isUseSoundAssetDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp__pSpeakerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlayVoice_ForID", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlayVoice_ForID_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics
	{
		struct ELSoundUtilityFunction_eventPlayVoice_ForString_Parms
		{
			UObject* _pWorldContextObject;
			UDataTable* _pDataTable;
			FString _VoiceID;
			bool _isUseSoundAssetDataTable;
			USkeletalMeshComponent* _pSpeakerMesh;
			UAtomComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__VoiceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__VoiceID;
		static void NewProp__isUseSoundAssetDataTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUseSoundAssetDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pSpeakerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pSpeakerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForString_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__pDataTable = { "_pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForString_Parms, _pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__VoiceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__VoiceID = { "_VoiceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForString_Parms, _VoiceID), METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__VoiceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__VoiceID_MetaData)) };
	void Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__isUseSoundAssetDataTable_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventPlayVoice_ForString_Parms*)Obj)->_isUseSoundAssetDataTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__isUseSoundAssetDataTable = { "_isUseSoundAssetDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventPlayVoice_ForString_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__isUseSoundAssetDataTable_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__pSpeakerMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__pSpeakerMesh = { "_pSpeakerMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForString_Parms, _pSpeakerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__pSpeakerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__pSpeakerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundUtilityFunction_eventPlayVoice_ForString_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__pDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__VoiceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__isUseSoundAssetDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp__pSpeakerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "PlayVoice_ForString", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventPlayVoice_ForString_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics
	{
		struct ELSoundUtilityFunction_eventSetDebugDisableSound_Parms
		{
			bool IsDisable;
		};
		static void NewProp_IsDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDisable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::NewProp_IsDisable_SetBit(void* Obj)
	{
		((ELSoundUtilityFunction_eventSetDebugDisableSound_Parms*)Obj)->IsDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::NewProp_IsDisable = { "IsDisable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundUtilityFunction_eventSetDebugDisableSound_Parms), &Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::NewProp_IsDisable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::NewProp_IsDisable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundUtilityFunction, nullptr, "SetDebugDisableSound", nullptr, nullptr, sizeof(ELSoundUtilityFunction_eventSetDebugDisableSound_Parms), Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSoundUtilityFunction_NoRegister()
	{
		return UELSoundUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELSoundUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSoundUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSoundUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_GetCrowdChantCue, "GetCrowdChantCue" }, // 2553966264
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicRowNames, "GetMusicRowNames" }, // 241012969
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_GetMusicTabaleCueList, "GetMusicTabaleCueList" }, // 1684768375
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForCueEvent, "PlaySound2D_ForCueEvent" }, // 3886073405
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForID, "PlaySound2D_ForID" }, // 3200484827
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySound2D_ForString, "PlaySound2D_ForString" }, // 2525246941
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForCueEvent, "PlaySoundAtLocation_ForCueEvent" }, // 858514509
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForID, "PlaySoundAtLocation_ForID" }, // 4198461949
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAtLocation_ForString, "PlaySoundAtLocation_ForString" }, // 1813478720
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForCueEvent, "PlaySoundAttached_ForCueEvent" }, // 1496628943
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForID, "PlaySoundAttached_ForID" }, // 3752797214
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlaySoundAttached_ForString, "PlaySoundAttached_ForString" }, // 2611778773
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForCueEvent, "PlayVoice_ForCueEvent" }, // 658759954
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForID, "PlayVoice_ForID" }, // 3239594142
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_PlayVoice_ForString, "PlayVoice_ForString" }, // 1143413187
		{ &Z_Construct_UFunction_UELSoundUtilityFunction_SetDebugDisableSound, "SetDebugDisableSound" }, // 733153619
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSoundUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSoundUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSoundUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSoundUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSoundUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSoundUtilityFunction_Statics::ClassParams = {
		&UELSoundUtilityFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSoundUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSoundUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSoundUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSoundUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSoundUtilityFunction, 596741337);
	template<> ELITE_GAME_API UClass* StaticClass<UELSoundUtilityFunction>()
	{
		return UELSoundUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSoundUtilityFunction(Z_Construct_UClass_UELSoundUtilityFunction, &UELSoundUtilityFunction::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELSoundUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSoundUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
