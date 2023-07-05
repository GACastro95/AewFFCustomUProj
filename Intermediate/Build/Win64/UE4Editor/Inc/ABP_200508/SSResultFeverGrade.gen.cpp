// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSResultFeverGrade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSResultFeverGrade() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSResultFeverGrade();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSResultGradeABCParam();
// End Cross Module References

static_assert(std::is_polymorphic<FSSResultFeverGrade>() == std::is_polymorphic<FSSResultGradeABCParam>(), "USTRUCT FSSResultFeverGrade cannot be polymorphic unless super FSSResultGradeABCParam is polymorphic");

class UScriptStruct* FSSResultFeverGrade::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSResultFeverGrade_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSResultFeverGrade, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSResultFeverGrade"), sizeof(FSSResultFeverGrade), Get_Z_Construct_UScriptStruct_FSSResultFeverGrade_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSResultFeverGrade>()
{
	return FSSResultFeverGrade::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSResultFeverGrade(FSSResultFeverGrade::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSResultFeverGrade"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultFeverGrade
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultFeverGrade()
	{
		UScriptStruct::DeferCppStructOps<FSSResultFeverGrade>(FName(TEXT("SSResultFeverGrade")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSResultFeverGrade;
	struct Z_Construct_UScriptStruct_FSSResultFeverGrade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSResultFeverGrade_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSResultFeverGrade.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSResultFeverGrade_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSResultFeverGrade>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSResultFeverGrade_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FSSResultGradeABCParam,
		&NewStructOps,
		"SSResultFeverGrade",
		sizeof(FSSResultFeverGrade),
		alignof(FSSResultFeverGrade),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSResultFeverGrade_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultFeverGrade_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSResultFeverGrade()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSResultFeverGrade_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSResultFeverGrade"), sizeof(FSSResultFeverGrade), Get_Z_Construct_UScriptStruct_FSSResultFeverGrade_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSResultFeverGrade_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSResultFeverGrade_Hash() { return 2719015883U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
