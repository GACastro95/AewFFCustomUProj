// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMoveResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMoveResult() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveRequestData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSSMoveResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMoveResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMoveResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMoveResult"), sizeof(FSSMoveResult), Get_Z_Construct_UScriptStruct_FSSMoveResult_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMoveResult>()
{
	return FSSMoveResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMoveResult(FSSMoveResult::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMoveResult"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveResult
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveResult()
	{
		UScriptStruct::DeferCppStructOps<FSSMoveResult>(FName(TEXT("SSMoveResult")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveResult;
	struct Z_Construct_UScriptStruct_FSSMoveResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_response_MetaData[];
#endif
		static void NewProp_response_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_response;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendHead_MetaData[];
#endif
		static void NewProp_SendHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SendHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiMoved_MetaData[];
#endif
		static void NewProp_MultiMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MultiMoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoodMove_MetaData[];
#endif
		static void NewProp_GoodMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GoodMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BottomLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementBaseActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementBaseActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMoveResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_response_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveResult" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_response_SetBit(void* Obj)
	{
		((FSSMoveResult*)Obj)->response = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSMoveResult), &Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_response_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_response_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_response_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_SendHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveResult" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_SendHead_SetBit(void* Obj)
	{
		((FSSMoveResult*)Obj)->SendHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_SendHead = { "SendHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSMoveResult), &Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_SendHead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_SendHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_SendHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MultiMoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveResult" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MultiMoved_SetBit(void* Obj)
	{
		((FSSMoveResult*)Obj)->MultiMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MultiMoved = { "MultiMoved", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSMoveResult), &Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MultiMoved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MultiMoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MultiMoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_GoodMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveResult" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_GoodMove_SetBit(void* Obj)
	{
		((FSSMoveResult*)Obj)->GoodMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_GoodMove = { "GoodMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSMoveResult), &Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_GoodMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_GoodMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_GoodMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Timestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveResult" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveResult, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_RequestData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveResult" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_RequestData = { "RequestData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveResult, RequestData), Z_Construct_UScriptStruct_FSSMoveRequestData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_RequestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_RequestData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_BottomLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveResult" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_BottomLocation = { "BottomLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveResult, BottomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_BottomLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_BottomLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveResult" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveResult, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MovementBaseActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveResult" },
		{ "ModuleRelativePath", "Public/SSMoveResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MovementBaseActor = { "MovementBaseActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveResult, MovementBaseActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MovementBaseActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MovementBaseActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMoveResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_SendHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MultiMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_GoodMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_RequestData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_BottomLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveResult_Statics::NewProp_MovementBaseActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMoveResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSMoveResult",
		sizeof(FSSMoveResult),
		alignof(FSSMoveResult),
		Z_Construct_UScriptStruct_FSSMoveResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMoveResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMoveResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMoveResult"), sizeof(FSSMoveResult), Get_Z_Construct_UScriptStruct_FSSMoveResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMoveResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMoveResult_Hash() { return 3915921760U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
