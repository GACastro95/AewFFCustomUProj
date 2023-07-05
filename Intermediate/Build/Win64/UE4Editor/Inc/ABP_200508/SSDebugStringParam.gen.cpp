// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDebugStringParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDebugStringParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugStringParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDebugStringCategory();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLocalDebugFlag();
// End Cross Module References

static_assert(std::is_polymorphic<FSSDebugStringParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSDebugStringParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSDebugStringParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDebugStringParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDebugStringParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDebugStringParam"), sizeof(FSSDebugStringParam), Get_Z_Construct_UScriptStruct_FSSDebugStringParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDebugStringParam>()
{
	return FSSDebugStringParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDebugStringParam(FSSDebugStringParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDebugStringParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugStringParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugStringParam()
	{
		UScriptStruct::DeferCppStructOps<FSSDebugStringParam>(FName(TEXT("SSDebugStringParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugStringParam;
	struct Z_Construct_UScriptStruct_FSSDebugStringParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmptyTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDisable_MetaData[];
#endif
		static void NewProp_AutoDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoDisable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrintToLog_MetaData[];
#endif
		static void NewProp_PrintToLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrintToLog;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HideFlag_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HideFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDebugStringParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDebugStringParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringParam" },
		{ "ModuleRelativePath", "Public/SSDebugStringParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugStringParam, Category), Z_Construct_UEnum_ABP_200508_ESSDebugStringCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringParam" },
		{ "ModuleRelativePath", "Public/SSDebugStringParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugStringParam, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_EmptyTitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringParam" },
		{ "ModuleRelativePath", "Public/SSDebugStringParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_EmptyTitle = { "EmptyTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugStringParam, EmptyTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_EmptyTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_EmptyTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_SortOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringParam" },
		{ "ModuleRelativePath", "Public/SSDebugStringParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugStringParam, SortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringParam" },
		{ "ModuleRelativePath", "Public/SSDebugStringParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugStringParam, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_AutoDisable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringParam" },
		{ "ModuleRelativePath", "Public/SSDebugStringParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_AutoDisable_SetBit(void* Obj)
	{
		((FSSDebugStringParam*)Obj)->AutoDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_AutoDisable = { "AutoDisable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugStringParam), &Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_AutoDisable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_AutoDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_AutoDisable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_PrintToLog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringParam" },
		{ "ModuleRelativePath", "Public/SSDebugStringParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_PrintToLog_SetBit(void* Obj)
	{
		((FSSDebugStringParam*)Obj)->PrintToLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_PrintToLog = { "PrintToLog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugStringParam), &Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_PrintToLog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_PrintToLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_PrintToLog_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_HideFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_HideFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugStringParam" },
		{ "ModuleRelativePath", "Public/SSDebugStringParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_HideFlag = { "HideFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugStringParam, HideFlag), Z_Construct_UEnum_ABP_200508_ESSLocalDebugFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_HideFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_HideFlag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_EmptyTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_AutoDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_PrintToLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_HideFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::NewProp_HideFlag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSDebugStringParam",
		sizeof(FSSDebugStringParam),
		alignof(FSSDebugStringParam),
		Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDebugStringParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDebugStringParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDebugStringParam"), sizeof(FSSDebugStringParam), Get_Z_Construct_UScriptStruct_FSSDebugStringParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDebugStringParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDebugStringParam_Hash() { return 3662455177U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
