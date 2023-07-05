// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDebugStringStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDebugStringStatus() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugStringStatus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSDebugStringStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDebugStringStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDebugStringStatus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDebugStringStatus"), sizeof(FSSDebugStringStatus), Get_Z_Construct_UScriptStruct_FSSDebugStringStatus_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDebugStringStatus>()
{
	return FSSDebugStringStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDebugStringStatus(FSSDebugStringStatus::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDebugStringStatus"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugStringStatus
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugStringStatus()
	{
		UScriptStruct::DeferCppStructOps<FSSDebugStringStatus>(FName(TEXT("SSDebugStringStatus")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugStringStatus;
	struct Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_STRING_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_STRING;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDebugStringStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDebugStringStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_STRING_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringStatus" },
		{ "ModuleRelativePath", "Public/SSDebugStringStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_STRING = { "STRING", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugStringStatus, STRING), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_STRING_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_STRING_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringStatus" },
		{ "ModuleRelativePath", "Public/SSDebugStringStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugStringStatus, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_STRING,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSDebugStringStatus",
		sizeof(FSSDebugStringStatus),
		alignof(FSSDebugStringStatus),
		Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDebugStringStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDebugStringStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDebugStringStatus"), sizeof(FSSDebugStringStatus), Get_Z_Construct_UScriptStruct_FSSDebugStringStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDebugStringStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDebugStringStatus_Hash() { return 3674709378U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
