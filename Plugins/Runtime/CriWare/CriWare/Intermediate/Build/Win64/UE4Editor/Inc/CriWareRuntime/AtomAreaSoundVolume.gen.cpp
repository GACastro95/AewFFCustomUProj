// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAreaSoundVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAreaSoundVolume() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAreaSoundVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAreaSoundVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execCreateSounds)
	{
		P_GET_STRUCT(FVector,Z_Param_listener_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAtomComponent*>*)Z_Param__Result=P_THIS->CreateSounds(Z_Param_listener_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execDestroySounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroySounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execGetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execSetPriority)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	void AAtomAreaSoundVolume::StaticRegisterNativesAAtomAreaSoundVolume()
	{
		UClass* Class = AAtomAreaSoundVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSounds", &AAtomAreaSoundVolume::execCreateSounds },
			{ "DestroySounds", &AAtomAreaSoundVolume::execDestroySounds },
			{ "GetEnabled", &AAtomAreaSoundVolume::execGetEnabled },
			{ "GetPriority", &AAtomAreaSoundVolume::execGetPriority },
			{ "OnRep_bEnabled", &AAtomAreaSoundVolume::execOnRep_bEnabled },
			{ "SetEnabled", &AAtomAreaSoundVolume::execSetEnabled },
			{ "SetPriority", &AAtomAreaSoundVolume::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics
	{
		struct AtomAreaSoundVolume_eventCreateSounds_Parms
		{
			FVector listener_location;
			TArray<UAtomComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_listener_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_listener_location = { "listener_location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAreaSoundVolume_eventCreateSounds_Parms, listener_location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAreaSoundVolume_eventCreateSounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_listener_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "CreateSounds", nullptr, nullptr, sizeof(AtomAreaSoundVolume_eventCreateSounds_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "DestroySounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics
	{
		struct AtomAreaSoundVolume_eventGetEnabled_Parms
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
	void Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomAreaSoundVolume_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAreaSoundVolume_eventGetEnabled_Parms), &Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "GetEnabled", nullptr, nullptr, sizeof(AtomAreaSoundVolume_eventGetEnabled_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics
	{
		struct AtomAreaSoundVolume_eventGetPriority_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAreaSoundVolume_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "GetPriority", nullptr, nullptr, sizeof(AtomAreaSoundVolume_eventGetPriority_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics
	{
		struct AtomAreaSoundVolume_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((AtomAreaSoundVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAreaSoundVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "SetEnabled", nullptr, nullptr, sizeof(AtomAreaSoundVolume_eventSetEnabled_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics
	{
		struct AtomAreaSoundVolume_eventSetPriority_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAreaSoundVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "SetPriority", nullptr, nullptr, sizeof(AtomAreaSoundVolume_eventSetPriority_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAtomAreaSoundVolume_NoRegister()
	{
		return AAtomAreaSoundVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAtomAreaSoundVolume_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundStopDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoundStopDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnableAtomCompoentPack_MetaData[];
#endif
		static void NewProp_bIsEnableAtomCompoentPack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnableAtomCompoentPack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAutoPlaySound_MetaData[];
#endif
		static void NewProp_bIsAutoPlaySound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoPlaySound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDeterminationFromVolumeBoundaryPlane_MetaData[];
#endif
		static void NewProp_bIsDeterminationFromVolumeBoundaryPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDeterminationFromVolumeBoundaryPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRepeatPlayWhenSoundStop_MetaData[];
#endif
		static void NewProp_bEnableRepeatPlayWhenSoundStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRepeatPlayWhenSoundStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AtomComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sounds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomAreaSoundVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtomAreaSoundVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds, "CreateSounds" }, // 1849610682
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds, "DestroySounds" }, // 3529148113
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled, "GetEnabled" }, // 1425341317
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority, "GetPriority" }, // 1912552701
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 1619526034
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled, "SetEnabled" }, // 4175854238
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority, "SetPriority" }, // 2742589734
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AtomAreaSoundVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAreaSoundVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0040040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAreaSoundVolume, CollisionProfile), METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance = { "SoundStopDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAreaSoundVolume, SoundStopDistance), METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bIsEnableAtomCompoentPack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack = { "bIsEnableAtomCompoentPack", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bIsAutoPlaySound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound = { "bIsAutoPlaySound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bIsDeterminationFromVolumeBoundaryPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane = { "bIsDeterminationFromVolumeBoundaryPlane", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bEnableRepeatPlayWhenSoundStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop = { "bEnableRepeatPlayWhenSoundStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner = { "AtomComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents = { "AtomComponents", nullptr, (EPropertyFlags)0x001000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAreaSoundVolume, AtomComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_Inner = { "Sounds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAreaSoundVolume, Sounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomAreaSoundVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomAreaSoundVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomAreaSoundVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::ClassParams = {
		&AAtomAreaSoundVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtomAreaSoundVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomAreaSoundVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtomAreaSoundVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtomAreaSoundVolume, 2274163502);
	template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomAreaSoundVolume>()
	{
		return AAtomAreaSoundVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtomAreaSoundVolume(Z_Construct_UClass_AAtomAreaSoundVolume, &AAtomAreaSoundVolume::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("AAtomAreaSoundVolume"), false, nullptr, nullptr, nullptr);

	void AAtomAreaSoundVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAtomAreaSoundVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomAreaSoundVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
