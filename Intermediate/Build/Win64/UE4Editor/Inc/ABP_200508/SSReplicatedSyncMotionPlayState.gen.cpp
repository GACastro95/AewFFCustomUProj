// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSReplicatedSyncMotionPlayState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSReplicatedSyncMotionPlayState() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
// End Cross Module References
class UScriptStruct* FSSReplicatedSyncMotionPlayState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSReplicatedSyncMotionPlayState"), sizeof(FSSReplicatedSyncMotionPlayState), Get_Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSReplicatedSyncMotionPlayState>()
{
	return FSSReplicatedSyncMotionPlayState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSReplicatedSyncMotionPlayState(FSSReplicatedSyncMotionPlayState::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSReplicatedSyncMotionPlayState"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSReplicatedSyncMotionPlayState
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSReplicatedSyncMotionPlayState()
	{
		UScriptStruct::DeferCppStructOps<FSSReplicatedSyncMotionPlayState>(FName(TEXT("SSReplicatedSyncMotionPlayState")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSReplicatedSyncMotionPlayState;
	struct Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiverFloorHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReceiverFloorHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiverLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReceiverLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSReplicatedSyncMotionPlayState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSReplicatedSyncMotionPlayState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverFloorHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedSyncMotionPlayState" },
		{ "ModuleRelativePath", "Public/SSReplicatedSyncMotionPlayState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverFloorHeight = { "ReceiverFloorHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedSyncMotionPlayState, ReceiverFloorHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverFloorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverFloorHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_OriginLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedSyncMotionPlayState" },
		{ "ModuleRelativePath", "Public/SSReplicatedSyncMotionPlayState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_OriginLocation = { "OriginLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedSyncMotionPlayState, OriginLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_OriginLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_OriginLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedSyncMotionPlayState" },
		{ "ModuleRelativePath", "Public/SSReplicatedSyncMotionPlayState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverLocation = { "ReceiverLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedSyncMotionPlayState, ReceiverLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverFloorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_OriginLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::NewProp_ReceiverLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSReplicatedSyncMotionPlayState",
		sizeof(FSSReplicatedSyncMotionPlayState),
		alignof(FSSReplicatedSyncMotionPlayState),
		Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSReplicatedSyncMotionPlayState"), sizeof(FSSReplicatedSyncMotionPlayState), Get_Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSReplicatedSyncMotionPlayState_Hash() { return 1805506076U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
