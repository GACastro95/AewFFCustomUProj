// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSSyncStatusForWatch_Replicated.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSSyncStatusForWatch_Replicated() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
// End Cross Module References
class UScriptStruct* FSSSyncStatusForWatch_Replicated::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSSyncStatusForWatch_Replicated"), sizeof(FSSSyncStatusForWatch_Replicated), Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSSyncStatusForWatch_Replicated>()
{
	return FSSSyncStatusForWatch_Replicated::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSSyncStatusForWatch_Replicated(FSSSyncStatusForWatch_Replicated::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSSyncStatusForWatch_Replicated"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSSyncStatusForWatch_Replicated
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSSyncStatusForWatch_Replicated()
	{
		UScriptStruct::DeferCppStructOps<FSSSyncStatusForWatch_Replicated>(FName(TEXT("SSSyncStatusForWatch_Replicated")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSSyncStatusForWatch_Replicated;
	struct Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WatchTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSSyncStatusForWatch_Replicated.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSSyncStatusForWatch_Replicated>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_WatchTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSyncStatusForWatch_Replicated" },
		{ "ModuleRelativePath", "Public/SSSyncStatusForWatch_Replicated.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_WatchTarget = { "WatchTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSyncStatusForWatch_Replicated, WatchTarget), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_WatchTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_WatchTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_CameraDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSyncStatusForWatch_Replicated" },
		{ "ModuleRelativePath", "Public/SSSyncStatusForWatch_Replicated.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_CameraDirection = { "CameraDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSyncStatusForWatch_Replicated, CameraDirection), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_CameraDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_CameraDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_WatchTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::NewProp_CameraDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSSyncStatusForWatch_Replicated",
		sizeof(FSSSyncStatusForWatch_Replicated),
		alignof(FSSSyncStatusForWatch_Replicated),
		Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSSyncStatusForWatch_Replicated"), sizeof(FSSSyncStatusForWatch_Replicated), Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated_Hash() { return 1095823187U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
