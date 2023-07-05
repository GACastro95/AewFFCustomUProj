// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAudioVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioVolume() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomEntranceVolume_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAtomAudioVolume::execEnableAllAudioVolume)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		AAtomAudioVolume::EnableAllAudioVolume(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execGetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execSetPriority)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execSetReverbSettings)
	{
		P_GET_STRUCT_REF(FSnapshotSwitchSettings,Z_Param_Out_NewReverbSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbSettings(Z_Param_Out_NewReverbSettings);
		P_NATIVE_END;
	}
	void AAtomAudioVolume::StaticRegisterNativesAAtomAudioVolume()
	{
		UClass* Class = AAtomAudioVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableAllAudioVolume", &AAtomAudioVolume::execEnableAllAudioVolume },
			{ "GetEnabled", &AAtomAudioVolume::execGetEnabled },
			{ "GetPriority", &AAtomAudioVolume::execGetPriority },
			{ "OnRep_bEnabled", &AAtomAudioVolume::execOnRep_bEnabled },
			{ "SetEnabled", &AAtomAudioVolume::execSetEnabled },
			{ "SetPriority", &AAtomAudioVolume::execSetPriority },
			{ "SetReverbSettings", &AAtomAudioVolume::execSetReverbSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics
	{
		struct AtomAudioVolume_eventEnableAllAudioVolume_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AtomAudioVolume_eventEnableAllAudioVolume_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAudioVolume_eventEnableAllAudioVolume_Parms), &Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "EnableAllAudioVolume", nullptr, nullptr, sizeof(AtomAudioVolume_eventEnableAllAudioVolume_Parms), Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics
	{
		struct AtomAudioVolume_eventGetEnabled_Parms
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
	void Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomAudioVolume_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAudioVolume_eventGetEnabled_Parms), &Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "GetEnabled", nullptr, nullptr, sizeof(AtomAudioVolume_eventGetEnabled_Parms), Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_GetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics
	{
		struct AtomAudioVolume_eventGetPriority_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAudioVolume_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "GetPriority", nullptr, nullptr, sizeof(AtomAudioVolume_eventGetPriority_Parms), Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics
	{
		struct AtomAudioVolume_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((AtomAudioVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAudioVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "SetEnabled", nullptr, nullptr, sizeof(AtomAudioVolume_eventSetEnabled_Parms), Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics
	{
		struct AtomAudioVolume_eventSetPriority_Parms
		{
			float NewPriority;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAudioVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "SetPriority", nullptr, nullptr, sizeof(AtomAudioVolume_eventSetPriority_Parms), Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics
	{
		struct AtomAudioVolume_eventSetReverbSettings_Parms
		{
			FSnapshotSwitchSettings NewReverbSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewReverbSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewReverbSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings = { "NewReverbSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAudioVolume_eventSetReverbSettings_Parms, NewReverbSettings), Z_Construct_UScriptStruct_FSnapshotSwitchSettings, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "SetReverbSettings", nullptr, nullptr, sizeof(AtomAudioVolume_eventSetReverbSettings_Parms), Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister()
	{
		return AAtomAudioVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAtomAudioVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSettingEntranceVolume_MetaData[];
#endif
		static void NewProp_bAutoSettingEntranceVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSettingEntranceVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData[];
#endif
		static void NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioVolumeTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioVolumeTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioVolumeTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAtomAudioVolume_MetaData[];
#endif
		static void NewProp_bOverrideAtomAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAtomAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomAudioVolumeSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeSettingsOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomAudioVolumeSettingsOverrides;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EntranceVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomAudioVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtomAudioVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume, "EnableAllAudioVolume" }, // 3211027179
		{ &Z_Construct_UFunction_AAtomAudioVolume_GetEnabled, "GetEnabled" }, // 1242985417
		{ &Z_Construct_UFunction_AAtomAudioVolume_GetPriority, "GetPriority" }, // 3172539181
		{ &Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 1565955393
		{ &Z_Construct_UFunction_AAtomAudioVolume_SetEnabled, "SetEnabled" }, // 504890478
		{ &Z_Construct_UFunction_AAtomAudioVolume_SetPriority, "SetPriority" }, // 867227405
		{ &Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings, "SetReverbSettings" }, // 1690990237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AtomAudioVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAtomAudioVolume*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, CollisionProfile), METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_SetBit(void* Obj)
	{
		((AAtomAudioVolume*)Obj)->bAutoSettingEntranceVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume = { "bAutoSettingEntranceVolume", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_SetBit(void* Obj)
	{
		((AAtomAudioVolume*)Obj)->bAutoSettingNeighbourAudioVolumeToEntranceVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume = { "bAutoSettingNeighbourAudioVolumeToEntranceVolume", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_Inner = { "AudioVolumeTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags = { "AudioVolumeTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, AudioVolumeTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_SetBit(void* Obj)
	{
		((AAtomAudioVolume*)Obj)->bOverrideAtomAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume = { "bOverrideAtomAudioVolume", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings = { "AtomAudioVolumeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, AtomAudioVolumeSettings), Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides = { "AtomAudioVolumeSettingsOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, AtomAudioVolumeSettingsOverrides), Z_Construct_UScriptStruct_FAtomAudioVolumeParameters, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_Inner = { "EntranceVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAtomEntranceVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolume" },
		{ "ModuleRelativePath", "Public/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes = { "EntranceVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, EntranceVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomAudioVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomAudioVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtomAudioVolume_Statics::ClassParams = {
		&AAtomAudioVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomAudioVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtomAudioVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtomAudioVolume, 1008813712);
	template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomAudioVolume>()
	{
		return AAtomAudioVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtomAudioVolume(Z_Construct_UClass_AAtomAudioVolume, &AAtomAudioVolume::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("AAtomAudioVolume"), false, nullptr, nullptr, nullptr);

	void AAtomAudioVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAtomAudioVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomAudioVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
