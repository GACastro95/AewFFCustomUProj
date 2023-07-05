// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSResponseBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSResponseBase() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSResponseBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eErrorStatusType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSAWSErrorResponseData();
// End Cross Module References
class UScriptStruct* FELSSResponseBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSResponseBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSResponseBase, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSResponseBase"), sizeof(FELSSResponseBase), Get_Z_Construct_UScriptStruct_FELSSResponseBase_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSResponseBase>()
{
	return FELSSResponseBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSResponseBase(FELSSResponseBase::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSResponseBase"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSResponseBase
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSResponseBase()
	{
		UScriptStruct::DeferCppStructOps<FELSSResponseBase>(FName(TEXT("ELSSResponseBase")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSResponseBase;
	struct Z_Construct_UScriptStruct_FELSSResponseBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorStatusId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errorStatusId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorStatusIdAWS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errorStatusIdAWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorAWS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errorAWS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSResponseBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSResponseBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSResponseBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSResponseBase" },
		{ "ModuleRelativePath", "Public/ELSSResponseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSResponseBase, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSResponseBase" },
		{ "ModuleRelativePath", "Public/ELSSResponseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSResponseBase, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSResponseBase" },
		{ "ModuleRelativePath", "Public/ELSSResponseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSResponseBase, ErrorType), Z_Construct_UEnum_ABP_200508_eErrorStatusType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSResponseBase" },
		{ "ModuleRelativePath", "Public/ELSSResponseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusId = { "errorStatusId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSResponseBase, errorStatusId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusIdAWS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSResponseBase" },
		{ "ModuleRelativePath", "Public/ELSSResponseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusIdAWS = { "errorStatusIdAWS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSResponseBase, errorStatusIdAWS), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusIdAWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusIdAWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorAWS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSResponseBase" },
		{ "ModuleRelativePath", "Public/ELSSResponseBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorAWS = { "errorAWS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSResponseBase, errorAWS), Z_Construct_UScriptStruct_FELSSAWSErrorResponseData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorAWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorAWS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSResponseBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorStatusIdAWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSResponseBase_Statics::NewProp_errorAWS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSResponseBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSResponseBase",
		sizeof(FELSSResponseBase),
		alignof(FELSSResponseBase),
		Z_Construct_UScriptStruct_FELSSResponseBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSResponseBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSResponseBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSResponseBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSResponseBase"), sizeof(FELSSResponseBase), Get_Z_Construct_UScriptStruct_FELSSResponseBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSResponseBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSResponseBase_Hash() { return 3234046341U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
