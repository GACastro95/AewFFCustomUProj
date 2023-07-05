// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSGeneralParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSGeneralParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGeneralParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSGeneralParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSGeneralParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSGeneralParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSGeneralParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSGeneralParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSGeneralParam"), sizeof(FSSGeneralParam), Get_Z_Construct_UScriptStruct_FSSGeneralParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSGeneralParam>()
{
	return FSSGeneralParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSGeneralParam(FSSGeneralParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSGeneralParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSGeneralParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSGeneralParam()
	{
		UScriptStruct::DeferCppStructOps<FSSGeneralParam>(FName(TEXT("SSGeneralParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSGeneralParam;
	struct Z_Construct_UScriptStruct_FSSGeneralParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSSAntiCheat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnableSSAntiCheat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisallowedCheatCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisallowedCheatCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGeneralParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSGeneralParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSGeneralParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_EnableSSAntiCheat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGeneralParam" },
		{ "ModuleRelativePath", "Public/SSGeneralParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_EnableSSAntiCheat = { "EnableSSAntiCheat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGeneralParam, EnableSSAntiCheat), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_EnableSSAntiCheat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_EnableSSAntiCheat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_DisallowedCheatCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGeneralParam" },
		{ "ModuleRelativePath", "Public/SSGeneralParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_DisallowedCheatCount = { "DisallowedCheatCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGeneralParam, DisallowedCheatCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_DisallowedCheatCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_DisallowedCheatCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSGeneralParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_EnableSSAntiCheat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGeneralParam_Statics::NewProp_DisallowedCheatCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSGeneralParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSGeneralParam",
		sizeof(FSSGeneralParam),
		alignof(FSSGeneralParam),
		Z_Construct_UScriptStruct_FSSGeneralParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGeneralParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGeneralParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGeneralParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSGeneralParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSGeneralParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSGeneralParam"), sizeof(FSSGeneralParam), Get_Z_Construct_UScriptStruct_FSSGeneralParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSGeneralParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSGeneralParam_Hash() { return 2238061340U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
