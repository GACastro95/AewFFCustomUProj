// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSSessionSearchResultWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSSessionSearchResultWrapper() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
// End Cross Module References
class UScriptStruct* FELEOSSessionSearchResultWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEOSSessionSearchResultWrapper"), sizeof(FELEOSSessionSearchResultWrapper), Get_Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEOSSessionSearchResultWrapper>()
{
	return FELEOSSessionSearchResultWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEOSSessionSearchResultWrapper(FELEOSSessionSearchResultWrapper::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEOSSessionSearchResultWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSSessionSearchResultWrapper
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSSessionSearchResultWrapper()
	{
		UScriptStruct::DeferCppStructOps<FELEOSSessionSearchResultWrapper>(FName(TEXT("ELEOSSessionSearchResultWrapper")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEOSSessionSearchResultWrapper;
	struct Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Results_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Results_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEOSSessionSearchResultWrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEOSSessionSearchResultWrapper>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewProp_Results_ValueProp = { "Results", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewProp_Results_Key_KeyProp = { "Results_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewProp_Results_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSSessionSearchResultWrapper" },
		{ "ModuleRelativePath", "Public/ELEOSSessionSearchResultWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSSessionSearchResultWrapper, Results), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewProp_Results_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewProp_Results_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::NewProp_Results,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELEOSSessionSearchResultWrapper",
		sizeof(FELEOSSessionSearchResultWrapper),
		alignof(FELEOSSessionSearchResultWrapper),
		Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEOSSessionSearchResultWrapper"), sizeof(FELEOSSessionSearchResultWrapper), Get_Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEOSSessionSearchResultWrapper_Hash() { return 3403059539U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
