// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/SoundAtomCueSheet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCueSheet() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USoundAtomCueSheet::execApplyDspBusSnapshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SnapshotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Milliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execAttachDspBusSetting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SettingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::AttachDspBusSetting(Z_Param_SettingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromId(Z_Param_ID,Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromIndex(Z_Param_Index,Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromName(Z_Param_Name,Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execDetachDspBusSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::DetachDspBusSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueById(Z_Param_CueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueByIndex(Z_Param_CueIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueByName(Z_Param_CueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetNumCues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumCues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execLoadAcb)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AcbName);
		P_GET_UBOOL(Z_Param_bAddToLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAcb(Z_Param_AcbName,Z_Param_bAddToLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execLoadAtomCueSheet)
	{
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_UBOOL(Z_Param_bAddToLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAtomCueSheet(Z_Param_CueSheet,Z_Param_bAddToLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execReleaseAcb)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AcbName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::ReleaseAcb(Z_Param_AcbName);
		P_NATIVE_END;
	}
	void USoundAtomCueSheet::StaticRegisterNativesUSoundAtomCueSheet()
	{
		UClass* Class = USoundAtomCueSheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDspBusSnapshot", &USoundAtomCueSheet::execApplyDspBusSnapshot },
			{ "AttachDspBusSetting", &USoundAtomCueSheet::execAttachDspBusSetting },
			{ "BP_GetCueInfoFromId", &USoundAtomCueSheet::execBP_GetCueInfoFromId },
			{ "BP_GetCueInfoFromIndex", &USoundAtomCueSheet::execBP_GetCueInfoFromIndex },
			{ "BP_GetCueInfoFromName", &USoundAtomCueSheet::execBP_GetCueInfoFromName },
			{ "DetachDspBusSetting", &USoundAtomCueSheet::execDetachDspBusSetting },
			{ "GetAtomCueById", &USoundAtomCueSheet::execGetAtomCueById },
			{ "GetAtomCueByIndex", &USoundAtomCueSheet::execGetAtomCueByIndex },
			{ "GetAtomCueByName", &USoundAtomCueSheet::execGetAtomCueByName },
			{ "GetNumCues", &USoundAtomCueSheet::execGetNumCues },
			{ "IsLoaded", &USoundAtomCueSheet::execIsLoaded },
			{ "LoadAcb", &USoundAtomCueSheet::execLoadAcb },
			{ "LoadAtomCueSheet", &USoundAtomCueSheet::execLoadAtomCueSheet },
			{ "ReleaseAcb", &USoundAtomCueSheet::execReleaseAcb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics
	{
		struct SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms
		{
			FString SnapshotName;
			int32 Milliseconds;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnapshotName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, SnapshotName), METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, Milliseconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "ApplyDspBusSnapshot", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms), Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics
	{
		struct SoundAtomCueSheet_eventAttachDspBusSetting_Parms
		{
			FString SettingName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventAttachDspBusSetting_Parms, SettingName), METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "AttachDspBusSetting", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventAttachDspBusSetting_Parms), Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics
	{
		struct SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms
		{
			int32 ID;
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_CueInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromId", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics
	{
		struct SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms
		{
			int32 Index;
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_CueInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromIndex", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics
	{
		struct SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms
		{
			FString Name;
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_CueInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromName", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "DetachDspBusSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics
	{
		struct SoundAtomCueSheet_eventGetAtomCueById_Parms
		{
			int32 CueId;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_CueId = { "CueId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueById_Parms, CueId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueById_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_CueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueById", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventGetAtomCueById_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics
	{
		struct SoundAtomCueSheet_eventGetAtomCueByIndex_Parms
		{
			int32 CueIndex;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_CueIndex = { "CueIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms, CueIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_CueIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueByIndex", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics
	{
		struct SoundAtomCueSheet_eventGetAtomCueByName_Parms
		{
			FString CueName;
			USoundAtomCue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByName_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByName_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueByName", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventGetAtomCueByName_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics
	{
		struct SoundAtomCueSheet_eventGetNumCues_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetNumCues_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetNumCues", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventGetNumCues_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics
	{
		struct SoundAtomCueSheet_eventIsLoaded_Parms
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
	void Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventIsLoaded_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "IsLoaded", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventIsLoaded_Parms), Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics
	{
		struct SoundAtomCueSheet_eventLoadAcb_Parms
		{
			FName AcbName;
			bool bAddToLevel;
			USoundAtomCueSheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AcbName;
		static void NewProp_bAddToLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_AcbName = { "AcbName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, AcbName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventLoadAcb_Parms*)Obj)->bAddToLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel = { "bAddToLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventLoadAcb_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_AcbName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "LoadAcb", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventLoadAcb_Parms), Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics
	{
		struct SoundAtomCueSheet_eventLoadAtomCueSheet_Parms
		{
			USoundAtomCueSheet* CueSheet;
			bool bAddToLevel;
			USoundAtomCueSheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
		static void NewProp_bAddToLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventLoadAtomCueSheet_Parms*)Obj)->bAddToLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel = { "bAddToLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_CueSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "LoadAtomCueSheet", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms), Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics
	{
		struct SoundAtomCueSheet_eventReleaseAcb_Parms
		{
			FName AcbName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AcbName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::NewProp_AcbName = { "AcbName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventReleaseAcb_Parms, AcbName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::NewProp_AcbName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "ReleaseAcb", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventReleaseAcb_Parms), Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister()
	{
		return USoundAtomCueSheet::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomCueSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[];
#endif
		static void NewProp_Contains_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Contains;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcbFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AcbFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueSheetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAwbDirectory_MetaData[];
#endif
		static void NewProp_bOverrideAwbDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAwbDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwbDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AwbDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CueInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomCueSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundAtomCueSheet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot, "ApplyDspBusSnapshot" }, // 1230997832
		{ &Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting, "AttachDspBusSetting" }, // 274763887
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId, "BP_GetCueInfoFromId" }, // 3785781110
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex, "BP_GetCueInfoFromIndex" }, // 1952828964
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName, "BP_GetCueInfoFromName" }, // 3801357862
		{ &Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting, "DetachDspBusSetting" }, // 2961867015
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById, "GetAtomCueById" }, // 3585368022
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex, "GetAtomCueByIndex" }, // 1894620558
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName, "GetAtomCueByName" }, // 200750145
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues, "GetNumCues" }, // 1702656405
		{ &Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded, "IsLoaded" }, // 111230229
		{ &Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb, "LoadAcb" }, // 3778804956
		{ &Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet, "LoadAtomCueSheet" }, // 1597544177
		{ &Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb, "ReleaseAcb" }, // 1092291496
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundAtomCueSheet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_SetBit(void* Obj)
	{
		((USoundAtomCueSheet*)Obj)->Contains = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCueSheet), &Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath = { "AcbFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, AcbFilePath), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName = { "CueSheetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, CueSheetName), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, NumSlots), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_SetBit(void* Obj)
	{
		((USoundAtomCueSheet*)Obj)->bOverrideAwbDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory = { "bOverrideAwbDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCueSheet), &Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory = { "AwbDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, AwbDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, AdditionalData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_Inner = { "CueInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos = { "CueInfos", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, CueInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomCueSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCueSheet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCueSheet_Statics::ClassParams = {
		&USoundAtomCueSheet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomCueSheet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAtomCueSheet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomCueSheet, 2593510177);
	template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomCueSheet>()
	{
		return USoundAtomCueSheet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCueSheet(Z_Construct_UClass_USoundAtomCueSheet, &USoundAtomCueSheet::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomCueSheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCueSheet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
