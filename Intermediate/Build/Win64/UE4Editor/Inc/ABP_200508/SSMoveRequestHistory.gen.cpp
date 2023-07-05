// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMoveRequestHistory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMoveRequestHistory() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveRequestHistory();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveRequestData();
// End Cross Module References
class UScriptStruct* FSSMoveRequestHistory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMoveRequestHistory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMoveRequestHistory, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMoveRequestHistory"), sizeof(FSSMoveRequestHistory), Get_Z_Construct_UScriptStruct_FSSMoveRequestHistory_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMoveRequestHistory>()
{
	return FSSMoveRequestHistory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMoveRequestHistory(FSSMoveRequestHistory::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMoveRequestHistory"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveRequestHistory
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveRequestHistory()
	{
		UScriptStruct::DeferCppStructOps<FSSMoveRequestHistory>(FName(TEXT("SSMoveRequestHistory")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveRequestHistory;
	struct Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMoveRequestHistory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMoveRequestHistory>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::NewProp_RequestDatas_Inner = { "RequestDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSMoveRequestData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::NewProp_RequestDatas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveRequestHistory" },
		{ "ModuleRelativePath", "Public/SSMoveRequestHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::NewProp_RequestDatas = { "RequestDatas", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveRequestHistory, RequestDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::NewProp_RequestDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::NewProp_RequestDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::NewProp_RequestDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::NewProp_RequestDatas,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSMoveRequestHistory",
		sizeof(FSSMoveRequestHistory),
		alignof(FSSMoveRequestHistory),
		Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMoveRequestHistory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMoveRequestHistory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMoveRequestHistory"), sizeof(FSSMoveRequestHistory), Get_Z_Construct_UScriptStruct_FSSMoveRequestHistory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMoveRequestHistory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMoveRequestHistory_Hash() { return 714661225U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
