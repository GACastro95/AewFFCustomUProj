// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DebugCareerParam_ItemEffectTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCareerParam_ItemEffectTest() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FDebugCareerParam_ItemEffectTest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DebugCareerParam_ItemEffectTest"), sizeof(FDebugCareerParam_ItemEffectTest), Get_Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDebugCareerParam_ItemEffectTest>()
{
	return FDebugCareerParam_ItemEffectTest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugCareerParam_ItemEffectTest(FDebugCareerParam_ItemEffectTest::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DebugCareerParam_ItemEffectTest"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_ItemEffectTest
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_ItemEffectTest()
	{
		UScriptStruct::DeferCppStructOps<FDebugCareerParam_ItemEffectTest>(FName(TEXT("DebugCareerParam_ItemEffectTest")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_ItemEffectTest;
	struct Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_ItemEffectTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCareerParam_ItemEffectTest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DebugCareerParam_ItemEffectTest",
		sizeof(FDebugCareerParam_ItemEffectTest),
		alignof(FDebugCareerParam_ItemEffectTest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugCareerParam_ItemEffectTest"), sizeof(FDebugCareerParam_ItemEffectTest), Get_Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_ItemEffectTest_Hash() { return 2716191347U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
