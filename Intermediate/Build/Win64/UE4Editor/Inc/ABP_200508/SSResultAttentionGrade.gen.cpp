// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSResultAttentionGrade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSResultAttentionGrade() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSResultAttentionGrade();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSResultGradeABCParam();
// End Cross Module References

static_assert(std::is_polymorphic<FSSResultAttentionGrade>() == std::is_polymorphic<FSSResultGradeABCParam>(), "USTRUCT FSSResultAttentionGrade cannot be polymorphic unless super FSSResultGradeABCParam is polymorphic");

class UScriptStruct* FSSResultAttentionGrade::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSResultAttentionGrade_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSResultAttentionGrade, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSResultAttentionGrade"), sizeof(FSSResultAttentionGrade), Get_Z_Construct_UScriptStruct_FSSResultAttentionGrade_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSResultAttentionGrade>()
{
	return FSSResultAttentionGrade::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSResultAttentionGrade(FSSResultAttentionGrade::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSResultAttentionGrade"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultAttentionGrade
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultAttentionGrade()
	{
		UScriptStruct::DeferCppStructOps<FSSResultAttentionGrade>(FName(TEXT("SSResultAttentionGrade")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSResultAttentionGrade;
	struct Z_Construct_UScriptStruct_FSSResultAttentionGrade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSResultAttentionGrade_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSResultAttentionGrade.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSResultAttentionGrade_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSResultAttentionGrade>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSResultAttentionGrade_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FSSResultGradeABCParam,
		&NewStructOps,
		"SSResultAttentionGrade",
		sizeof(FSSResultAttentionGrade),
		alignof(FSSResultAttentionGrade),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSResultAttentionGrade_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultAttentionGrade_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSResultAttentionGrade()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSResultAttentionGrade_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSResultAttentionGrade"), sizeof(FSSResultAttentionGrade), Get_Z_Construct_UScriptStruct_FSSResultAttentionGrade_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSResultAttentionGrade_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSResultAttentionGrade_Hash() { return 1890944080U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
