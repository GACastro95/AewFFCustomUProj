// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMoveRequestData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMoveRequestData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveRequestData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStateRequestParam();
// End Cross Module References
class UScriptStruct* FSSMoveRequestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMoveRequestData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMoveRequestData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMoveRequestData"), sizeof(FSSMoveRequestData), Get_Z_Construct_UScriptStruct_FSSMoveRequestData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMoveRequestData>()
{
	return FSSMoveRequestData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMoveRequestData(FSSMoveRequestData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMoveRequestData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveRequestData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveRequestData()
	{
		UScriptStruct::DeferCppStructOps<FSSMoveRequestData>(FName(TEXT("SSMoveRequestData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveRequestData;
	struct Z_Construct_UScriptStruct_FSSMoveRequestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SendHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMoveRequestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMoveRequestData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_SendHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveRequestData" },
		{ "ModuleRelativePath", "Public/SSMoveRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_SendHead = { "SendHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveRequestData, SendHead), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_SendHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_SendHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_ClientTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveRequestData" },
		{ "ModuleRelativePath", "Public/SSMoveRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_ClientTimeStamp = { "ClientTimeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveRequestData, ClientTimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_ClientTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_ClientTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_Acceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveRequestData" },
		{ "ModuleRelativePath", "Public/SSMoveRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveRequestData, Acceleration), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_StateRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveRequestData" },
		{ "ModuleRelativePath", "Public/SSMoveRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_StateRequest = { "StateRequest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveRequestData, StateRequest), Z_Construct_UScriptStruct_FSSStateRequestParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_StateRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_StateRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_SendHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_ClientTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::NewProp_StateRequest,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSMoveRequestData",
		sizeof(FSSMoveRequestData),
		alignof(FSSMoveRequestData),
		Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMoveRequestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMoveRequestData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMoveRequestData"), sizeof(FSSMoveRequestData), Get_Z_Construct_UScriptStruct_FSSMoveRequestData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMoveRequestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMoveRequestData_Hash() { return 851109914U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
