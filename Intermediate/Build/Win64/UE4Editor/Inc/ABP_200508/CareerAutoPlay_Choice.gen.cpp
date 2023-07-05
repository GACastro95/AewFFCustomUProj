// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerAutoPlay_Choice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerAutoPlay_Choice() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_Choice();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerAutoPlay_Choice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerAutoPlay_Choice, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerAutoPlay_Choice"), sizeof(FCareerAutoPlay_Choice), Get_Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerAutoPlay_Choice>()
{
	return FCareerAutoPlay_Choice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerAutoPlay_Choice(FCareerAutoPlay_Choice::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerAutoPlay_Choice"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_Choice
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_Choice()
	{
		UScriptStruct::DeferCppStructOps<FCareerAutoPlay_Choice>(FName(TEXT("CareerAutoPlay_Choice")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_Choice;
	struct Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_No_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_Choice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerAutoPlay_Choice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_Choice" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_Choice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_Choice, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_No_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_Choice" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_Choice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_Choice, No), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_No_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_No_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::NewProp_No,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerAutoPlay_Choice",
		sizeof(FCareerAutoPlay_Choice),
		alignof(FCareerAutoPlay_Choice),
		Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_Choice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerAutoPlay_Choice"), sizeof(FCareerAutoPlay_Choice), Get_Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_Choice_Hash() { return 49931157U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
