// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/SSServerEndpoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSServerEndpoint() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSServerEndpoint();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FSSServerEndpoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FSSServerEndpoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSServerEndpoint, Z_Construct_UPackage__Script_yGS2Client(), TEXT("SSServerEndpoint"), sizeof(FSSServerEndpoint), Get_Z_Construct_UScriptStruct_FSSServerEndpoint_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FSSServerEndpoint>()
{
	return FSSServerEndpoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSServerEndpoint(FSSServerEndpoint::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("SSServerEndpoint"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFSSServerEndpoint
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFSSServerEndpoint()
	{
		UScriptStruct::DeferCppStructOps<FSSServerEndpoint>(FName(TEXT("SSServerEndpoint")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFSSServerEndpoint;
	struct Z_Construct_UScriptStruct_FSSServerEndpoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSServerEndpoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSServerEndpoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSServerEndpoint" },
		{ "ModuleRelativePath", "Public/SSServerEndpoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSServerEndpoint, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_IP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSServerEndpoint" },
		{ "ModuleRelativePath", "Public/SSServerEndpoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSServerEndpoint, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_IP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::NewProp_IP,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"SSServerEndpoint",
		sizeof(FSSServerEndpoint),
		alignof(FSSServerEndpoint),
		Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSServerEndpoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSServerEndpoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSServerEndpoint"), sizeof(FSSServerEndpoint), Get_Z_Construct_UScriptStruct_FSSServerEndpoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSServerEndpoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSServerEndpoint_Hash() { return 2047460837U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
