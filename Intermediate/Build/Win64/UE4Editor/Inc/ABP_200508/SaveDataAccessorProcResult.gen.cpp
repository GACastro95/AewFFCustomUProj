// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataAccessorProcResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataAccessorProcResult() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDataAccessorProcResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
// End Cross Module References
class UScriptStruct* FSaveDataAccessorProcResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveDataAccessorProcResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SaveDataAccessorProcResult"), sizeof(FSaveDataAccessorProcResult), Get_Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSaveDataAccessorProcResult>()
{
	return FSaveDataAccessorProcResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveDataAccessorProcResult(FSaveDataAccessorProcResult::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SaveDataAccessorProcResult"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSaveDataAccessorProcResult
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSaveDataAccessorProcResult()
	{
		UScriptStruct::DeferCppStructOps<FSaveDataAccessorProcResult>(FName(TEXT("SaveDataAccessorProcResult")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSaveDataAccessorProcResult;
	struct Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataAccessorEvent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataAccessorEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataAccessorEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveDataAccessorProcResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveDataAccessorProcResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_SaveDataAccessorEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_SaveDataAccessorEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessorProcResult" },
		{ "ModuleRelativePath", "Public/SaveDataAccessorProcResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_SaveDataAccessorEvent = { "SaveDataAccessorEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessorProcResult, SaveDataAccessorEvent), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_SaveDataAccessorEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_SaveDataAccessorEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessorProcResult" },
		{ "ModuleRelativePath", "Public/SaveDataAccessorProcResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessorProcResult, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_SaveDataAccessorEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_SaveDataAccessorEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SaveDataAccessorProcResult",
		sizeof(FSaveDataAccessorProcResult),
		alignof(FSaveDataAccessorProcResult),
		Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveDataAccessorProcResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveDataAccessorProcResult"), sizeof(FSaveDataAccessorProcResult), Get_Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveDataAccessorProcResult_Hash() { return 3630693085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
