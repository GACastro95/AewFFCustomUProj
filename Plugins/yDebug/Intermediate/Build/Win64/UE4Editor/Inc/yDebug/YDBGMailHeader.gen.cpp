// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDBGMailHeader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDBGMailHeader() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailHeader();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
class UScriptStruct* FYDBGMailHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FYDBGMailHeader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYDBGMailHeader, Z_Construct_UPackage__Script_yDebug(), TEXT("YDBGMailHeader"), sizeof(FYDBGMailHeader), Get_Z_Construct_UScriptStruct_FYDBGMailHeader_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FYDBGMailHeader>()
{
	return FYDBGMailHeader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYDBGMailHeader(FYDBGMailHeader::StaticStruct, TEXT("/Script/yDebug"), TEXT("YDBGMailHeader"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFYDBGMailHeader
{
	FScriptStruct_yDebug_StaticRegisterNativesFYDBGMailHeader()
	{
		UScriptStruct::DeferCppStructOps<FYDBGMailHeader>(FName(TEXT("YDBGMailHeader")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFYDBGMailHeader;
	struct Z_Construct_UScriptStruct_FYDBGMailHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_To_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Cc_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cc_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YDBGMailHeader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYDBGMailHeader>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_From_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailHeader" },
		{ "ModuleRelativePath", "Public/YDBGMailHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailHeader, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_To_Inner = { "To", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_To_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailHeader" },
		{ "ModuleRelativePath", "Public/YDBGMailHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailHeader, To), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_To_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_Cc_Inner = { "Cc", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_Cc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailHeader" },
		{ "ModuleRelativePath", "Public/YDBGMailHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_Cc = { "Cc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailHeader, Cc), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_Cc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_Cc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_To_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_Cc_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::NewProp_Cc,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"YDBGMailHeader",
		sizeof(FYDBGMailHeader),
		alignof(FYDBGMailHeader),
		Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYDBGMailHeader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YDBGMailHeader"), sizeof(FYDBGMailHeader), Get_Z_Construct_UScriptStruct_FYDBGMailHeader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYDBGMailHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYDBGMailHeader_Hash() { return 790721631U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
