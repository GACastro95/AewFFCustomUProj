// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DebugCareerParam_Story.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCareerParam_Story() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_Story();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FDebugCareerParam_Story::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Story_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCareerParam_Story, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DebugCareerParam_Story"), sizeof(FDebugCareerParam_Story), Get_Z_Construct_UScriptStruct_FDebugCareerParam_Story_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDebugCareerParam_Story>()
{
	return FDebugCareerParam_Story::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugCareerParam_Story(FDebugCareerParam_Story::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DebugCareerParam_Story"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Story
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Story()
	{
		UScriptStruct::DeferCppStructOps<FDebugCareerParam_Story>(FName(TEXT("DebugCareerParam_Story")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Story;
	struct Z_Construct_UScriptStruct_FDebugCareerParam_Story_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_Story_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_Story.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCareerParam_Story_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCareerParam_Story>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCareerParam_Story_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DebugCareerParam_Story",
		sizeof(FDebugCareerParam_Story),
		alignof(FDebugCareerParam_Story),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_Story_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Story_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_Story()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Story_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugCareerParam_Story"), sizeof(FDebugCareerParam_Story), Get_Z_Construct_UScriptStruct_FDebugCareerParam_Story_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugCareerParam_Story_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Story_Hash() { return 2978273907U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
