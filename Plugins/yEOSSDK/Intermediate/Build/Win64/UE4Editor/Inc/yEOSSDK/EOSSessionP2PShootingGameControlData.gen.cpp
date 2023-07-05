// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PShootingGameControlData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PShootingGameControlData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FEOSSessionP2PShootingGameControlData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSSessionP2PShootingGameControlData"), sizeof(FEOSSessionP2PShootingGameControlData), Get_Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSSessionP2PShootingGameControlData>()
{
	return FEOSSessionP2PShootingGameControlData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSSessionP2PShootingGameControlData(FEOSSessionP2PShootingGameControlData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSSessionP2PShootingGameControlData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PShootingGameControlData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PShootingGameControlData()
	{
		UScriptStruct::DeferCppStructOps<FEOSSessionP2PShootingGameControlData>(FName(TEXT("EOSSessionP2PShootingGameControlData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PShootingGameControlData;
	struct Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControlBits;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSSessionP2PShootingGameControlData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PShootingGameControlData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PShootingGameControlData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_GameFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PShootingGameControlData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_GameFrame = { "GameFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PShootingGameControlData, GameFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_GameFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_GameFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_ControlBits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PShootingGameControlData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_ControlBits = { "ControlBits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PShootingGameControlData, ControlBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_ControlBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_ControlBits_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Values_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PShootingGameControlData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PShootingGameControlData, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Values_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PShootingGameControlData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PShootingGameControlData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_GameFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_ControlBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSSessionP2PShootingGameControlData",
		sizeof(FEOSSessionP2PShootingGameControlData),
		alignof(FEOSSessionP2PShootingGameControlData),
		Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSSessionP2PShootingGameControlData"), sizeof(FEOSSessionP2PShootingGameControlData), Get_Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData_Hash() { return 1917086374U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
