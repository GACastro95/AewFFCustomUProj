// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PSplitQueueTransferConnectionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PSplitQueueTransferConnectionState() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FEOSNatP2PSplitQueueTransferConnectionState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSNatP2PSplitQueueTransferConnectionState"), sizeof(FEOSNatP2PSplitQueueTransferConnectionState), Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSNatP2PSplitQueueTransferConnectionState>()
{
	return FEOSNatP2PSplitQueueTransferConnectionState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState(FEOSNatP2PSplitQueueTransferConnectionState::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSNatP2PSplitQueueTransferConnectionState"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PSplitQueueTransferConnectionState
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PSplitQueueTransferConnectionState()
	{
		UScriptStruct::DeferCppStructOps<FEOSNatP2PSplitQueueTransferConnectionState>(FName(TEXT("EOSNatP2PSplitQueueTransferConnectionState")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PSplitQueueTransferConnectionState;
	struct Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequestCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRequestDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRequestDateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastResponseDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastResponseDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransferConnectionState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSNatP2PSplitQueueTransferConnectionState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_RequestCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransferConnectionState" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransferConnectionState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_RequestCount = { "RequestCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PSplitQueueTransferConnectionState, RequestCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_RequestCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_RequestCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastRequestDateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransferConnectionState" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransferConnectionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastRequestDateTime = { "LastRequestDateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PSplitQueueTransferConnectionState, LastRequestDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastRequestDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastRequestDateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastResponseDateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransferConnectionState" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransferConnectionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastResponseDateTime = { "LastResponseDateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PSplitQueueTransferConnectionState, LastResponseDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastResponseDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastResponseDateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_RequestCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastRequestDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::NewProp_LastResponseDateTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSNatP2PSplitQueueTransferConnectionState",
		sizeof(FEOSNatP2PSplitQueueTransferConnectionState),
		alignof(FEOSNatP2PSplitQueueTransferConnectionState),
		Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSNatP2PSplitQueueTransferConnectionState"), sizeof(FEOSNatP2PSplitQueueTransferConnectionState), Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState_Hash() { return 3245725770U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
