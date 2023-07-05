// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DebugCareerParam_Tutorial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCareerParam_Tutorial() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FDebugCareerParam_Tutorial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DebugCareerParam_Tutorial"), sizeof(FDebugCareerParam_Tutorial), Get_Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDebugCareerParam_Tutorial>()
{
	return FDebugCareerParam_Tutorial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugCareerParam_Tutorial(FDebugCareerParam_Tutorial::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DebugCareerParam_Tutorial"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Tutorial
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Tutorial()
	{
		UScriptStruct::DeferCppStructOps<FDebugCareerParam_Tutorial>(FName(TEXT("DebugCareerParam_Tutorial")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Tutorial;
	struct Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RequestNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_RequestNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_Tutorial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCareerParam_Tutorial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::NewProp_m_RequestNumber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_Tutorial" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_Tutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::NewProp_m_RequestNumber = { "m_RequestNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_Tutorial, m_RequestNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::NewProp_m_RequestNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::NewProp_m_RequestNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::NewProp_m_RequestNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DebugCareerParam_Tutorial",
		sizeof(FDebugCareerParam_Tutorial),
		alignof(FDebugCareerParam_Tutorial),
		Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugCareerParam_Tutorial"), sizeof(FDebugCareerParam_Tutorial), Get_Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Tutorial_Hash() { return 459971210U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
