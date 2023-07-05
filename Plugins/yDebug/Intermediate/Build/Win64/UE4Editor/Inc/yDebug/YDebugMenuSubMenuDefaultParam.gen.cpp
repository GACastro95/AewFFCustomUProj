// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDebugMenuSubMenuDefaultParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuSubMenuDefaultParam() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
class UScriptStruct* FYDebugMenuSubMenuDefaultParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam, Z_Construct_UPackage__Script_yDebug(), TEXT("YDebugMenuSubMenuDefaultParam"), sizeof(FYDebugMenuSubMenuDefaultParam), Get_Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FYDebugMenuSubMenuDefaultParam>()
{
	return FYDebugMenuSubMenuDefaultParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYDebugMenuSubMenuDefaultParam(FYDebugMenuSubMenuDefaultParam::StaticStruct, TEXT("/Script/yDebug"), TEXT("YDebugMenuSubMenuDefaultParam"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFYDebugMenuSubMenuDefaultParam
{
	FScriptStruct_yDebug_StaticRegisterNativesFYDebugMenuSubMenuDefaultParam()
	{
		UScriptStruct::DeferCppStructOps<FYDebugMenuSubMenuDefaultParam>(FName(TEXT("YDebugMenuSubMenuDefaultParam")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFYDebugMenuSubMenuDefaultParam;
	struct Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableNameSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringTableNameSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuDefaultParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYDebugMenuSubMenuDefaultParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuSubMenuDefaultParam" },
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuSubMenuDefaultParam, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuSubMenuDefaultParam" },
		{ "ModuleRelativePath", "Public/YDebugMenuSubMenuDefaultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace = { "StringTableNameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuSubMenuDefaultParam, StringTableNameSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::NewProp_StringTableNameSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"YDebugMenuSubMenuDefaultParam",
		sizeof(FYDebugMenuSubMenuDefaultParam),
		alignof(FYDebugMenuSubMenuDefaultParam),
		Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YDebugMenuSubMenuDefaultParam"), sizeof(FYDebugMenuSubMenuDefaultParam), Get_Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuSubMenuDefaultParam_Hash() { return 590022386U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
