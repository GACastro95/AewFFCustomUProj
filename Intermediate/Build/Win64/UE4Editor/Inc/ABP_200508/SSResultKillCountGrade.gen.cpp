// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSResultKillCountGrade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSResultKillCountGrade() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSResultKillCountGrade();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSResultGradeABCParam();
// End Cross Module References

static_assert(std::is_polymorphic<FSSResultKillCountGrade>() == std::is_polymorphic<FSSResultGradeABCParam>(), "USTRUCT FSSResultKillCountGrade cannot be polymorphic unless super FSSResultGradeABCParam is polymorphic");

class UScriptStruct* FSSResultKillCountGrade::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSResultKillCountGrade_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSResultKillCountGrade, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSResultKillCountGrade"), sizeof(FSSResultKillCountGrade), Get_Z_Construct_UScriptStruct_FSSResultKillCountGrade_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSResultKillCountGrade>()
{
	return FSSResultKillCountGrade::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSResultKillCountGrade(FSSResultKillCountGrade::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSResultKillCountGrade"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultKillCountGrade
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultKillCountGrade()
	{
		UScriptStruct::DeferCppStructOps<FSSResultKillCountGrade>(FName(TEXT("SSResultKillCountGrade")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSResultKillCountGrade;
	struct Z_Construct_UScriptStruct_FSSResultKillCountGrade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSResultKillCountGrade_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSResultKillCountGrade.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSResultKillCountGrade_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSResultKillCountGrade>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSResultKillCountGrade_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FSSResultGradeABCParam,
		&NewStructOps,
		"SSResultKillCountGrade",
		sizeof(FSSResultKillCountGrade),
		alignof(FSSResultKillCountGrade),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSResultKillCountGrade_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultKillCountGrade_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSResultKillCountGrade()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSResultKillCountGrade_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSResultKillCountGrade"), sizeof(FSSResultKillCountGrade), Get_Z_Construct_UScriptStruct_FSSResultKillCountGrade_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSResultKillCountGrade_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSResultKillCountGrade_Hash() { return 3890210389U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
