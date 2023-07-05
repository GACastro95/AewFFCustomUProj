// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerCameraDOF.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerCameraDOF() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerCameraDOF();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerCameraDOF::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerCameraDOF_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerCameraDOF, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerCameraDOF"), sizeof(FCareerCameraDOF), Get_Z_Construct_UScriptStruct_FCareerCameraDOF_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerCameraDOF>()
{
	return FCareerCameraDOF::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerCameraDOF(FCareerCameraDOF::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerCameraDOF"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCameraDOF
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCameraDOF()
	{
		UScriptStruct::DeferCppStructOps<FCareerCameraDOF>(FName(TEXT("CareerCameraDOF")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerCameraDOF;
	struct Z_Construct_UScriptStruct_FCareerCameraDOF_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCameraDOF_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerCameraDOF.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerCameraDOF_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerCameraDOF>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerCameraDOF_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerCameraDOF",
		sizeof(FCareerCameraDOF),
		alignof(FCareerCameraDOF),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCameraDOF_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCameraDOF_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerCameraDOF()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerCameraDOF_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerCameraDOF"), sizeof(FCareerCameraDOF), Get_Z_Construct_UScriptStruct_FCareerCameraDOF_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerCameraDOF_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerCameraDOF_Hash() { return 3906176569U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
