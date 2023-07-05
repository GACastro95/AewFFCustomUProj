// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/yMenuInputParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyMenuInputParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FyMenuInputParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FyMenuInputParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FyMenuInputParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FyMenuInputParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FyMenuInputParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FyMenuInputParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("yMenuInputParam"), sizeof(FyMenuInputParam), Get_Z_Construct_UScriptStruct_FyMenuInputParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FyMenuInputParam>()
{
	return FyMenuInputParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FyMenuInputParam(FyMenuInputParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("yMenuInputParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFyMenuInputParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFyMenuInputParam()
	{
		UScriptStruct::DeferCppStructOps<FyMenuInputParam>(FName(TEXT("yMenuInputParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFyMenuInputParam;
	struct Z_Construct_UScriptStruct_FyMenuInputParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepeatStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatFastestTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepeatFastestTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepeatAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyMenuInputParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/yMenuInputParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FyMenuInputParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yMenuInputParam" },
		{ "ModuleRelativePath", "Public/yMenuInputParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatStartTime = { "RepeatStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyMenuInputParam, RepeatStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatFastestTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yMenuInputParam" },
		{ "ModuleRelativePath", "Public/yMenuInputParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatFastestTime = { "RepeatFastestTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyMenuInputParam, RepeatFastestTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatFastestTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatFastestTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yMenuInputParam" },
		{ "ModuleRelativePath", "Public/yMenuInputParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatAcceleration = { "RepeatAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyMenuInputParam, RepeatAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatAcceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FyMenuInputParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatFastestTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyMenuInputParam_Statics::NewProp_RepeatAcceleration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FyMenuInputParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"yMenuInputParam",
		sizeof(FyMenuInputParam),
		alignof(FyMenuInputParam),
		Z_Construct_UScriptStruct_FyMenuInputParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyMenuInputParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FyMenuInputParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyMenuInputParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FyMenuInputParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FyMenuInputParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("yMenuInputParam"), sizeof(FyMenuInputParam), Get_Z_Construct_UScriptStruct_FyMenuInputParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FyMenuInputParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FyMenuInputParam_Hash() { return 1377582826U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
