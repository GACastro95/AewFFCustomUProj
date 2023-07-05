// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAnnounceParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAnnounceParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAnnounceParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAnnounceParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAnnounceParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAnnounceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAnnounceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAnnounceParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAnnounceParam"), sizeof(FSSAnnounceParam), Get_Z_Construct_UScriptStruct_FSSAnnounceParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAnnounceParam>()
{
	return FSSAnnounceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAnnounceParam(FSSAnnounceParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAnnounceParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAnnounceParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAnnounceParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAnnounceParam>(FName(TEXT("SSAnnounceParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAnnounceParam;
	struct Z_Construct_UScriptStruct_FSSAnnounceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueueName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAnnounceParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAnnounceParam>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::NewProp_QueueName_Inner = { "QueueName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::NewProp_QueueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAnnounceParam" },
		{ "ModuleRelativePath", "Public/SSAnnounceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAnnounceParam, QueueName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::NewProp_QueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::NewProp_QueueName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::NewProp_QueueName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::NewProp_QueueName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAnnounceParam",
		sizeof(FSSAnnounceParam),
		alignof(FSSAnnounceParam),
		Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAnnounceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAnnounceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAnnounceParam"), sizeof(FSSAnnounceParam), Get_Z_Construct_UScriptStruct_FSSAnnounceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAnnounceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAnnounceParam_Hash() { return 1119663626U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
