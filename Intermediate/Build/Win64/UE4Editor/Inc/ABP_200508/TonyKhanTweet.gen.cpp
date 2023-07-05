// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TonyKhanTweet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTonyKhanTweet() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTonyKhanTweet();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FTonyKhanTweet>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTonyKhanTweet cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FTonyKhanTweet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FTonyKhanTweet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTonyKhanTweet, Z_Construct_UPackage__Script_ABP_200508(), TEXT("TonyKhanTweet"), sizeof(FTonyKhanTweet), Get_Z_Construct_UScriptStruct_FTonyKhanTweet_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FTonyKhanTweet>()
{
	return FTonyKhanTweet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTonyKhanTweet(FTonyKhanTweet::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("TonyKhanTweet"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFTonyKhanTweet
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFTonyKhanTweet()
	{
		UScriptStruct::DeferCppStructOps<FTonyKhanTweet>(FName(TEXT("TonyKhanTweet")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFTonyKhanTweet;
	struct Z_Construct_UScriptStruct_FTonyKhanTweet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TonyKhanTweet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTonyKhanTweet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TonyKhanTweet" },
		{ "ModuleRelativePath", "Public/TonyKhanTweet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTonyKhanTweet, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TonyKhanTweet" },
		{ "ModuleRelativePath", "Public/TonyKhanTweet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTonyKhanTweet, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TonyKhanTweet",
		sizeof(FTonyKhanTweet),
		alignof(FTonyKhanTweet),
		Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTonyKhanTweet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTonyKhanTweet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TonyKhanTweet"), sizeof(FTonyKhanTweet), Get_Z_Construct_UScriptStruct_FTonyKhanTweet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTonyKhanTweet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTonyKhanTweet_Hash() { return 3972157191U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
