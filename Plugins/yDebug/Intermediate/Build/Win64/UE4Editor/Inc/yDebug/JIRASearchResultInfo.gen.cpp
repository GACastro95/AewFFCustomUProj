// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/JIRASearchResultInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJIRASearchResultInfo() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRASearchResultInfo();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
class UScriptStruct* FJIRASearchResultInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FJIRASearchResultInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJIRASearchResultInfo, Z_Construct_UPackage__Script_yDebug(), TEXT("JIRASearchResultInfo"), sizeof(FJIRASearchResultInfo), Get_Z_Construct_UScriptStruct_FJIRASearchResultInfo_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FJIRASearchResultInfo>()
{
	return FJIRASearchResultInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJIRASearchResultInfo(FJIRASearchResultInfo::StaticStruct, TEXT("/Script/yDebug"), TEXT("JIRASearchResultInfo"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFJIRASearchResultInfo
{
	FScriptStruct_yDebug_StaticRegisterNativesFJIRASearchResultInfo()
	{
		UScriptStruct::DeferCppStructOps<FJIRASearchResultInfo>(FName(TEXT("JIRASearchResultInfo")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFJIRASearchResultInfo;
	struct Z_Construct_UScriptStruct_FJIRASearchResultInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchResultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JIRASearchResultInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJIRASearchResultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJIRASearchResultInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJIRASearchResultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"JIRASearchResultInfo",
		sizeof(FJIRASearchResultInfo),
		alignof(FJIRASearchResultInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchResultInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchResultInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJIRASearchResultInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJIRASearchResultInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JIRASearchResultInfo"), sizeof(FJIRASearchResultInfo), Get_Z_Construct_UScriptStruct_FJIRASearchResultInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJIRASearchResultInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJIRASearchResultInfo_Hash() { return 3819108401U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
